set moduleName jet_hw
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {jet_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ jet_pt_0_V int 16 regular {pointer 0}  }
	{ jet_pt_1_V int 16 regular {pointer 0}  }
	{ jet_pt_2_V int 16 regular {pointer 0}  }
	{ jet_pt_3_V int 16 regular {pointer 0}  }
	{ jet_pt_4_V int 16 regular {pointer 0}  }
	{ jet_pt_5_V int 16 regular {pointer 0}  }
	{ jet_pt_6_V int 16 regular {pointer 0}  }
	{ jet_pt_7_V int 16 regular {pointer 0}  }
	{ jet_pt_8_V int 16 regular {pointer 0}  }
	{ jet_pt_9_V int 16 regular {pointer 0}  }
	{ jet_phi_0_V int 11 regular {pointer 0}  }
	{ jet_phi_1_V int 11 regular {pointer 0}  }
	{ jet_phi_2_V int 11 regular {pointer 0}  }
	{ jet_phi_3_V int 11 regular {pointer 0}  }
	{ jet_phi_4_V int 11 regular {pointer 0}  }
	{ jet_phi_5_V int 11 regular {pointer 0}  }
	{ jet_phi_6_V int 11 regular {pointer 0}  }
	{ jet_phi_7_V int 11 regular {pointer 0}  }
	{ jet_phi_8_V int 11 regular {pointer 0}  }
	{ jet_phi_9_V int 11 regular {pointer 0}  }
	{ met_pt2_V int 32 regular {pointer 1}  }
	{ met_phi_V int 11 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "jet_pt_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_1_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_2_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_3_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_4_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_5_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_6_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_7_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_8_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_pt_9_V", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "jet_pt.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_0_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_1_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_2_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_3_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_4_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_5_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_6_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_7_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_8_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "jet_phi_9_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "jet_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "met_pt2_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "met_pt2.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "met_phi_V", "interface" : "wire", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "met_phi.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ jet_pt_0_V sc_in sc_lv 16 signal 0 } 
	{ jet_pt_1_V sc_in sc_lv 16 signal 1 } 
	{ jet_pt_2_V sc_in sc_lv 16 signal 2 } 
	{ jet_pt_3_V sc_in sc_lv 16 signal 3 } 
	{ jet_pt_4_V sc_in sc_lv 16 signal 4 } 
	{ jet_pt_5_V sc_in sc_lv 16 signal 5 } 
	{ jet_pt_6_V sc_in sc_lv 16 signal 6 } 
	{ jet_pt_7_V sc_in sc_lv 16 signal 7 } 
	{ jet_pt_8_V sc_in sc_lv 16 signal 8 } 
	{ jet_pt_9_V sc_in sc_lv 16 signal 9 } 
	{ jet_phi_0_V sc_in sc_lv 11 signal 10 } 
	{ jet_phi_1_V sc_in sc_lv 11 signal 11 } 
	{ jet_phi_2_V sc_in sc_lv 11 signal 12 } 
	{ jet_phi_3_V sc_in sc_lv 11 signal 13 } 
	{ jet_phi_4_V sc_in sc_lv 11 signal 14 } 
	{ jet_phi_5_V sc_in sc_lv 11 signal 15 } 
	{ jet_phi_6_V sc_in sc_lv 11 signal 16 } 
	{ jet_phi_7_V sc_in sc_lv 11 signal 17 } 
	{ jet_phi_8_V sc_in sc_lv 11 signal 18 } 
	{ jet_phi_9_V sc_in sc_lv 11 signal 19 } 
	{ met_pt2_V sc_out sc_lv 32 signal 20 } 
	{ met_pt2_V_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ met_phi_V sc_out sc_lv 11 signal 21 } 
	{ met_phi_V_ap_vld sc_out sc_logic 1 outvld 21 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "jet_pt_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_0_V", "role": "default" }} , 
 	{ "name": "jet_pt_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_1_V", "role": "default" }} , 
 	{ "name": "jet_pt_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_2_V", "role": "default" }} , 
 	{ "name": "jet_pt_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_3_V", "role": "default" }} , 
 	{ "name": "jet_pt_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_4_V", "role": "default" }} , 
 	{ "name": "jet_pt_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_5_V", "role": "default" }} , 
 	{ "name": "jet_pt_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_6_V", "role": "default" }} , 
 	{ "name": "jet_pt_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_7_V", "role": "default" }} , 
 	{ "name": "jet_pt_8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_8_V", "role": "default" }} , 
 	{ "name": "jet_pt_9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "jet_pt_9_V", "role": "default" }} , 
 	{ "name": "jet_phi_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_0_V", "role": "default" }} , 
 	{ "name": "jet_phi_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_1_V", "role": "default" }} , 
 	{ "name": "jet_phi_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_2_V", "role": "default" }} , 
 	{ "name": "jet_phi_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_3_V", "role": "default" }} , 
 	{ "name": "jet_phi_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_4_V", "role": "default" }} , 
 	{ "name": "jet_phi_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_5_V", "role": "default" }} , 
 	{ "name": "jet_phi_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_6_V", "role": "default" }} , 
 	{ "name": "jet_phi_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_7_V", "role": "default" }} , 
 	{ "name": "jet_phi_8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_8_V", "role": "default" }} , 
 	{ "name": "jet_phi_9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "jet_phi_9_V", "role": "default" }} , 
 	{ "name": "met_pt2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "met_pt2_V", "role": "default" }} , 
 	{ "name": "met_pt2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "met_pt2_V", "role": "ap_vld" }} , 
 	{ "name": "met_phi_V", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "met_phi_V", "role": "default" }} , 
 	{ "name": "met_phi_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "met_phi_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "6", "9", "12", "15", "16", "17"],
		"CDFG" : "jet_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "6",
		"VariableLatency" : "0", "ExactLatency" : "13", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "13",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "jet_pt_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_pt_9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "jet_phi_9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "met_pt2_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "met_phi_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "cos_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_ProjX_fu_286", "Port" : "cos_table1"},
					{"ID" : "3", "SubInstance" : "grp_ProjX_fu_276", "Port" : "cos_table1"}]},
			{"Name" : "sin_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_ProjY_fu_312", "Port" : "sin_table2"},
					{"ID" : "12", "SubInstance" : "grp_ProjY_fu_322", "Port" : "sin_table2"}]},
			{"Name" : "inv_table3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "atan_table4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inv_table3_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.atan_table4_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_276", "Parent" : "0", "Child" : ["4", "5"],
		"CDFG" : "ProjX",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pt_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "phi_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "cos_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_276.cos_table1_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_276.jet_hw_mul_mul_16ns_16ns_32_1_1_U1", "Parent" : "3"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_286", "Parent" : "0", "Child" : ["7", "8"],
		"CDFG" : "ProjX",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pt_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "phi_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "cos_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_286.cos_table1_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjX_fu_286.jet_hw_mul_mul_16ns_16ns_32_1_1_U1", "Parent" : "6"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_312", "Parent" : "0", "Child" : ["10", "11"],
		"CDFG" : "ProjY",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pt_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "phi_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "sin_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_312.sin_table2_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_312.jet_hw_mul_mul_16ns_16ns_32_1_1_U6", "Parent" : "9"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_322", "Parent" : "0", "Child" : ["13", "14"],
		"CDFG" : "ProjY",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pt_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "phi_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "sin_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_322.sin_table2_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ProjY_fu_322.jet_hw_mul_mul_16ns_16ns_32_1_1_U6", "Parent" : "12"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jet_hw_mul_mul_17s_17s_32_1_1_U10", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jet_hw_mac_muladd_17s_17s_32s_32_1_1_U11", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.jet_hw_mul_mul_16s_16s_16_1_1_U12", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	jet_hw {
		jet_pt_0_V {Type I LastRead 0 FirstWrite -1}
		jet_pt_1_V {Type I LastRead 0 FirstWrite -1}
		jet_pt_2_V {Type I LastRead 1 FirstWrite -1}
		jet_pt_3_V {Type I LastRead 1 FirstWrite -1}
		jet_pt_4_V {Type I LastRead 2 FirstWrite -1}
		jet_pt_5_V {Type I LastRead 2 FirstWrite -1}
		jet_pt_6_V {Type I LastRead 3 FirstWrite -1}
		jet_pt_7_V {Type I LastRead 3 FirstWrite -1}
		jet_pt_8_V {Type I LastRead 4 FirstWrite -1}
		jet_pt_9_V {Type I LastRead 4 FirstWrite -1}
		jet_phi_0_V {Type I LastRead 0 FirstWrite -1}
		jet_phi_1_V {Type I LastRead 0 FirstWrite -1}
		jet_phi_2_V {Type I LastRead 1 FirstWrite -1}
		jet_phi_3_V {Type I LastRead 1 FirstWrite -1}
		jet_phi_4_V {Type I LastRead 2 FirstWrite -1}
		jet_phi_5_V {Type I LastRead 2 FirstWrite -1}
		jet_phi_6_V {Type I LastRead 3 FirstWrite -1}
		jet_phi_7_V {Type I LastRead 3 FirstWrite -1}
		jet_phi_8_V {Type I LastRead 4 FirstWrite -1}
		jet_phi_9_V {Type I LastRead 4 FirstWrite -1}
		met_pt2_V {Type O LastRead -1 FirstWrite 9}
		met_phi_V {Type O LastRead -1 FirstWrite 13}
		cos_table1 {Type I LastRead -1 FirstWrite -1}
		sin_table2 {Type I LastRead -1 FirstWrite -1}
		inv_table3 {Type I LastRead -1 FirstWrite -1}
		atan_table4 {Type I LastRead -1 FirstWrite -1}}
	ProjX {
		pt_V {Type I LastRead 0 FirstWrite -1}
		phi_V {Type I LastRead 0 FirstWrite -1}
		cos_table1 {Type I LastRead -1 FirstWrite -1}}
	ProjX {
		pt_V {Type I LastRead 0 FirstWrite -1}
		phi_V {Type I LastRead 0 FirstWrite -1}
		cos_table1 {Type I LastRead -1 FirstWrite -1}}
	ProjY {
		pt_V {Type I LastRead 0 FirstWrite -1}
		phi_V {Type I LastRead 0 FirstWrite -1}
		sin_table2 {Type I LastRead -1 FirstWrite -1}}
	ProjY {
		pt_V {Type I LastRead 0 FirstWrite -1}
		phi_V {Type I LastRead 0 FirstWrite -1}
		sin_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "13", "Max" : "13"}
	, {"Name" : "Interval", "Min" : "6", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	jet_pt_0_V { ap_none {  { jet_pt_0_V in_data 0 16 } } }
	jet_pt_1_V { ap_none {  { jet_pt_1_V in_data 0 16 } } }
	jet_pt_2_V { ap_none {  { jet_pt_2_V in_data 0 16 } } }
	jet_pt_3_V { ap_none {  { jet_pt_3_V in_data 0 16 } } }
	jet_pt_4_V { ap_none {  { jet_pt_4_V in_data 0 16 } } }
	jet_pt_5_V { ap_none {  { jet_pt_5_V in_data 0 16 } } }
	jet_pt_6_V { ap_none {  { jet_pt_6_V in_data 0 16 } } }
	jet_pt_7_V { ap_none {  { jet_pt_7_V in_data 0 16 } } }
	jet_pt_8_V { ap_none {  { jet_pt_8_V in_data 0 16 } } }
	jet_pt_9_V { ap_none {  { jet_pt_9_V in_data 0 16 } } }
	jet_phi_0_V { ap_none {  { jet_phi_0_V in_data 0 11 } } }
	jet_phi_1_V { ap_none {  { jet_phi_1_V in_data 0 11 } } }
	jet_phi_2_V { ap_none {  { jet_phi_2_V in_data 0 11 } } }
	jet_phi_3_V { ap_none {  { jet_phi_3_V in_data 0 11 } } }
	jet_phi_4_V { ap_none {  { jet_phi_4_V in_data 0 11 } } }
	jet_phi_5_V { ap_none {  { jet_phi_5_V in_data 0 11 } } }
	jet_phi_6_V { ap_none {  { jet_phi_6_V in_data 0 11 } } }
	jet_phi_7_V { ap_none {  { jet_phi_7_V in_data 0 11 } } }
	jet_phi_8_V { ap_none {  { jet_phi_8_V in_data 0 11 } } }
	jet_phi_9_V { ap_none {  { jet_phi_9_V in_data 0 11 } } }
	met_pt2_V { ap_vld {  { met_pt2_V out_data 1 32 }  { met_pt2_V_ap_vld out_vld 1 1 } } }
	met_phi_V { ap_vld {  { met_phi_V out_data 1 11 }  { met_phi_V_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
