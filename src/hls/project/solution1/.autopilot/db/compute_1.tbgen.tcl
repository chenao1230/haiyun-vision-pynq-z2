set moduleName compute_1
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
set C_modelName {compute.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ fm_in_buff_0_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_in_buff_1_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_in_buff_2_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_in_buff_3_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_0_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_1_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_2_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_3_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_4_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_5_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_6_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ fm_out_buff_7_V int 16 regular {array 169 { 1 0 } 1 1 }  }
	{ wt_buff_0_0_V_read int 16 regular  }
	{ wt_buff_0_1_V_read int 16 regular  }
	{ wt_buff_0_2_V_read int 16 regular  }
	{ wt_buff_0_3_V_read int 16 regular  }
	{ wt_buff_1_0_V_read int 16 regular  }
	{ wt_buff_1_1_V_read int 16 regular  }
	{ wt_buff_1_2_V_read int 16 regular  }
	{ wt_buff_1_3_V_read int 16 regular  }
	{ wt_buff_2_0_V_read int 16 regular  }
	{ wt_buff_2_1_V_read int 16 regular  }
	{ wt_buff_2_2_V_read int 16 regular  }
	{ wt_buff_2_3_V_read int 16 regular  }
	{ wt_buff_3_0_V_read int 16 regular  }
	{ wt_buff_3_1_V_read int 16 regular  }
	{ wt_buff_3_2_V_read int 16 regular  }
	{ wt_buff_3_3_V_read int 16 regular  }
	{ wt_buff_4_0_V_read int 16 regular  }
	{ wt_buff_4_1_V_read int 16 regular  }
	{ wt_buff_4_2_V_read int 16 regular  }
	{ wt_buff_4_3_V_read int 16 regular  }
	{ wt_buff_5_0_V_read int 16 regular  }
	{ wt_buff_5_1_V_read int 16 regular  }
	{ wt_buff_5_2_V_read int 16 regular  }
	{ wt_buff_5_3_V_read int 16 regular  }
	{ wt_buff_6_0_V_read int 16 regular  }
	{ wt_buff_6_1_V_read int 16 regular  }
	{ wt_buff_6_2_V_read int 16 regular  }
	{ wt_buff_6_3_V_read int 16 regular  }
	{ wt_buff_7_0_V_read int 16 regular  }
	{ wt_buff_7_1_V_read int 16 regular  }
	{ wt_buff_7_2_V_read int 16 regular  }
	{ wt_buff_7_3_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fm_in_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_in_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_in_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_in_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "fm_out_buff_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "wt_buff_0_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_0_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_0_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_0_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_1_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_1_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_1_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_1_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_2_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_2_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_2_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_2_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_3_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_3_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_3_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_3_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_4_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_4_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_4_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_4_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_5_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_5_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_5_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_5_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_6_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_6_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_6_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_6_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_7_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_7_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_7_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "wt_buff_7_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 106
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fm_in_buff_0_V_address0 sc_out sc_lv 8 signal 0 } 
	{ fm_in_buff_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fm_in_buff_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ fm_in_buff_1_V_address0 sc_out sc_lv 8 signal 1 } 
	{ fm_in_buff_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fm_in_buff_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ fm_in_buff_2_V_address0 sc_out sc_lv 8 signal 2 } 
	{ fm_in_buff_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fm_in_buff_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ fm_in_buff_3_V_address0 sc_out sc_lv 8 signal 3 } 
	{ fm_in_buff_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fm_in_buff_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ fm_out_buff_0_V_address0 sc_out sc_lv 8 signal 4 } 
	{ fm_out_buff_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_0_V_q0 sc_in sc_lv 16 signal 4 } 
	{ fm_out_buff_0_V_address1 sc_out sc_lv 8 signal 4 } 
	{ fm_out_buff_0_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_0_V_we1 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_0_V_d1 sc_out sc_lv 16 signal 4 } 
	{ fm_out_buff_1_V_address0 sc_out sc_lv 8 signal 5 } 
	{ fm_out_buff_1_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_1_V_q0 sc_in sc_lv 16 signal 5 } 
	{ fm_out_buff_1_V_address1 sc_out sc_lv 8 signal 5 } 
	{ fm_out_buff_1_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_1_V_we1 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_1_V_d1 sc_out sc_lv 16 signal 5 } 
	{ fm_out_buff_2_V_address0 sc_out sc_lv 8 signal 6 } 
	{ fm_out_buff_2_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_2_V_q0 sc_in sc_lv 16 signal 6 } 
	{ fm_out_buff_2_V_address1 sc_out sc_lv 8 signal 6 } 
	{ fm_out_buff_2_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_2_V_we1 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_2_V_d1 sc_out sc_lv 16 signal 6 } 
	{ fm_out_buff_3_V_address0 sc_out sc_lv 8 signal 7 } 
	{ fm_out_buff_3_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_3_V_q0 sc_in sc_lv 16 signal 7 } 
	{ fm_out_buff_3_V_address1 sc_out sc_lv 8 signal 7 } 
	{ fm_out_buff_3_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_3_V_we1 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_3_V_d1 sc_out sc_lv 16 signal 7 } 
	{ fm_out_buff_4_V_address0 sc_out sc_lv 8 signal 8 } 
	{ fm_out_buff_4_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ fm_out_buff_4_V_q0 sc_in sc_lv 16 signal 8 } 
	{ fm_out_buff_4_V_address1 sc_out sc_lv 8 signal 8 } 
	{ fm_out_buff_4_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ fm_out_buff_4_V_we1 sc_out sc_logic 1 signal 8 } 
	{ fm_out_buff_4_V_d1 sc_out sc_lv 16 signal 8 } 
	{ fm_out_buff_5_V_address0 sc_out sc_lv 8 signal 9 } 
	{ fm_out_buff_5_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ fm_out_buff_5_V_q0 sc_in sc_lv 16 signal 9 } 
	{ fm_out_buff_5_V_address1 sc_out sc_lv 8 signal 9 } 
	{ fm_out_buff_5_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ fm_out_buff_5_V_we1 sc_out sc_logic 1 signal 9 } 
	{ fm_out_buff_5_V_d1 sc_out sc_lv 16 signal 9 } 
	{ fm_out_buff_6_V_address0 sc_out sc_lv 8 signal 10 } 
	{ fm_out_buff_6_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ fm_out_buff_6_V_q0 sc_in sc_lv 16 signal 10 } 
	{ fm_out_buff_6_V_address1 sc_out sc_lv 8 signal 10 } 
	{ fm_out_buff_6_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ fm_out_buff_6_V_we1 sc_out sc_logic 1 signal 10 } 
	{ fm_out_buff_6_V_d1 sc_out sc_lv 16 signal 10 } 
	{ fm_out_buff_7_V_address0 sc_out sc_lv 8 signal 11 } 
	{ fm_out_buff_7_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ fm_out_buff_7_V_q0 sc_in sc_lv 16 signal 11 } 
	{ fm_out_buff_7_V_address1 sc_out sc_lv 8 signal 11 } 
	{ fm_out_buff_7_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ fm_out_buff_7_V_we1 sc_out sc_logic 1 signal 11 } 
	{ fm_out_buff_7_V_d1 sc_out sc_lv 16 signal 11 } 
	{ wt_buff_0_0_V_read sc_in sc_lv 16 signal 12 } 
	{ wt_buff_0_1_V_read sc_in sc_lv 16 signal 13 } 
	{ wt_buff_0_2_V_read sc_in sc_lv 16 signal 14 } 
	{ wt_buff_0_3_V_read sc_in sc_lv 16 signal 15 } 
	{ wt_buff_1_0_V_read sc_in sc_lv 16 signal 16 } 
	{ wt_buff_1_1_V_read sc_in sc_lv 16 signal 17 } 
	{ wt_buff_1_2_V_read sc_in sc_lv 16 signal 18 } 
	{ wt_buff_1_3_V_read sc_in sc_lv 16 signal 19 } 
	{ wt_buff_2_0_V_read sc_in sc_lv 16 signal 20 } 
	{ wt_buff_2_1_V_read sc_in sc_lv 16 signal 21 } 
	{ wt_buff_2_2_V_read sc_in sc_lv 16 signal 22 } 
	{ wt_buff_2_3_V_read sc_in sc_lv 16 signal 23 } 
	{ wt_buff_3_0_V_read sc_in sc_lv 16 signal 24 } 
	{ wt_buff_3_1_V_read sc_in sc_lv 16 signal 25 } 
	{ wt_buff_3_2_V_read sc_in sc_lv 16 signal 26 } 
	{ wt_buff_3_3_V_read sc_in sc_lv 16 signal 27 } 
	{ wt_buff_4_0_V_read sc_in sc_lv 16 signal 28 } 
	{ wt_buff_4_1_V_read sc_in sc_lv 16 signal 29 } 
	{ wt_buff_4_2_V_read sc_in sc_lv 16 signal 30 } 
	{ wt_buff_4_3_V_read sc_in sc_lv 16 signal 31 } 
	{ wt_buff_5_0_V_read sc_in sc_lv 16 signal 32 } 
	{ wt_buff_5_1_V_read sc_in sc_lv 16 signal 33 } 
	{ wt_buff_5_2_V_read sc_in sc_lv 16 signal 34 } 
	{ wt_buff_5_3_V_read sc_in sc_lv 16 signal 35 } 
	{ wt_buff_6_0_V_read sc_in sc_lv 16 signal 36 } 
	{ wt_buff_6_1_V_read sc_in sc_lv 16 signal 37 } 
	{ wt_buff_6_2_V_read sc_in sc_lv 16 signal 38 } 
	{ wt_buff_6_3_V_read sc_in sc_lv 16 signal 39 } 
	{ wt_buff_7_0_V_read sc_in sc_lv 16 signal 40 } 
	{ wt_buff_7_1_V_read sc_in sc_lv 16 signal 41 } 
	{ wt_buff_7_2_V_read sc_in sc_lv 16 signal 42 } 
	{ wt_buff_7_3_V_read sc_in sc_lv 16 signal 43 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fm_in_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "q0" }} , 
 	{ "name": "fm_in_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "q0" }} , 
 	{ "name": "fm_in_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "q0" }} , 
 	{ "name": "fm_in_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_3_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_3_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_4_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_4_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_5_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_5_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_6_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_6_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "d1" }} , 
 	{ "name": "fm_out_buff_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "address1" }} , 
 	{ "name": "fm_out_buff_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "ce1" }} , 
 	{ "name": "fm_out_buff_7_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "we1" }} , 
 	{ "name": "fm_out_buff_7_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "d1" }} , 
 	{ "name": "wt_buff_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_0_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_0_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_0_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_0_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_0_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_0_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_1_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_1_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_1_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_1_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_1_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_1_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_2_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_2_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_2_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_2_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_2_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_2_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_3_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_3_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_3_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_3_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_3_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_3_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_4_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_4_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_4_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_4_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_4_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_4_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_5_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_5_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_5_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_5_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_5_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_5_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_6_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_6_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_6_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_6_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_6_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_6_3_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_7_0_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_7_1_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_7_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_7_2_V_read", "role": "default" }} , 
 	{ "name": "wt_buff_7_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_7_3_V_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32"],
		"CDFG" : "compute_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "177", "EstimateLatencyMax" : "177",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fm_in_buff_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_in_buff_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_in_buff_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_in_buff_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fm_out_buff_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "wt_buff_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_0_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_0_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_1_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_1_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_2_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_2_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_3_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_3_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_4_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_4_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_5_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_5_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_6_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_6_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_7_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "wt_buff_7_3_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U144", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U145", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U146", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U147", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U148", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U149", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U150", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U151", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U152", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U153", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U154", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U155", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U156", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U157", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U158", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U159", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U160", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U161", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U162", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U163", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U164", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U165", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U166", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U167", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U168", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U169", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U170", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U171", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U172", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U173", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U174", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16s_wdI_U175", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	compute_1 {
		fm_in_buff_0_V {Type I LastRead 1 FirstWrite -1}
		fm_in_buff_1_V {Type I LastRead 1 FirstWrite -1}
		fm_in_buff_2_V {Type I LastRead 1 FirstWrite -1}
		fm_in_buff_3_V {Type I LastRead 1 FirstWrite -1}
		fm_out_buff_0_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_1_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_2_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_3_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_4_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_5_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_6_V {Type IO LastRead 6 FirstWrite 8}
		fm_out_buff_7_V {Type IO LastRead 6 FirstWrite 8}
		wt_buff_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_0_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_0_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_1_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_1_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_2_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_2_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_3_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_3_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_4_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_4_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_5_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_5_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_6_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_6_3_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_7_2_V_read {Type I LastRead 0 FirstWrite -1}
		wt_buff_7_3_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "177", "Max" : "177"}
	, {"Name" : "Interval", "Min" : "177", "Max" : "177"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fm_in_buff_0_V { ap_memory {  { fm_in_buff_0_V_address0 mem_address 1 8 }  { fm_in_buff_0_V_ce0 mem_ce 1 1 }  { fm_in_buff_0_V_q0 mem_dout 0 16 } } }
	fm_in_buff_1_V { ap_memory {  { fm_in_buff_1_V_address0 mem_address 1 8 }  { fm_in_buff_1_V_ce0 mem_ce 1 1 }  { fm_in_buff_1_V_q0 mem_dout 0 16 } } }
	fm_in_buff_2_V { ap_memory {  { fm_in_buff_2_V_address0 mem_address 1 8 }  { fm_in_buff_2_V_ce0 mem_ce 1 1 }  { fm_in_buff_2_V_q0 mem_dout 0 16 } } }
	fm_in_buff_3_V { ap_memory {  { fm_in_buff_3_V_address0 mem_address 1 8 }  { fm_in_buff_3_V_ce0 mem_ce 1 1 }  { fm_in_buff_3_V_q0 mem_dout 0 16 } } }
	fm_out_buff_0_V { ap_memory {  { fm_out_buff_0_V_address0 mem_address 1 8 }  { fm_out_buff_0_V_ce0 mem_ce 1 1 }  { fm_out_buff_0_V_q0 mem_dout 0 16 }  { fm_out_buff_0_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_0_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_0_V_we1 MemPortWE2 1 1 }  { fm_out_buff_0_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_1_V { ap_memory {  { fm_out_buff_1_V_address0 mem_address 1 8 }  { fm_out_buff_1_V_ce0 mem_ce 1 1 }  { fm_out_buff_1_V_q0 mem_dout 0 16 }  { fm_out_buff_1_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_1_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_1_V_we1 MemPortWE2 1 1 }  { fm_out_buff_1_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_2_V { ap_memory {  { fm_out_buff_2_V_address0 mem_address 1 8 }  { fm_out_buff_2_V_ce0 mem_ce 1 1 }  { fm_out_buff_2_V_q0 mem_dout 0 16 }  { fm_out_buff_2_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_2_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_2_V_we1 MemPortWE2 1 1 }  { fm_out_buff_2_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_3_V { ap_memory {  { fm_out_buff_3_V_address0 mem_address 1 8 }  { fm_out_buff_3_V_ce0 mem_ce 1 1 }  { fm_out_buff_3_V_q0 mem_dout 0 16 }  { fm_out_buff_3_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_3_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_3_V_we1 MemPortWE2 1 1 }  { fm_out_buff_3_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_4_V { ap_memory {  { fm_out_buff_4_V_address0 mem_address 1 8 }  { fm_out_buff_4_V_ce0 mem_ce 1 1 }  { fm_out_buff_4_V_q0 mem_dout 0 16 }  { fm_out_buff_4_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_4_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_4_V_we1 MemPortWE2 1 1 }  { fm_out_buff_4_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_5_V { ap_memory {  { fm_out_buff_5_V_address0 mem_address 1 8 }  { fm_out_buff_5_V_ce0 mem_ce 1 1 }  { fm_out_buff_5_V_q0 mem_dout 0 16 }  { fm_out_buff_5_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_5_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_5_V_we1 MemPortWE2 1 1 }  { fm_out_buff_5_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_6_V { ap_memory {  { fm_out_buff_6_V_address0 mem_address 1 8 }  { fm_out_buff_6_V_ce0 mem_ce 1 1 }  { fm_out_buff_6_V_q0 mem_dout 0 16 }  { fm_out_buff_6_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_6_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_6_V_we1 MemPortWE2 1 1 }  { fm_out_buff_6_V_d1 MemPortDIN2 1 16 } } }
	fm_out_buff_7_V { ap_memory {  { fm_out_buff_7_V_address0 mem_address 1 8 }  { fm_out_buff_7_V_ce0 mem_ce 1 1 }  { fm_out_buff_7_V_q0 mem_dout 0 16 }  { fm_out_buff_7_V_address1 MemPortADDR2 1 8 }  { fm_out_buff_7_V_ce1 MemPortCE2 1 1 }  { fm_out_buff_7_V_we1 MemPortWE2 1 1 }  { fm_out_buff_7_V_d1 MemPortDIN2 1 16 } } }
	wt_buff_0_0_V_read { ap_none {  { wt_buff_0_0_V_read in_data 0 16 } } }
	wt_buff_0_1_V_read { ap_none {  { wt_buff_0_1_V_read in_data 0 16 } } }
	wt_buff_0_2_V_read { ap_none {  { wt_buff_0_2_V_read in_data 0 16 } } }
	wt_buff_0_3_V_read { ap_none {  { wt_buff_0_3_V_read in_data 0 16 } } }
	wt_buff_1_0_V_read { ap_none {  { wt_buff_1_0_V_read in_data 0 16 } } }
	wt_buff_1_1_V_read { ap_none {  { wt_buff_1_1_V_read in_data 0 16 } } }
	wt_buff_1_2_V_read { ap_none {  { wt_buff_1_2_V_read in_data 0 16 } } }
	wt_buff_1_3_V_read { ap_none {  { wt_buff_1_3_V_read in_data 0 16 } } }
	wt_buff_2_0_V_read { ap_none {  { wt_buff_2_0_V_read in_data 0 16 } } }
	wt_buff_2_1_V_read { ap_none {  { wt_buff_2_1_V_read in_data 0 16 } } }
	wt_buff_2_2_V_read { ap_none {  { wt_buff_2_2_V_read in_data 0 16 } } }
	wt_buff_2_3_V_read { ap_none {  { wt_buff_2_3_V_read in_data 0 16 } } }
	wt_buff_3_0_V_read { ap_none {  { wt_buff_3_0_V_read in_data 0 16 } } }
	wt_buff_3_1_V_read { ap_none {  { wt_buff_3_1_V_read in_data 0 16 } } }
	wt_buff_3_2_V_read { ap_none {  { wt_buff_3_2_V_read in_data 0 16 } } }
	wt_buff_3_3_V_read { ap_none {  { wt_buff_3_3_V_read in_data 0 16 } } }
	wt_buff_4_0_V_read { ap_none {  { wt_buff_4_0_V_read in_data 0 16 } } }
	wt_buff_4_1_V_read { ap_none {  { wt_buff_4_1_V_read in_data 0 16 } } }
	wt_buff_4_2_V_read { ap_none {  { wt_buff_4_2_V_read in_data 0 16 } } }
	wt_buff_4_3_V_read { ap_none {  { wt_buff_4_3_V_read in_data 0 16 } } }
	wt_buff_5_0_V_read { ap_none {  { wt_buff_5_0_V_read in_data 0 16 } } }
	wt_buff_5_1_V_read { ap_none {  { wt_buff_5_1_V_read in_data 0 16 } } }
	wt_buff_5_2_V_read { ap_none {  { wt_buff_5_2_V_read in_data 0 16 } } }
	wt_buff_5_3_V_read { ap_none {  { wt_buff_5_3_V_read in_data 0 16 } } }
	wt_buff_6_0_V_read { ap_none {  { wt_buff_6_0_V_read in_data 0 16 } } }
	wt_buff_6_1_V_read { ap_none {  { wt_buff_6_1_V_read in_data 0 16 } } }
	wt_buff_6_2_V_read { ap_none {  { wt_buff_6_2_V_read in_data 0 16 } } }
	wt_buff_6_3_V_read { ap_none {  { wt_buff_6_3_V_read in_data 0 16 } } }
	wt_buff_7_0_V_read { ap_none {  { wt_buff_7_0_V_read in_data 0 16 } } }
	wt_buff_7_1_V_read { ap_none {  { wt_buff_7_1_V_read in_data 0 16 } } }
	wt_buff_7_2_V_read { ap_none {  { wt_buff_7_2_V_read in_data 0 16 } } }
	wt_buff_7_3_V_read { ap_none {  { wt_buff_7_3_V_read in_data 0 16 } } }
}
