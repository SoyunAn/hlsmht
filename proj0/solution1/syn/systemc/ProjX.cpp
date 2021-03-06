// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ProjX.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic ProjX::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ProjX::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> ProjX::ap_ST_fsm_pp0_stage0 = "1";
const bool ProjX::ap_const_boolean_1 = true;
const sc_lv<32> ProjX::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool ProjX::ap_const_boolean_0 = false;
const sc_lv<32> ProjX::ap_const_lv32_8 = "1000";
const sc_lv<32> ProjX::ap_const_lv32_A = "1010";
const sc_lv<3> ProjX::ap_const_lv3_0 = "000";
const sc_lv<8> ProjX::ap_const_lv8_FF = "11111111";
const sc_lv<11> ProjX::ap_const_lv11_6FF = "11011111111";
const sc_lv<11> ProjX::ap_const_lv11_700 = "11100000000";
const sc_lv<32> ProjX::ap_const_lv32_10 = "10000";
const sc_lv<32> ProjX::ap_const_lv32_1F = "11111";
const sc_lv<17> ProjX::ap_const_lv17_0 = "00000000000000000";

ProjX::ProjX(sc_module_name name) : sc_module(name), mVcdFile(0) {
    cos_table1_U = new ProjX_cos_table1("cos_table1_U");
    cos_table1_U->clk(ap_clk);
    cos_table1_U->reset(ap_rst);
    cos_table1_U->address0(cos_table1_address0);
    cos_table1_U->ce0(cos_table1_ce0);
    cos_table1_U->q0(cos_table1_q0);
    jet_hw_mul_mul_16ns_16ns_32_1_1_U1 = new jet_hw_mul_mul_16ns_16ns_32_1_1<1,1,16,16,32>("jet_hw_mul_mul_16ns_16ns_32_1_1_U1");
    jet_hw_mul_mul_16ns_16ns_32_1_1_U1->din0(ret_V_fu_178_p0);
    jet_hw_mul_mul_16ns_16ns_32_1_1_U1->din1(ret_V_fu_178_p1);
    jet_hw_mul_mul_16ns_16ns_32_1_1_U1->dout(ret_V_fu_178_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter2);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter3);

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );

    SC_METHOD(thread_ap_idle_pp0_0to2);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to2 );

    SC_METHOD(thread_ap_reset_start_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );
    sensitive << ( zext_ln1503_fu_157_p1 );
    sensitive << ( or_ln80_fu_160_p2 );
    sensitive << ( sub_ln68_fu_164_p2 );

    SC_METHOD(thread_cos_table1_address0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln544_fu_131_p1 );

    SC_METHOD(thread_cos_table1_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_icmp_ln887_fu_136_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );
    sensitive << ( phi_V );

    SC_METHOD(thread_icmp_ln891_2_fu_103_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );
    sensitive << ( phi_V );

    SC_METHOD(thread_icmp_ln891_fu_75_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_ce );
    sensitive << ( tmp_5_fu_65_p4 );

    SC_METHOD(thread_or_ln80_fu_160_p2);
    sensitive << ( icmp_ln891_reg_190_pp0_iter2_reg );
    sensitive << ( icmp_ln887_reg_200_pp0_iter2_reg );

    SC_METHOD(thread_phiQ1_V_4_fu_81_p2);
    sensitive << ( phiQ1_V_fu_61_p1 );

    SC_METHOD(thread_phiQ1_V_5_fu_87_p3);
    sensitive << ( icmp_ln891_fu_75_p2 );
    sensitive << ( phiQ1_V_fu_61_p1 );
    sensitive << ( phiQ1_V_4_fu_81_p2 );

    SC_METHOD(thread_phiQ1_V_6_fu_109_p2);
    sensitive << ( phiQ1_V_5_fu_87_p3 );

    SC_METHOD(thread_phiQ1_V_fu_61_p1);
    sensitive << ( phi_V );

    SC_METHOD(thread_ret_V_fu_178_p0);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ret_V_fu_178_p00 );

    SC_METHOD(thread_ret_V_fu_178_p00);
    sensitive << ( pt_V_read_reg_185_pp0_iter1_reg );

    SC_METHOD(thread_ret_V_fu_178_p1);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ret_V_fu_178_p10 );

    SC_METHOD(thread_ret_V_fu_178_p10);
    sensitive << ( cos_table1_load_reg_205 );

    SC_METHOD(thread_select_ln74_fu_115_p3);
    sensitive << ( phiQ1_V_5_fu_87_p3 );
    sensitive << ( icmp_ln891_2_fu_103_p2 );
    sensitive << ( phiQ1_V_6_fu_109_p2 );

    SC_METHOD(thread_select_ln887_fu_123_p3);
    sensitive << ( phiQ1_V_5_fu_87_p3 );
    sensitive << ( tmp_6_fu_95_p3 );
    sensitive << ( select_ln74_fu_115_p3 );

    SC_METHOD(thread_sub_ln68_fu_164_p2);
    sensitive << ( zext_ln1503_fu_157_p1 );

    SC_METHOD(thread_tmp_5_fu_65_p4);
    sensitive << ( phi_V );

    SC_METHOD(thread_tmp_6_fu_95_p3);
    sensitive << ( phi_V );

    SC_METHOD(thread_zext_ln1503_fu_157_p1);
    sensitive << ( tmp_reg_210 );

    SC_METHOD(thread_zext_ln544_fu_131_p1);
    sensitive << ( select_ln887_fu_123_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_reset_idle_pp0 );
    sensitive << ( ap_reset_start_pp0 );

    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter3 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ProjX_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
    sc_trace(mVcdFile, pt_V, "(port)pt_V");
    sc_trace(mVcdFile, phi_V, "(port)phi_V");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter3, "ap_enable_reg_pp0_iter3");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter1, "ap_block_state2_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter2, "ap_block_state3_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter3, "ap_block_state4_pp0_stage0_iter3");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, cos_table1_address0, "cos_table1_address0");
    sc_trace(mVcdFile, cos_table1_ce0, "cos_table1_ce0");
    sc_trace(mVcdFile, cos_table1_q0, "cos_table1_q0");
    sc_trace(mVcdFile, pt_V_read_reg_185, "pt_V_read_reg_185");
    sc_trace(mVcdFile, pt_V_read_reg_185_pp0_iter1_reg, "pt_V_read_reg_185_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln891_fu_75_p2, "icmp_ln891_fu_75_p2");
    sc_trace(mVcdFile, icmp_ln891_reg_190, "icmp_ln891_reg_190");
    sc_trace(mVcdFile, icmp_ln891_reg_190_pp0_iter1_reg, "icmp_ln891_reg_190_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln891_reg_190_pp0_iter2_reg, "icmp_ln891_reg_190_pp0_iter2_reg");
    sc_trace(mVcdFile, icmp_ln887_fu_136_p2, "icmp_ln887_fu_136_p2");
    sc_trace(mVcdFile, icmp_ln887_reg_200, "icmp_ln887_reg_200");
    sc_trace(mVcdFile, icmp_ln887_reg_200_pp0_iter1_reg, "icmp_ln887_reg_200_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln887_reg_200_pp0_iter2_reg, "icmp_ln887_reg_200_pp0_iter2_reg");
    sc_trace(mVcdFile, cos_table1_load_reg_205, "cos_table1_load_reg_205");
    sc_trace(mVcdFile, tmp_reg_210, "tmp_reg_210");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, zext_ln544_fu_131_p1, "zext_ln544_fu_131_p1");
    sc_trace(mVcdFile, tmp_5_fu_65_p4, "tmp_5_fu_65_p4");
    sc_trace(mVcdFile, phiQ1_V_fu_61_p1, "phiQ1_V_fu_61_p1");
    sc_trace(mVcdFile, phiQ1_V_4_fu_81_p2, "phiQ1_V_4_fu_81_p2");
    sc_trace(mVcdFile, phiQ1_V_5_fu_87_p3, "phiQ1_V_5_fu_87_p3");
    sc_trace(mVcdFile, icmp_ln891_2_fu_103_p2, "icmp_ln891_2_fu_103_p2");
    sc_trace(mVcdFile, phiQ1_V_6_fu_109_p2, "phiQ1_V_6_fu_109_p2");
    sc_trace(mVcdFile, tmp_6_fu_95_p3, "tmp_6_fu_95_p3");
    sc_trace(mVcdFile, select_ln74_fu_115_p3, "select_ln74_fu_115_p3");
    sc_trace(mVcdFile, select_ln887_fu_123_p3, "select_ln887_fu_123_p3");
    sc_trace(mVcdFile, ret_V_fu_178_p2, "ret_V_fu_178_p2");
    sc_trace(mVcdFile, zext_ln1503_fu_157_p1, "zext_ln1503_fu_157_p1");
    sc_trace(mVcdFile, or_ln80_fu_160_p2, "or_ln80_fu_160_p2");
    sc_trace(mVcdFile, sub_ln68_fu_164_p2, "sub_ln68_fu_164_p2");
    sc_trace(mVcdFile, ret_V_fu_178_p0, "ret_V_fu_178_p0");
    sc_trace(mVcdFile, ret_V_fu_178_p1, "ret_V_fu_178_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to2, "ap_idle_pp0_0to2");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_reset_start_pp0, "ap_reset_start_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, ret_V_fu_178_p00, "ret_V_fu_178_p00");
    sc_trace(mVcdFile, ret_V_fu_178_p10, "ret_V_fu_178_p10");
#endif

    }
}

