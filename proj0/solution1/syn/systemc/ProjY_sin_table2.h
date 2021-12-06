// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __ProjY_sin_table2_H__
#define __ProjY_sin_table2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct ProjY_sin_table2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(ProjY_sin_table2_ram) {
        ram[0] = "0b0000000000000000";
        ram[1] = "0b0000000110010010";
        ram[2] = "0b0000001100100100";
        ram[3] = "0b0000010010110110";
        ram[4] = "0b0000011001001000";
        ram[5] = "0b0000011111011010";
        ram[6] = "0b0000100101101100";
        ram[7] = "0b0000101011111110";
        ram[8] = "0b0000110010010000";
        ram[9] = "0b0000111000100001";
        ram[10] = "0b0000111110110011";
        ram[11] = "0b0001000101000100";
        ram[12] = "0b0001001011010101";
        ram[13] = "0b0001010001100110";
        ram[14] = "0b0001010111110111";
        ram[15] = "0b0001011110000111";
        ram[16] = "0b0001100100011000";
        ram[17] = "0b0001101010101000";
        ram[18] = "0b0001110000111000";
        ram[19] = "0b0001110111000111";
        ram[20] = "0b0001111101010110";
        ram[21] = "0b0010000011100101";
        ram[22] = "0b0010001001110100";
        ram[23] = "0b0010010000000010";
        ram[24] = "0b0010010110010000";
        ram[25] = "0b0010011100011110";
        ram[26] = "0b0010100010101011";
        ram[27] = "0b0010101000111000";
        ram[28] = "0b0010101111000100";
        ram[29] = "0b0010110101010000";
        ram[30] = "0b0010111011011100";
        ram[31] = "0b0011000001100111";
        ram[32] = "0b0011000111110001";
        ram[33] = "0b0011001101111100";
        ram[34] = "0b0011010100000101";
        ram[35] = "0b0011011010001110";
        ram[36] = "0b0011100000010111";
        ram[37] = "0b0011100110011111";
        ram[38] = "0b0011101100100111";
        ram[39] = "0b0011110010101110";
        ram[40] = "0b0011111000110100";
        ram[41] = "0b0011111110111010";
        ram[42] = "0b0100000100111111";
        ram[43] = "0b0100001011000011";
        ram[44] = "0b0100010001000111";
        ram[45] = "0b0100010111001011";
        ram[46] = "0b0100011101001101";
        ram[47] = "0b0100100011001111";
        ram[48] = "0b0100101001010000";
        ram[49] = "0b0100101111010001";
        ram[50] = "0b0100110101010000";
        ram[51] = "0b0100111011001111";
        ram[52] = "0b0101000001001101";
        ram[53] = "0b0101000111001011";
        ram[54] = "0b0101001101001000";
        ram[55] = "0b0101010011000011";
        ram[56] = "0b0101011000111110";
        ram[57] = "0b0101011110111001";
        ram[58] = "0b0101100100110010";
        ram[59] = "0b0101101010101010";
        ram[60] = "0b0101110000100010";
        ram[61] = "0b0101110110011001";
        ram[62] = "0b0101111100001111";
        ram[63] = "0b0110000010000100";
        ram[64] = "0b0110000111111000";
        ram[65] = "0b0110001101101011";
        ram[66] = "0b0110010011011101";
        ram[67] = "0b0110011001001110";
        ram[68] = "0b0110011110111110";
        ram[69] = "0b0110100100101101";
        ram[70] = "0b0110101010011011";
        ram[71] = "0b0110110000001000";
        ram[72] = "0b0110110101110100";
        ram[73] = "0b0110111011011111";
        ram[74] = "0b0111000001001001";
        ram[75] = "0b0111000110110010";
        ram[76] = "0b0111001100011010";
        ram[77] = "0b0111010010000000";
        ram[78] = "0b0111010111100110";
        ram[79] = "0b0111011101001010";
        ram[80] = "0b0111100010101101";
        ram[81] = "0b0111101000010000";
        ram[82] = "0b0111101101110000";
        ram[83] = "0b0111110011010000";
        ram[84] = "0b0111111000101111";
        ram[85] = "0b0111111110001100";
        ram[86] = "0b1000000011101000";
        ram[87] = "0b1000001001000011";
        ram[88] = "0b1000001110011100";
        ram[89] = "0b1000010011110101";
        ram[90] = "0b1000011001001100";
        ram[91] = "0b1000011110100001";
        ram[92] = "0b1000100011110110";
        ram[93] = "0b1000101001001001";
        ram[94] = "0b1000101110011010";
        ram[95] = "0b1000110011101011";
        ram[96] = "0b1000111000111010";
        ram[97] = "0b1000111110001000";
        ram[98] = "0b1001000011010100";
        ram[99] = "0b1001001000011111";
        ram[100] = "0b1001001101101000";
        ram[101] = "0b1001010010110000";
        ram[102] = "0b1001010111110111";
        ram[103] = "0b1001011100111100";
        ram[104] = "0b1001100010000000";
        ram[105] = "0b1001100111000010";
        ram[106] = "0b1001101100000011";
        ram[107] = "0b1001110001000010";
        ram[108] = "0b1001110110000000";
        ram[109] = "0b1001111010111100";
        ram[110] = "0b1001111111110111";
        ram[111] = "0b1010000100110000";
        ram[112] = "0b1010001001101000";
        ram[113] = "0b1010001110011110";
        ram[114] = "0b1010010011010010";
        ram[115] = "0b1010011000000101";
        ram[116] = "0b1010011100110110";
        ram[117] = "0b1010100001100110";
        ram[118] = "0b1010100110010100";
        ram[119] = "0b1010101011000001";
        ram[120] = "0b1010101111101011";
        ram[121] = "0b1010110100010100";
        ram[122] = "0b1010111000111100";
        ram[123] = "0b1010111101100010";
        ram[124] = "0b1011000010000110";
        ram[125] = "0b1011000110101000";
        ram[126] = "0b1011001011001001";
        ram[127] = "0b1011001111101000";
        ram[128] = "0b1011010100000101";
        ram[129] = "0b1011011000100000";
        ram[130] = "0b1011011100111010";
        ram[131] = "0b1011100001010010";
        ram[132] = "0b1011100101101000";
        ram[133] = "0b1011101001111101";
        ram[134] = "0b1011101110001111";
        ram[135] = "0b1011110010100000";
        ram[136] = "0b1011110110101111";
        ram[137] = "0b1011111010111100";
        ram[138] = "0b1011111111000111";
        ram[139] = "0b1100000011010001";
        ram[140] = "0b1100000111011000";
        ram[141] = "0b1100001011011110";
        ram[142] = "0b1100001111100010";
        ram[143] = "0b1100010011100100";
        ram[144] = "0b1100010111100100";
        ram[145] = "0b1100011011100010";
        ram[146] = "0b1100011111011110";
        ram[147] = "0b1100100011011001";
        ram[148] = "0b1100100111010001";
        ram[149] = "0b1100101011001000";
        ram[150] = "0b1100101110111100";
        ram[151] = "0b1100110010101110";
        ram[152] = "0b1100110110011111";
        ram[153] = "0b1100111010001110";
        ram[154] = "0b1100111101111010";
        ram[155] = "0b1101000001100101";
        ram[156] = "0b1101000101001101";
        ram[157] = "0b1101001000110100";
        ram[158] = "0b1101001100011000";
        ram[159] = "0b1101001111111011";
        ram[160] = "0b1101010011011011";
        ram[161] = "0b1101010110111010";
        ram[162] = "0b1101011010010110";
        ram[163] = "0b1101011101110000";
        ram[164] = "0b1101100001001000";
        ram[165] = "0b1101100100011110";
        ram[166] = "0b1101100111110010";
        ram[167] = "0b1101101011000100";
        ram[168] = "0b1101101110010100";
        ram[169] = "0b1101110001100010";
        ram[170] = "0b1101110100101101";
        ram[171] = "0b1101110111110111";
        ram[172] = "0b1101111010111110";
        ram[173] = "0b1101111110000011";
        ram[174] = "0b1110000001000110";
        ram[175] = "0b1110000100000111";
        ram[176] = "0b1110000111000110";
        ram[177] = "0b1110001010000010";
        ram[178] = "0b1110001100111100";
        ram[179] = "0b1110001111110100";
        ram[180] = "0b1110010010101010";
        ram[181] = "0b1110010101011110";
        ram[182] = "0b1110011000010000";
        ram[183] = "0b1110011010111111";
        ram[184] = "0b1110011101101100";
        ram[185] = "0b1110100000010111";
        ram[186] = "0b1110100010111111";
        ram[187] = "0b1110100101100110";
        ram[188] = "0b1110101000001010";
        ram[189] = "0b1110101010101011";
        ram[190] = "0b1110101101001011";
        ram[191] = "0b1110101111101000";
        ram[192] = "0b1110110010000011";
        ram[193] = "0b1110110100011100";
        ram[194] = "0b1110110110110011";
        ram[195] = "0b1110111001000111";
        ram[196] = "0b1110111011011001";
        ram[197] = "0b1110111101101000";
        ram[198] = "0b1110111111110101";
        ram[199] = "0b1111000010000000";
        ram[200] = "0b1111000100001001";
        ram[201] = "0b1111000110001111";
        ram[202] = "0b1111001000010011";
        ram[203] = "0b1111001010010101";
        ram[204] = "0b1111001100010100";
        ram[205] = "0b1111001110010001";
        ram[206] = "0b1111010000001100";
        ram[207] = "0b1111010010000100";
        ram[208] = "0b1111010011111010";
        ram[209] = "0b1111010101101110";
        ram[210] = "0b1111010111011111";
        ram[211] = "0b1111011001001110";
        ram[212] = "0b1111011010111010";
        ram[213] = "0b1111011100100100";
        ram[214] = "0b1111011110001100";
        ram[215] = "0b1111011111110001";
        ram[216] = "0b1111100001010100";
        ram[217] = "0b1111100010110100";
        ram[218] = "0b1111100100010011";
        ram[219] = "0b1111100101101110";
        ram[220] = "0b1111100111001000";
        ram[221] = "0b1111101000011111";
        ram[222] = "0b1111101001110011";
        ram[223] = "0b1111101011000101";
        ram[224] = "0b1111101100010101";
        ram[225] = "0b1111101101100010";
        ram[226] = "0b1111101110101101";
        ram[227] = "0b1111101111110101";
        ram[228] = "0b1111110000111011";
        ram[229] = "0b1111110001111111";
        ram[230] = "0b1111110011000000";
        ram[231] = "0b1111110011111110";
        ram[232] = "0b1111110100111011";
        ram[233] = "0b1111110101110100";
        ram[234] = "0b1111110110101100";
        ram[235] = "0b1111110111100001";
        ram[236] = "0b1111111000010011";
        ram[237] = "0b1111111001000011";
        ram[238] = "0b1111111001110001";
        ram[239] = "0b1111111010011100";
        ram[240] = "0b1111111011000100";
        ram[241] = "0b1111111011101011";
        ram[242] = "0b1111111100001110";
        ram[243] = "0b1111111100110000";
        ram[244] = "0b1111111101001110";
        ram[245] = "0b1111111101101011";
        ram[246] = "0b1111111110000101";
        ram[247] = "0b1111111110011100";
        ram[248] = "0b1111111110110001";
        ram[249] = "0b1111111111000100";
        ram[250] = "0b1111111111010100";
        ram[251] = "0b1111111111100001";
        ram[252] = "0b1111111111101100";
        ram[253] = "0b1111111111110101";
        ram[254] = "0b1111111111111011";
        ram[255] = "0b1111111111111111";


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


SC_MODULE(ProjY_sin_table2) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


ProjY_sin_table2_ram* meminst;


SC_CTOR(ProjY_sin_table2) {
meminst = new ProjY_sin_table2_ram("ProjY_sin_table2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~ProjY_sin_table2() {
    delete meminst;
}


};//endmodule
#endif
