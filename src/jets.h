#ifndef FIRMWARE_dataformats_jets_h
#define FIRMWARE_dataformats_jets_h

#include "datatypes.h"
#include "bit_encoding.h"
#include <array>
#include <cstdint>

namespace l1ct {

  struct Jet {
    pt_t hwPt;
    glbeta_t hwEta;
    glbphi_t hwPhi;

    inline bool operator==(const Jet &other) const {
      return hwPt == other.hwPt && hwEta == other.hwEta && hwPhi == other.hwPhi;
    }

    inline bool operator>(const Jet &other) const { return hwPt > other.hwPt; }
    inline bool operator<(const Jet &other) const { return hwPt < other.hwPt; }

    inline void clear() {
      hwPt = 0;
      hwEta = 0;
      hwPhi = 0;
    }

    int intPt() const { return Scales::intPt(hwPt); }
    int intEta() const { return hwEta.to_int(); }
    int intPhi() const { return hwPhi.to_int(); }
    float floatPt() const { return Scales::floatPt(hwPt); }
    float floatEta() const { return Scales::floatEta(hwEta); }
    float floatPhi() const { return Scales::floatPhi(hwPhi); }

    static const int BITWIDTH = pt_t::width + glbeta_t::width + glbphi_t::width;
    inline ap_uint<BITWIDTH> pack_ap() const {
      ap_uint<BITWIDTH> ret;
      unsigned int start = 0;
      _pack_into_bits(ret, start, hwPt);
      _pack_into_bits(ret, start, hwEta);
      _pack_into_bits(ret, start, hwPhi);
      return ret;
    }

    inline std::array<uint64_t, 2> pack() const {
      std::array<uint64_t, 2> packed;
      ap_uint<BITWIDTH> bits = this->pack_ap();
      packed[0] = bits;
     //packed[1] = bits[slice]; // for when there are more than 64 bits in the word
     return packed;
    }

    inline static Jet unpack_ap(const ap_uint<BITWIDTH> &src) {
      Jet ret;
      ret.initFromBits(src);
      return ret;
    }

    inline void initFromBits(const ap_uint<BITWIDTH> &src) {
      unsigned int start = 0;
      _unpack_from_bits(src, start, hwPt);
      _unpack_from_bits(src, start, hwEta);
      _unpack_from_bits(src, start, hwPhi);
    }

    inline static Jet unpack(const std::array<uint64_t, 2> &src) {
      // just one set while the word has fewer than 64 bits
      ap_uint<BITWIDTH> bits = src[0];
      return unpack_ap(bits);
    }
  };

  inline void clear(Jet &c) { c.clear(); }

}  // namespace l1ct

#endif
