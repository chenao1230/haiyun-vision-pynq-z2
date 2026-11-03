set moduleName load_bias_1
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {load_bias.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ fm_out_buff_0_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_1_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_2_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_3_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_4_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_5_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_6_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_7_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ bias_buff_0_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_1_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_2_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_3_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_4_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_5_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_6_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ bias_buff_7_V int 16 regular {array 128 { 1 3 } 1 1 }  }
	{ m uint 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fm_out_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "bias_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "m", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 63
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fm_out_buff_0_V_address0 sc_out sc_lv 8 signal 0 } 
	{ fm_out_buff_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fm_out_buff_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ fm_out_buff_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ fm_out_buff_1_V_address0 sc_out sc_lv 8 signal 1 } 
	{ fm_out_buff_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fm_out_buff_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ fm_out_buff_1_V_d0 sc_out sc_lv 16 signal 1 } 
	{ fm_out_buff_2_V_address0 sc_out sc_lv 8 signal 2 } 
	{ fm_out_buff_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fm_out_buff_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ fm_out_buff_2_V_d0 sc_out sc_lv 16 signal 2 } 
	{ fm_out_buff_3_V_address0 sc_out sc_lv 8 signal 3 } 
	{ fm_out_buff_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fm_out_buff_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ fm_out_buff_3_V_d0 sc_out sc_lv 16 signal 3 } 
	{ fm_out_buff_4_V_address0 sc_out sc_lv 8 signal 4 } 
	{ fm_out_buff_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_4_V_we0 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_4_V_d0 sc_out sc_lv 16 signal 4 } 
	{ fm_out_buff_5_V_address0 sc_out sc_lv 8 signal 5 } 
	{ fm_out_buff_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_5_V_we0 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_5_V_d0 sc_out sc_lv 16 signal 5 } 
	{ fm_out_buff_6_V_address0 sc_out sc_lv 8 signal 6 } 
	{ fm_out_buff_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_6_V_we0 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_6_V_d0 sc_out sc_lv 16 signal 6 } 
	{ fm_out_buff_7_V_address0 sc_out sc_lv 8 signal 7 } 
	{ fm_out_buff_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_7_V_we0 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_7_V_d0 sc_out sc_lv 16 signal 7 } 
	{ bias_buff_0_V_address0 sc_out sc_lv 7 signal 8 } 
	{ bias_buff_0_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ bias_buff_0_V_q0 sc_in sc_lv 16 signal 8 } 
	{ bias_buff_1_V_address0 sc_out sc_lv 7 signal 9 } 
	{ bias_buff_1_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ bias_buff_1_V_q0 sc_in sc_lv 16 signal 9 } 
	{ bias_buff_2_V_address0 sc_out sc_lv 7 signal 10 } 
	{ bias_buff_2_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ bias_buff_2_V_q0 sc_in sc_lv 16 signal 10 } 
	{ bias_buff_3_V_address0 sc_out sc_lv 7 signal 11 } 
	{ bias_buff_3_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ bias_buff_3_V_q0 sc_in sc_lv 16 signal 11 } 
	{ bias_buff_4_V_address0 sc_out sc_lv 7 signal 12 } 
	{ bias_buff_4_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ bias_buff_4_V_q0 sc_in sc_lv 16 signal 12 } 
	{ bias_buff_5_V_address0 sc_out sc_lv 7 signal 13 } 
	{ bias_buff_5_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ bias_buff_5_V_q0 sc_in sc_lv 16 signal 13 } 
	{ bias_buff_6_V_address0 sc_out sc_lv 7 signal 14 } 
	{ bias_buff_6_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ bias_buff_6_V_q0 sc_in sc_lv 16 signal 14 } 
	{ bias_buff_7_V_address0 sc_out sc_lv 7 signal 15 } 
	{ bias_buff_7_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ bias_buff_7_V_q0 sc_in sc_lv 16 signal 15 } 
	{ m sc_in sc_lv 16 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fm_out_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "d0" }} , 
 	{ "name": "bias_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "address0" }} , 
 	{ "name": "bias_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "q0" }} , 
 	{ "name": "bias_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "address0" }} , 
 	{ "name": "bias_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "q0" }} , 
 	{ "name": "bias_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "address0" }} , 
 	{ "name": "bias_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "q0" }} , 
 	{ "name": "bias_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "address0" }} , 
 	{ "name": "bias_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "q0" }} , 
 	{ "name": "bias_buff_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "address0" }} , 
 	{ "name": "bias_buff_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "q0" }} , 
 	{ "name": "bias_buff_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "address0" }} , 
 	{ "name": "bias_buff_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "q0" }} , 
 	{ "name": "bias_buff_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "address0" }} , 
 	{ "name": "bias_buff_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "q0" }} , 
 	{ "name": "bias_buff_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "address0" }} , 
 	{ "name": "bias_buff_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "q0" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "m", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "load_bias_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "172", "EstimateLatencyMax" : "172",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fm_out_buff_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bias_buff_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	load_bias_1 {
		fm_out_buff_0_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_1_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_2_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_3_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_4_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_5_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_6_V {Type O LastRead -1 FirstWrite 3}
		fm_out_buff_7_V {Type O LastRead -1 FirstWrite 3}
		bias_buff_0_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_1_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_2_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_3_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_4_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_5_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_6_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_7_V {Type I LastRead 1 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "172", "Max" : "172"}
	, {"Name" : "Interval", "Min" : "172", "Max" : "172"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fm_out_buff_0_V { ap_memory {  { fm_out_buff_0_V_address0 mem_address 1 8 }  { fm_out_buff_0_V_ce0 mem_ce 1 1 }  { fm_out_buff_0_V_we0 mem_we 1 1 }  { fm_out_buff_0_V_d0 mem_din 1 16 } } }
	fm_out_buff_1_V { ap_memory {  { fm_out_buff_1_V_address0 mem_address 1 8 }  { fm_out_buff_1_V_ce0 mem_ce 1 1 }  { fm_out_buff_1_V_we0 mem_we 1 1 }  { fm_out_buff_1_V_d0 mem_din 1 16 } } }
	fm_out_buff_2_V { ap_memory {  { fm_out_buff_2_V_address0 mem_address 1 8 }  { fm_out_buff_2_V_ce0 mem_ce 1 1 }  { fm_out_buff_2_V_we0 mem_we 1 1 }  { fm_out_buff_2_V_d0 mem_din 1 16 } } }
	fm_out_buff_3_V { ap_memory {  { fm_out_buff_3_V_address0 mem_address 1 8 }  { fm_out_buff_3_V_ce0 mem_ce 1 1 }  { fm_out_buff_3_V_we0 mem_we 1 1 }  { fm_out_buff_3_V_d0 mem_din 1 16 } } }
	fm_out_buff_4_V { ap_memory {  { fm_out_buff_4_V_address0 mem_address 1 8 }  { fm_out_buff_4_V_ce0 mem_ce 1 1 }  { fm_out_buff_4_V_we0 mem_we 1 1 }  { fm_out_buff_4_V_d0 mem_din 1 16 } } }
	fm_out_buff_5_V { ap_memory {  { fm_out_buff_5_V_address0 mem_address 1 8 }  { fm_out_buff_5_V_ce0 mem_ce 1 1 }  { fm_out_buff_5_V_we0 mem_we 1 1 }  { fm_out_buff_5_V_d0 mem_din 1 16 } } }
	fm_out_buff_6_V { ap_memory {  { fm_out_buff_6_V_address0 mem_address 1 8 }  { fm_out_buff_6_V_ce0 mem_ce 1 1 }  { fm_out_buff_6_V_we0 mem_we 1 1 }  { fm_out_buff_6_V_d0 mem_din 1 16 } } }
	fm_out_buff_7_V { ap_memory {  { fm_out_buff_7_V_address0 mem_address 1 8 }  { fm_out_buff_7_V_ce0 mem_ce 1 1 }  { fm_out_buff_7_V_we0 mem_we 1 1 }  { fm_out_buff_7_V_d0 mem_din 1 16 } } }
	bias_buff_0_V { ap_memory {  { bias_buff_0_V_address0 mem_address 1 7 }  { bias_buff_0_V_ce0 mem_ce 1 1 }  { bias_buff_0_V_q0 mem_dout 0 16 } } }
	bias_buff_1_V { ap_memory {  { bias_buff_1_V_address0 mem_address 1 7 }  { bias_buff_1_V_ce0 mem_ce 1 1 }  { bias_buff_1_V_q0 mem_dout 0 16 } } }
	bias_buff_2_V { ap_memory {  { bias_buff_2_V_address0 mem_address 1 7 }  { bias_buff_2_V_ce0 mem_ce 1 1 }  { bias_buff_2_V_q0 mem_dout 0 16 } } }
	bias_buff_3_V { ap_memory {  { bias_buff_3_V_address0 mem_address 1 7 }  { bias_buff_3_V_ce0 mem_ce 1 1 }  { bias_buff_3_V_q0 mem_dout 0 16 } } }
	bias_buff_4_V { ap_memory {  { bias_buff_4_V_address0 mem_address 1 7 }  { bias_buff_4_V_ce0 mem_ce 1 1 }  { bias_buff_4_V_q0 mem_dout 0 16 } } }
	bias_buff_5_V { ap_memory {  { bias_buff_5_V_address0 mem_address 1 7 }  { bias_buff_5_V_ce0 mem_ce 1 1 }  { bias_buff_5_V_q0 mem_dout 0 16 } } }
	bias_buff_6_V { ap_memory {  { bias_buff_6_V_address0 mem_address 1 7 }  { bias_buff_6_V_ce0 mem_ce 1 1 }  { bias_buff_6_V_q0 mem_dout 0 16 } } }
	bias_buff_7_V { ap_memory {  { bias_buff_7_V_address0 mem_address 1 7 }  { bias_buff_7_V_ce0 mem_ce 1 1 }  { bias_buff_7_V_q0 mem_dout 0 16 } } }
	m { ap_none {  { m in_data 0 16 } } }
}
