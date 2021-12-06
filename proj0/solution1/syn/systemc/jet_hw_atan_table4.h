// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __jet_hw_atan_table4_H__
#define __jet_hw_atan_table4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct jet_hw_atan_table4_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(jet_hw_atan_table4_ram) {
        ram[0] = "0b0000000";
        ram[1] = "0b0000001";
        ram[2] = "0b0000011";
        ram[3] = "0b0000100";
        ram[4] = "0b0000101";
        ram[5] = "0b0000110";
        ram[6] = "0b0001000";
        ram[7] = "0b0001001";
        ram[8] = "0b0001010";
        ram[9] = "0b0001011";
        ram[10] = "0b0001101";
        ram[11] = "0b0001110";
        ram[12] = "0b0001111";
        ram[13] = "0b0010000";
        ram[14] = "0b0010010";
        ram[15] = "0b0010011";
        ram[16] = "0b0010100";
        ram[17] = "0b0010110";
        ram[18] = "0b0010111";
        ram[19] = "0b0011000";
        ram[20] = "0b0011001";
        ram[21] = "0b0011011";
        ram[22] = "0b0011100";
        ram[23] = "0b0011101";
        ram[24] = "0b0011110";
        ram[25] = "0b0011111";
        ram[26] = "0b0100001";
        ram[27] = "0b0100010";
        ram[28] = "0b0100011";
        ram[29] = "0b0100100";
        ram[30] = "0b0100110";
        ram[31] = "0b0100111";
        ram[32] = "0b0101000";
        ram[33] = "0b0101001";
        ram[34] = "0b0101010";
        ram[35] = "0b0101100";
        ram[36] = "0b0101101";
        ram[37] = "0b0101110";
        ram[38] = "0b0101111";
        ram[39] = "0b0110000";
        ram[40] = "0b0110001";
        ram[41] = "0b0110011";
        ram[42] = "0b0110100";
        ram[43] = "0b0110101";
        ram[44] = "0b0110110";
        ram[45] = "0b0110111";
        ram[46] = "0b0111000";
        ram[47] = "0b0111001";
        ram[48] = "0b0111010";
        ram[49] = "0b0111100";
        ram[50] = "0b0111101";
        ram[51] = "0b0111110";
        ram[52] = "0b0111111";
        ram[53] = "0b1000000";
        ram[54] = "0b1000001";
        ram[55] = "0b1000010";
        ram[56] = "0b1000011";
        ram[57] = "0b1000100";
        ram[58] = "0b1000101";
        ram[59] = "0b1000110";
        ram[60] = "0b1000111";
        ram[61] = "0b1001000";
        ram[62] = "0b1001010";
        ram[63] = "0b1001011";
        ram[64] = "0b1001100";
        ram[65] = "0b1001101";
        ram[66] = "0b1001110";
        ram[67] = "0b1001111";
        ram[68] = "0b1010000";
        ram[69] = "0b1010001";
        ram[70] = "0b1010010";
        ram[71] = "0b1010011";
        ram[72] = "0b1010100";
        ram[73] = "0b1010100";
        ram[74] = "0b1010101";
        ram[75] = "0b1010110";
        ram[76] = "0b1010111";
        ram[77] = "0b1011000";
        ram[78] = "0b1011001";
        ram[79] = "0b1011010";
        ram[80] = "0b1011011";
        ram[81] = "0b1011100";
        ram[82] = "0b1011101";
        ram[83] = "0b1011110";
        ram[84] = "0b1011111";
        ram[85] = "0b1100000";
        ram[86] = "0b1100000";
        ram[87] = "0b1100001";
        ram[88] = "0b1100010";
        ram[89] = "0b1100011";
        ram[90] = "0b1100100";
        ram[91] = "0b1100101";
        ram[92] = "0b1100110";
        ram[93] = "0b1100110";
        ram[94] = "0b1100111";
        ram[95] = "0b1101000";
        ram[96] = "0b1101001";
        ram[97] = "0b1101010";
        ram[98] = "0b1101010";
        ram[99] = "0b1101011";
        ram[100] = "0b1101100";
        ram[101] = "0b1101101";
        ram[102] = "0b1101110";
        ram[103] = "0b1101110";
        ram[104] = "0b1101111";
        ram[105] = "0b1110000";
        ram[106] = "0b1110001";
        ram[107] = "0b1110001";
        ram[108] = "0b1110010";
        ram[109] = "0b1110011";
        ram[110] = "0b1110100";
        ram[111] = "0b1110100";
        ram[112] = "0b1110101";
        ram[113] = "0b1110110";
        ram[114] = "0b1110111";
        ram[115] = "0b1110111";
        ram[116] = "0b1111000";
        ram[117] = "0b1111001";
        ram[118] = "0b1111001";
        ram[119] = "0b1111010";
        ram[120] = "0b1111011";
        ram[121] = "0b1111011";
        ram[122] = "0b1111100";
        ram[123] = "0b1111101";
        ram[124] = "0b1111101";
        ram[125] = "0b1111110";
        ram[126] = "0b1111111";
        ram[127] = "0b1111111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(jet_hw_atan_table4) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


jet_hw_atan_table4_ram* meminst;


SC_CTOR(jet_hw_atan_table4) {
meminst = new jet_hw_atan_table4_ram("jet_hw_atan_table4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~jet_hw_atan_table4() {
    delete meminst;
}


};//endmodule
#endif