ProjX::~ProjX() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete cos_table1_U;
    delete jet_hw_mul_mul_16ns_16ns_32_1_1_U1;
}

void ProjX::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        cos_table1_load_reg_205 = cos_table1_q0.read();
        icmp_ln887_reg_200 = icmp_ln887_fu_136_p2.read();
        icmp_ln887_reg_200_pp0_iter1_reg = icmp_ln887_reg_200.read();
        icmp_ln891_reg_190 = icmp_ln891_fu_75_p2.read();
        icmp_ln891_reg_190_pp0_iter1_reg = icmp_ln891_reg_190.read();
        pt_V_read_reg_185 = pt_V.read();
        pt_V_read_reg_185_pp0_iter1_reg = pt_V_read_reg_185.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        icmp_ln887_reg_200_pp0_iter2_reg = icmp_ln887_reg_200_pp0_iter1_reg.read();
        icmp_ln891_reg_190_pp0_iter2_reg = icmp_ln891_reg_190_pp0_iter1_reg.read();
        tmp_reg_210 = ret_V_fu_178_p2.read().range(31, 16);
    }
}

void ProjX::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void ProjX::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ProjX::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void ProjX::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read())) || esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0));
}

void ProjX::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void ProjX::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ProjX::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ProjX::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ProjX::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ProjX::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void ProjX::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void ProjX::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ProjX::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void ProjX::thread_ap_idle_pp0_0to2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0_0to2 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to2 = ap_const_logic_0;
    }
}

