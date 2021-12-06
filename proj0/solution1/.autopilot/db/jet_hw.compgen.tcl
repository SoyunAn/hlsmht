# This script segment is generated automatically by AutoPilot

set id 11
set name jet_hw_udiv_17s_17ns_17_21_1
set corename simcore_udiv
set op udiv
set stage_num 21
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 17
set in0_signed 1
set in1_width 17
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 17
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 12
set name jet_hw_mul_mul_17s_17s_32_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 17
set in0_signed 1
set in1_width 17
set in1_signed 1
set out_width 32
set exp i0*i1
set arg_lists {i0 {17 1 +} i1 {17 1 +} p {32 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 13
set name jet_hw_mac_muladd_17s_17s_32s_32_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 17
set in0_signed 1
set in1_width 17
set in1_signed 1
set in2_width 32
set in2_signed 1
set out_width 32
set exp i0*i1+i2
set arg_lists {i0 {17 1 +} i1 {17 1 +} m {32 1 +} i2 {32 1 +} p {32 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 17
set hasByteEnable 0
set MemName jet_hw_atan_table4
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 7
set AddrRange 128
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "0000000" "0000001" "0000011" "0000100" "0000101" "0000110" "0001000" "0001001" "0001010" "0001011" "0001101" "0001110" "0001111" "0010000" "0010010" "0010011" "0010100" "0010110" "0010111" "0011000" "0011001" "0011011" "0011100" "0011101" "0011110" "0011111" "0100001" "0100010" "0100011" "0100100" "0100110" "0100111" "0101000" "0101001" "0101010" "0101100" "0101101" "0101110" "0101111" "0110000" "0110001" "0110011" "0110100" "0110101" "0110110" "0110111" "0111000" "0111001" "0111010" "0111100" "0111101" "0111110" "0111111" "1000000" "1000001" "1000010" "1000011" "1000100" "1000101" "1000110" "1000111" "1001000" "1001010" "1001011" "1001100" "1001101" "1001110" "1001111" "1010000" "1010001" "1010010" "1010011" "1010100" "1010100" "1010101" "1010110" "1010111" "1011000" "1011001" "1011010" "1011011" "1011100" "1011101" "1011110" "1011111" "1100000" "1100000" "1100001" "1100010" "1100011" "1100100" "1100101" "1100110" "1100110" "1100111" "1101000" "1101001" "1101010" "1101010" "1101011" "1101100" "1101101" "1101110" "1101110" "1101111" "1110000" "1110001" "1110001" "1110010" "1110011" "1110100" "1110100" "1110101" "1110110" "1110111" "1110111" "1111000" "1111001" "1111001" "1111010" "1111011" "1111011" "1111100" "1111101" "1111101" "1111110" "1111111" "1111111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 4.167
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name jet_pt_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_0_V \
    op interface \
    ports { jet_pt_0_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name jet_pt_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_1_V \
    op interface \
    ports { jet_pt_1_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name jet_pt_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_2_V \
    op interface \
    ports { jet_pt_2_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name jet_pt_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_3_V \
    op interface \
    ports { jet_pt_3_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name jet_pt_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_4_V \
    op interface \
    ports { jet_pt_4_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name jet_pt_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_5_V \
    op interface \
    ports { jet_pt_5_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name jet_pt_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_6_V \
    op interface \
    ports { jet_pt_6_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name jet_pt_7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_7_V \
    op interface \
    ports { jet_pt_7_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name jet_pt_8_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_8_V \
    op interface \
    ports { jet_pt_8_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name jet_pt_9_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_pt_9_V \
    op interface \
    ports { jet_pt_9_V { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name jet_phi_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_0_V \
    op interface \
    ports { jet_phi_0_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name jet_phi_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_1_V \
    op interface \
    ports { jet_phi_1_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name jet_phi_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_2_V \
    op interface \
    ports { jet_phi_2_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name jet_phi_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_3_V \
    op interface \
    ports { jet_phi_3_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name jet_phi_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_4_V \
    op interface \
    ports { jet_phi_4_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name jet_phi_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_5_V \
    op interface \
    ports { jet_phi_5_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name jet_phi_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_6_V \
    op interface \
    ports { jet_phi_6_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name jet_phi_7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_7_V \
    op interface \
    ports { jet_phi_7_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name jet_phi_8_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_8_V \
    op interface \
    ports { jet_phi_8_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name jet_phi_9_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jet_phi_9_V \
    op interface \
    ports { jet_phi_9_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name met_pt2_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_met_pt2_V \
    op interface \
    ports { met_pt2_V { O 32 vector } met_pt2_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name met_phi_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_met_phi_V \
    op interface \
    ports { met_phi_V { O 11 vector } met_phi_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


