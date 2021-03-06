#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("jet_pt_0_V", 16, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("jet_pt_1_V", 16, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("jet_pt_2_V", 16, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("jet_pt_3_V", 16, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("jet_pt_4_V", 16, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("jet_pt_5_V", 16, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("jet_pt_6_V", 16, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("jet_pt_7_V", 16, hls_in, 7, "ap_none", "in_data", 1),
	Port_Property("jet_pt_8_V", 16, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("jet_pt_9_V", 16, hls_in, 9, "ap_none", "in_data", 1),
	Port_Property("jet_phi_0_V", 11, hls_in, 10, "ap_none", "in_data", 1),
	Port_Property("jet_phi_1_V", 11, hls_in, 11, "ap_none", "in_data", 1),
	Port_Property("jet_phi_2_V", 11, hls_in, 12, "ap_none", "in_data", 1),
	Port_Property("jet_phi_3_V", 11, hls_in, 13, "ap_none", "in_data", 1),
	Port_Property("jet_phi_4_V", 11, hls_in, 14, "ap_none", "in_data", 1),
	Port_Property("jet_phi_5_V", 11, hls_in, 15, "ap_none", "in_data", 1),
	Port_Property("jet_phi_6_V", 11, hls_in, 16, "ap_none", "in_data", 1),
	Port_Property("jet_phi_7_V", 11, hls_in, 17, "ap_none", "in_data", 1),
	Port_Property("jet_phi_8_V", 11, hls_in, 18, "ap_none", "in_data", 1),
	Port_Property("jet_phi_9_V", 11, hls_in, 19, "ap_none", "in_data", 1),
	Port_Property("met_pt2_V", 32, hls_out, 20, "ap_vld", "out_data", 1),
	Port_Property("met_pt2_V_ap_vld", 1, hls_out, 20, "ap_vld", "out_vld", 1),
	Port_Property("met_phi_V", 11, hls_out, 21, "ap_vld", "out_data", 1),
	Port_Property("met_phi_V_ap_vld", 1, hls_out, 21, "ap_vld", "out_vld", 1),
};
const char* HLS_Design_Meta::dut_name = "jet_hw";