void ProjX::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ProjX::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to2.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void ProjX::thread_ap_reset_start_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()))) {
        ap_reset_start_pp0 = ap_const_logic_1;
    } else {
        ap_reset_start_pp0 = ap_const_logic_0;
    }
}

void ProjX::thread_ap_return() {
    ap_return = (!or_ln80_fu_160_p2.read()[0].is_01())? sc_lv<17>(): ((or_ln80_fu_160_p2.read()[0].to_bool())? sub_ln68_fu_164_p2.read(): zext_ln1503_fu_157_p1.read());
}

void ProjX::thread_cos_table1_address0() {
    cos_table1_address0 =  (sc_lv<8>) (zext_ln544_fu_131_p1.read());
}

void ProjX::thread_cos_table1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        cos_table1_ce0 = ap_const_logic_1;
    } else {
        cos_table1_ce0 = ap_const_logic_0;
    }
}

void ProjX::thread_icmp_ln887_fu_136_p2() {
    icmp_ln887_fu_136_p2 = (!phi_V.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<1>(): (sc_bigint<11>(phi_V.read()) < sc_bigint<11>(ap_const_lv11_700));
}

void ProjX::thread_icmp_ln891_2_fu_103_p2() {
    icmp_ln891_2_fu_103_p2 = (!phi_V.read().is_01() || !ap_const_lv11_6FF.is_01())? sc_lv<1>(): (sc_bigint<11>(phi_V.read()) > sc_bigint<11>(ap_const_lv11_6FF));
}

void ProjX::thread_icmp_ln891_fu_75_p2() {
    icmp_ln891_fu_75_p2 = (!tmp_5_fu_65_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5_fu_65_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void ProjX::thread_or_ln80_fu_160_p2() {
    or_ln80_fu_160_p2 = (icmp_ln891_reg_190_pp0_iter2_reg.read() | icmp_ln887_reg_200_pp0_iter2_reg.read());
}

void ProjX::thread_phiQ1_V_4_fu_81_p2() {
    phiQ1_V_4_fu_81_p2 = (phiQ1_V_fu_61_p1.read() ^ ap_const_lv8_FF);
}

void ProjX::thread_phiQ1_V_5_fu_87_p3() {
    phiQ1_V_5_fu_87_p3 = (!icmp_ln891_fu_75_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln891_fu_75_p2.read()[0].to_bool())? phiQ1_V_4_fu_81_p2.read(): phiQ1_V_fu_61_p1.read());
}

void ProjX::thread_phiQ1_V_6_fu_109_p2() {
    phiQ1_V_6_fu_109_p2 = (phiQ1_V_5_fu_87_p3.read() ^ ap_const_lv8_FF);
}

void ProjX::thread_phiQ1_V_fu_61_p1() {
    phiQ1_V_fu_61_p1 = phi_V.read().range(8-1, 0);
}

void ProjX::thread_ret_V_fu_178_p0() {
    ret_V_fu_178_p0 =  (sc_lv<16>) (ret_V_fu_178_p00.read());
}

void ProjX::thread_ret_V_fu_178_p00() {
    ret_V_fu_178_p00 = esl_zext<32,16>(pt_V_read_reg_185_pp0_iter1_reg.read());
}

void ProjX::thread_ret_V_fu_178_p1() {
    ret_V_fu_178_p1 =  (sc_lv<16>) (ret_V_fu_178_p10.read());
}

void ProjX::thread_ret_V_fu_178_p10() {
    ret_V_fu_178_p10 = esl_zext<32,16>(cos_table1_load_reg_205.read());
}

void ProjX::thread_select_ln74_fu_115_p3() {
    select_ln74_fu_115_p3 = (!icmp_ln891_2_fu_103_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln891_2_fu_103_p2.read()[0].to_bool())? phiQ1_V_6_fu_109_p2.read(): phiQ1_V_5_fu_87_p3.read());
}

void ProjX::thread_select_ln887_fu_123_p3() {
    select_ln887_fu_123_p3 = (!tmp_6_fu_95_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_6_fu_95_p3.read()[0].to_bool())? select_ln74_fu_115_p3.read(): phiQ1_V_5_fu_87_p3.read());
}

void ProjX::thread_sub_ln68_fu_164_p2() {
    sub_ln68_fu_164_p2 = (!ap_const_lv17_0.is_01() || !zext_ln1503_fu_157_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_0) - sc_biguint<17>(zext_ln1503_fu_157_p1.read()));
}

void ProjX::thread_tmp_5_fu_65_p4() {
    tmp_5_fu_65_p4 = phi_V.read().range(10, 8);
}

void ProjX::thread_tmp_6_fu_95_p3() {
    tmp_6_fu_95_p3 = phi_V.read().range(10, 10);
}

void ProjX::thread_zext_ln1503_fu_157_p1() {
    zext_ln1503_fu_157_p1 = esl_zext<17,16>(tmp_reg_210.read());
}

void ProjX::thread_zext_ln544_fu_131_p1() {
    zext_ln544_fu_131_p1 = esl_zext<64,8>(select_ln887_fu_123_p3.read());
}

void ProjX::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

