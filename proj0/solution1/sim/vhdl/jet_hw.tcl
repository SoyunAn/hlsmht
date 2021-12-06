
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set met_phi_group [add_wave_group met_phi(wire) -into $coutputgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/met_phi_V_ap_vld -into $met_phi_group -color #ffff00 -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/met_phi_V -into $met_phi_group -radix hex
set met_pt2_group [add_wave_group met_pt2(wire) -into $coutputgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/met_pt2_V_ap_vld -into $met_pt2_group -color #ffff00 -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/met_pt2_V -into $met_pt2_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set jet_phi_group [add_wave_group jet_phi(wire) -into $cinputgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_9_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_8_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_7_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_6_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_5_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_4_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_3_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_2_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_1_V -into $jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_phi_0_V -into $jet_phi_group -radix hex
set jet_pt_group [add_wave_group jet_pt(wire) -into $cinputgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_9_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_8_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_7_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_6_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_5_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_4_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_3_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_2_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_1_V -into $jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/jet_pt_0_V -into $jet_pt_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_start -into $blocksiggroup
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_done -into $blocksiggroup
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_idle -into $blocksiggroup
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_jet_hw_top/AESL_inst_jet_hw/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_jet_hw_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_jet_hw_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_jet_hw_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_pt_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_8_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_jet_phi_9_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_met_pt2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_jet_hw_top/LENGTH_met_phi_V -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_met_phi_group [add_wave_group met_phi(wire) -into $tbcoutputgroup]
add_wave /apatb_jet_hw_top/met_phi_V_ap_vld -into $tb_met_phi_group -color #ffff00 -radix hex
add_wave /apatb_jet_hw_top/met_phi_V -into $tb_met_phi_group -radix hex
set tb_met_pt2_group [add_wave_group met_pt2(wire) -into $tbcoutputgroup]
add_wave /apatb_jet_hw_top/met_pt2_V_ap_vld -into $tb_met_pt2_group -color #ffff00 -radix hex
add_wave /apatb_jet_hw_top/met_pt2_V -into $tb_met_pt2_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_jet_phi_group [add_wave_group jet_phi(wire) -into $tbcinputgroup]
add_wave /apatb_jet_hw_top/jet_phi_9_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_8_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_7_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_6_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_5_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_4_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_3_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_2_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_1_V -into $tb_jet_phi_group -radix hex
add_wave /apatb_jet_hw_top/jet_phi_0_V -into $tb_jet_phi_group -radix hex
set tb_jet_pt_group [add_wave_group jet_pt(wire) -into $tbcinputgroup]
add_wave /apatb_jet_hw_top/jet_pt_9_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_8_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_7_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_6_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_5_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_4_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_3_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_2_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_1_V -into $tb_jet_pt_group -radix hex
add_wave /apatb_jet_hw_top/jet_pt_0_V -into $tb_jet_pt_group -radix hex
save_wave_config jet_hw.wcfg
run all
quit

