set moduleName load_bias
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
set C_modelName {load_bias}
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
	{ fm_out_buff_8_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_9_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_10_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_11_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_12_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_13_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_14_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_15_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_16_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_17_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_18_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_19_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_20_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_21_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_22_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_23_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_24_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_25_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_26_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_27_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_28_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_29_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_30_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ fm_out_buff_31_V int 16 regular {array 169 { 0 3 } 0 1 }  }
	{ bias_buff_0_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_1_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_2_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_3_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_4_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_5_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_6_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_7_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_8_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_9_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_10_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_11_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_12_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_13_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_14_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_15_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_16_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_17_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_18_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_19_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_20_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_21_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_22_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_23_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_24_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_25_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_26_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_27_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_28_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_29_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_30_V int 16 regular {array 16 { 1 3 } 1 1 }  }
	{ bias_buff_31_V int 16 regular {array 16 { 1 3 } 1 1 }  }
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
 	{ "Name" : "fm_out_buff_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_buff_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "bias_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_8_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_9_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_10_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_11_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_12_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_13_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_14_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_15_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_16_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_17_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_18_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_19_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_20_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_21_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_22_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_23_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_24_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_25_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_26_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_27_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_28_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_29_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_30_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "bias_buff_31_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "m", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 231
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
	{ fm_out_buff_8_V_address0 sc_out sc_lv 8 signal 8 } 
	{ fm_out_buff_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ fm_out_buff_8_V_we0 sc_out sc_logic 1 signal 8 } 
	{ fm_out_buff_8_V_d0 sc_out sc_lv 16 signal 8 } 
	{ fm_out_buff_9_V_address0 sc_out sc_lv 8 signal 9 } 
	{ fm_out_buff_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ fm_out_buff_9_V_we0 sc_out sc_logic 1 signal 9 } 
	{ fm_out_buff_9_V_d0 sc_out sc_lv 16 signal 9 } 
	{ fm_out_buff_10_V_address0 sc_out sc_lv 8 signal 10 } 
	{ fm_out_buff_10_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ fm_out_buff_10_V_we0 sc_out sc_logic 1 signal 10 } 
	{ fm_out_buff_10_V_d0 sc_out sc_lv 16 signal 10 } 
	{ fm_out_buff_11_V_address0 sc_out sc_lv 8 signal 11 } 
	{ fm_out_buff_11_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ fm_out_buff_11_V_we0 sc_out sc_logic 1 signal 11 } 
	{ fm_out_buff_11_V_d0 sc_out sc_lv 16 signal 11 } 
	{ fm_out_buff_12_V_address0 sc_out sc_lv 8 signal 12 } 
	{ fm_out_buff_12_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ fm_out_buff_12_V_we0 sc_out sc_logic 1 signal 12 } 
	{ fm_out_buff_12_V_d0 sc_out sc_lv 16 signal 12 } 
	{ fm_out_buff_13_V_address0 sc_out sc_lv 8 signal 13 } 
	{ fm_out_buff_13_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ fm_out_buff_13_V_we0 sc_out sc_logic 1 signal 13 } 
	{ fm_out_buff_13_V_d0 sc_out sc_lv 16 signal 13 } 
	{ fm_out_buff_14_V_address0 sc_out sc_lv 8 signal 14 } 
	{ fm_out_buff_14_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ fm_out_buff_14_V_we0 sc_out sc_logic 1 signal 14 } 
	{ fm_out_buff_14_V_d0 sc_out sc_lv 16 signal 14 } 
	{ fm_out_buff_15_V_address0 sc_out sc_lv 8 signal 15 } 
	{ fm_out_buff_15_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ fm_out_buff_15_V_we0 sc_out sc_logic 1 signal 15 } 
	{ fm_out_buff_15_V_d0 sc_out sc_lv 16 signal 15 } 
	{ fm_out_buff_16_V_address0 sc_out sc_lv 8 signal 16 } 
	{ fm_out_buff_16_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ fm_out_buff_16_V_we0 sc_out sc_logic 1 signal 16 } 
	{ fm_out_buff_16_V_d0 sc_out sc_lv 16 signal 16 } 
	{ fm_out_buff_17_V_address0 sc_out sc_lv 8 signal 17 } 
	{ fm_out_buff_17_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ fm_out_buff_17_V_we0 sc_out sc_logic 1 signal 17 } 
	{ fm_out_buff_17_V_d0 sc_out sc_lv 16 signal 17 } 
	{ fm_out_buff_18_V_address0 sc_out sc_lv 8 signal 18 } 
	{ fm_out_buff_18_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ fm_out_buff_18_V_we0 sc_out sc_logic 1 signal 18 } 
	{ fm_out_buff_18_V_d0 sc_out sc_lv 16 signal 18 } 
	{ fm_out_buff_19_V_address0 sc_out sc_lv 8 signal 19 } 
	{ fm_out_buff_19_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ fm_out_buff_19_V_we0 sc_out sc_logic 1 signal 19 } 
	{ fm_out_buff_19_V_d0 sc_out sc_lv 16 signal 19 } 
	{ fm_out_buff_20_V_address0 sc_out sc_lv 8 signal 20 } 
	{ fm_out_buff_20_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ fm_out_buff_20_V_we0 sc_out sc_logic 1 signal 20 } 
	{ fm_out_buff_20_V_d0 sc_out sc_lv 16 signal 20 } 
	{ fm_out_buff_21_V_address0 sc_out sc_lv 8 signal 21 } 
	{ fm_out_buff_21_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ fm_out_buff_21_V_we0 sc_out sc_logic 1 signal 21 } 
	{ fm_out_buff_21_V_d0 sc_out sc_lv 16 signal 21 } 
	{ fm_out_buff_22_V_address0 sc_out sc_lv 8 signal 22 } 
	{ fm_out_buff_22_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ fm_out_buff_22_V_we0 sc_out sc_logic 1 signal 22 } 
	{ fm_out_buff_22_V_d0 sc_out sc_lv 16 signal 22 } 
	{ fm_out_buff_23_V_address0 sc_out sc_lv 8 signal 23 } 
	{ fm_out_buff_23_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ fm_out_buff_23_V_we0 sc_out sc_logic 1 signal 23 } 
	{ fm_out_buff_23_V_d0 sc_out sc_lv 16 signal 23 } 
	{ fm_out_buff_24_V_address0 sc_out sc_lv 8 signal 24 } 
	{ fm_out_buff_24_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ fm_out_buff_24_V_we0 sc_out sc_logic 1 signal 24 } 
	{ fm_out_buff_24_V_d0 sc_out sc_lv 16 signal 24 } 
	{ fm_out_buff_25_V_address0 sc_out sc_lv 8 signal 25 } 
	{ fm_out_buff_25_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ fm_out_buff_25_V_we0 sc_out sc_logic 1 signal 25 } 
	{ fm_out_buff_25_V_d0 sc_out sc_lv 16 signal 25 } 
	{ fm_out_buff_26_V_address0 sc_out sc_lv 8 signal 26 } 
	{ fm_out_buff_26_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ fm_out_buff_26_V_we0 sc_out sc_logic 1 signal 26 } 
	{ fm_out_buff_26_V_d0 sc_out sc_lv 16 signal 26 } 
	{ fm_out_buff_27_V_address0 sc_out sc_lv 8 signal 27 } 
	{ fm_out_buff_27_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ fm_out_buff_27_V_we0 sc_out sc_logic 1 signal 27 } 
	{ fm_out_buff_27_V_d0 sc_out sc_lv 16 signal 27 } 
	{ fm_out_buff_28_V_address0 sc_out sc_lv 8 signal 28 } 
	{ fm_out_buff_28_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ fm_out_buff_28_V_we0 sc_out sc_logic 1 signal 28 } 
	{ fm_out_buff_28_V_d0 sc_out sc_lv 16 signal 28 } 
	{ fm_out_buff_29_V_address0 sc_out sc_lv 8 signal 29 } 
	{ fm_out_buff_29_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ fm_out_buff_29_V_we0 sc_out sc_logic 1 signal 29 } 
	{ fm_out_buff_29_V_d0 sc_out sc_lv 16 signal 29 } 
	{ fm_out_buff_30_V_address0 sc_out sc_lv 8 signal 30 } 
	{ fm_out_buff_30_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ fm_out_buff_30_V_we0 sc_out sc_logic 1 signal 30 } 
	{ fm_out_buff_30_V_d0 sc_out sc_lv 16 signal 30 } 
	{ fm_out_buff_31_V_address0 sc_out sc_lv 8 signal 31 } 
	{ fm_out_buff_31_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ fm_out_buff_31_V_we0 sc_out sc_logic 1 signal 31 } 
	{ fm_out_buff_31_V_d0 sc_out sc_lv 16 signal 31 } 
	{ bias_buff_0_V_address0 sc_out sc_lv 4 signal 32 } 
	{ bias_buff_0_V_ce0 sc_out sc_logic 1 signal 32 } 
	{ bias_buff_0_V_q0 sc_in sc_lv 16 signal 32 } 
	{ bias_buff_1_V_address0 sc_out sc_lv 4 signal 33 } 
	{ bias_buff_1_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ bias_buff_1_V_q0 sc_in sc_lv 16 signal 33 } 
	{ bias_buff_2_V_address0 sc_out sc_lv 4 signal 34 } 
	{ bias_buff_2_V_ce0 sc_out sc_logic 1 signal 34 } 
	{ bias_buff_2_V_q0 sc_in sc_lv 16 signal 34 } 
	{ bias_buff_3_V_address0 sc_out sc_lv 4 signal 35 } 
	{ bias_buff_3_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ bias_buff_3_V_q0 sc_in sc_lv 16 signal 35 } 
	{ bias_buff_4_V_address0 sc_out sc_lv 4 signal 36 } 
	{ bias_buff_4_V_ce0 sc_out sc_logic 1 signal 36 } 
	{ bias_buff_4_V_q0 sc_in sc_lv 16 signal 36 } 
	{ bias_buff_5_V_address0 sc_out sc_lv 4 signal 37 } 
	{ bias_buff_5_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ bias_buff_5_V_q0 sc_in sc_lv 16 signal 37 } 
	{ bias_buff_6_V_address0 sc_out sc_lv 4 signal 38 } 
	{ bias_buff_6_V_ce0 sc_out sc_logic 1 signal 38 } 
	{ bias_buff_6_V_q0 sc_in sc_lv 16 signal 38 } 
	{ bias_buff_7_V_address0 sc_out sc_lv 4 signal 39 } 
	{ bias_buff_7_V_ce0 sc_out sc_logic 1 signal 39 } 
	{ bias_buff_7_V_q0 sc_in sc_lv 16 signal 39 } 
	{ bias_buff_8_V_address0 sc_out sc_lv 4 signal 40 } 
	{ bias_buff_8_V_ce0 sc_out sc_logic 1 signal 40 } 
	{ bias_buff_8_V_q0 sc_in sc_lv 16 signal 40 } 
	{ bias_buff_9_V_address0 sc_out sc_lv 4 signal 41 } 
	{ bias_buff_9_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ bias_buff_9_V_q0 sc_in sc_lv 16 signal 41 } 
	{ bias_buff_10_V_address0 sc_out sc_lv 4 signal 42 } 
	{ bias_buff_10_V_ce0 sc_out sc_logic 1 signal 42 } 
	{ bias_buff_10_V_q0 sc_in sc_lv 16 signal 42 } 
	{ bias_buff_11_V_address0 sc_out sc_lv 4 signal 43 } 
	{ bias_buff_11_V_ce0 sc_out sc_logic 1 signal 43 } 
	{ bias_buff_11_V_q0 sc_in sc_lv 16 signal 43 } 
	{ bias_buff_12_V_address0 sc_out sc_lv 4 signal 44 } 
	{ bias_buff_12_V_ce0 sc_out sc_logic 1 signal 44 } 
	{ bias_buff_12_V_q0 sc_in sc_lv 16 signal 44 } 
	{ bias_buff_13_V_address0 sc_out sc_lv 4 signal 45 } 
	{ bias_buff_13_V_ce0 sc_out sc_logic 1 signal 45 } 
	{ bias_buff_13_V_q0 sc_in sc_lv 16 signal 45 } 
	{ bias_buff_14_V_address0 sc_out sc_lv 4 signal 46 } 
	{ bias_buff_14_V_ce0 sc_out sc_logic 1 signal 46 } 
	{ bias_buff_14_V_q0 sc_in sc_lv 16 signal 46 } 
	{ bias_buff_15_V_address0 sc_out sc_lv 4 signal 47 } 
	{ bias_buff_15_V_ce0 sc_out sc_logic 1 signal 47 } 
	{ bias_buff_15_V_q0 sc_in sc_lv 16 signal 47 } 
	{ bias_buff_16_V_address0 sc_out sc_lv 4 signal 48 } 
	{ bias_buff_16_V_ce0 sc_out sc_logic 1 signal 48 } 
	{ bias_buff_16_V_q0 sc_in sc_lv 16 signal 48 } 
	{ bias_buff_17_V_address0 sc_out sc_lv 4 signal 49 } 
	{ bias_buff_17_V_ce0 sc_out sc_logic 1 signal 49 } 
	{ bias_buff_17_V_q0 sc_in sc_lv 16 signal 49 } 
	{ bias_buff_18_V_address0 sc_out sc_lv 4 signal 50 } 
	{ bias_buff_18_V_ce0 sc_out sc_logic 1 signal 50 } 
	{ bias_buff_18_V_q0 sc_in sc_lv 16 signal 50 } 
	{ bias_buff_19_V_address0 sc_out sc_lv 4 signal 51 } 
	{ bias_buff_19_V_ce0 sc_out sc_logic 1 signal 51 } 
	{ bias_buff_19_V_q0 sc_in sc_lv 16 signal 51 } 
	{ bias_buff_20_V_address0 sc_out sc_lv 4 signal 52 } 
	{ bias_buff_20_V_ce0 sc_out sc_logic 1 signal 52 } 
	{ bias_buff_20_V_q0 sc_in sc_lv 16 signal 52 } 
	{ bias_buff_21_V_address0 sc_out sc_lv 4 signal 53 } 
	{ bias_buff_21_V_ce0 sc_out sc_logic 1 signal 53 } 
	{ bias_buff_21_V_q0 sc_in sc_lv 16 signal 53 } 
	{ bias_buff_22_V_address0 sc_out sc_lv 4 signal 54 } 
	{ bias_buff_22_V_ce0 sc_out sc_logic 1 signal 54 } 
	{ bias_buff_22_V_q0 sc_in sc_lv 16 signal 54 } 
	{ bias_buff_23_V_address0 sc_out sc_lv 4 signal 55 } 
	{ bias_buff_23_V_ce0 sc_out sc_logic 1 signal 55 } 
	{ bias_buff_23_V_q0 sc_in sc_lv 16 signal 55 } 
	{ bias_buff_24_V_address0 sc_out sc_lv 4 signal 56 } 
	{ bias_buff_24_V_ce0 sc_out sc_logic 1 signal 56 } 
	{ bias_buff_24_V_q0 sc_in sc_lv 16 signal 56 } 
	{ bias_buff_25_V_address0 sc_out sc_lv 4 signal 57 } 
	{ bias_buff_25_V_ce0 sc_out sc_logic 1 signal 57 } 
	{ bias_buff_25_V_q0 sc_in sc_lv 16 signal 57 } 
	{ bias_buff_26_V_address0 sc_out sc_lv 4 signal 58 } 
	{ bias_buff_26_V_ce0 sc_out sc_logic 1 signal 58 } 
	{ bias_buff_26_V_q0 sc_in sc_lv 16 signal 58 } 
	{ bias_buff_27_V_address0 sc_out sc_lv 4 signal 59 } 
	{ bias_buff_27_V_ce0 sc_out sc_logic 1 signal 59 } 
	{ bias_buff_27_V_q0 sc_in sc_lv 16 signal 59 } 
	{ bias_buff_28_V_address0 sc_out sc_lv 4 signal 60 } 
	{ bias_buff_28_V_ce0 sc_out sc_logic 1 signal 60 } 
	{ bias_buff_28_V_q0 sc_in sc_lv 16 signal 60 } 
	{ bias_buff_29_V_address0 sc_out sc_lv 4 signal 61 } 
	{ bias_buff_29_V_ce0 sc_out sc_logic 1 signal 61 } 
	{ bias_buff_29_V_q0 sc_in sc_lv 16 signal 61 } 
	{ bias_buff_30_V_address0 sc_out sc_lv 4 signal 62 } 
	{ bias_buff_30_V_ce0 sc_out sc_logic 1 signal 62 } 
	{ bias_buff_30_V_q0 sc_in sc_lv 16 signal 62 } 
	{ bias_buff_31_V_address0 sc_out sc_lv 4 signal 63 } 
	{ bias_buff_31_V_ce0 sc_out sc_logic 1 signal 63 } 
	{ bias_buff_31_V_q0 sc_in sc_lv 16 signal 63 } 
	{ m sc_in sc_lv 16 signal 64 } 
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
 	{ "name": "fm_out_buff_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_8_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_8_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_8_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_8_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_9_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_9_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_9_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_9_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_10_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_10_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_10_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_10_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_11_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_11_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_11_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_11_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_12_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_12_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_12_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_12_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_13_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_13_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_13_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_13_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_14_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_14_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_14_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_14_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_15_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_15_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_15_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_15_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_16_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_16_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_16_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_16_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_16_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_16_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_17_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_17_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_17_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_17_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_17_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_17_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_18_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_18_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_18_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_18_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_18_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_18_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_19_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_19_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_19_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_19_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_19_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_19_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_20_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_20_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_20_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_20_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_20_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_20_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_21_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_21_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_21_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_21_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_21_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_21_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_22_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_22_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_22_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_22_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_22_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_22_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_23_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_23_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_23_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_23_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_23_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_23_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_24_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_24_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_24_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_24_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_24_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_24_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_25_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_25_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_25_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_25_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_25_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_25_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_26_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_26_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_26_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_26_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_26_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_26_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_27_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_27_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_27_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_27_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_27_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_27_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_28_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_28_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_28_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_28_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_28_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_28_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_29_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_29_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_29_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_29_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_29_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_29_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_30_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_30_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_30_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_30_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_30_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_30_V", "role": "d0" }} , 
 	{ "name": "fm_out_buff_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_31_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_31_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_31_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_31_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_31_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_31_V", "role": "d0" }} , 
 	{ "name": "bias_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "address0" }} , 
 	{ "name": "bias_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_0_V", "role": "q0" }} , 
 	{ "name": "bias_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "address0" }} , 
 	{ "name": "bias_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_1_V", "role": "q0" }} , 
 	{ "name": "bias_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "address0" }} , 
 	{ "name": "bias_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_2_V", "role": "q0" }} , 
 	{ "name": "bias_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "address0" }} , 
 	{ "name": "bias_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_3_V", "role": "q0" }} , 
 	{ "name": "bias_buff_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "address0" }} , 
 	{ "name": "bias_buff_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_4_V", "role": "q0" }} , 
 	{ "name": "bias_buff_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "address0" }} , 
 	{ "name": "bias_buff_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_5_V", "role": "q0" }} , 
 	{ "name": "bias_buff_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "address0" }} , 
 	{ "name": "bias_buff_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_6_V", "role": "q0" }} , 
 	{ "name": "bias_buff_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "address0" }} , 
 	{ "name": "bias_buff_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_7_V", "role": "q0" }} , 
 	{ "name": "bias_buff_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_8_V", "role": "address0" }} , 
 	{ "name": "bias_buff_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_8_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_8_V", "role": "q0" }} , 
 	{ "name": "bias_buff_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_9_V", "role": "address0" }} , 
 	{ "name": "bias_buff_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_9_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_9_V", "role": "q0" }} , 
 	{ "name": "bias_buff_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_10_V", "role": "address0" }} , 
 	{ "name": "bias_buff_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_10_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_10_V", "role": "q0" }} , 
 	{ "name": "bias_buff_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_11_V", "role": "address0" }} , 
 	{ "name": "bias_buff_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_11_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_11_V", "role": "q0" }} , 
 	{ "name": "bias_buff_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_12_V", "role": "address0" }} , 
 	{ "name": "bias_buff_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_12_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_12_V", "role": "q0" }} , 
 	{ "name": "bias_buff_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_13_V", "role": "address0" }} , 
 	{ "name": "bias_buff_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_13_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_13_V", "role": "q0" }} , 
 	{ "name": "bias_buff_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_14_V", "role": "address0" }} , 
 	{ "name": "bias_buff_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_14_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_14_V", "role": "q0" }} , 
 	{ "name": "bias_buff_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_15_V", "role": "address0" }} , 
 	{ "name": "bias_buff_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_15_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_15_V", "role": "q0" }} , 
 	{ "name": "bias_buff_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_16_V", "role": "address0" }} , 
 	{ "name": "bias_buff_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_16_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_16_V", "role": "q0" }} , 
 	{ "name": "bias_buff_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_17_V", "role": "address0" }} , 
 	{ "name": "bias_buff_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_17_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_17_V", "role": "q0" }} , 
 	{ "name": "bias_buff_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_18_V", "role": "address0" }} , 
 	{ "name": "bias_buff_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_18_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_18_V", "role": "q0" }} , 
 	{ "name": "bias_buff_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_19_V", "role": "address0" }} , 
 	{ "name": "bias_buff_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_19_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_19_V", "role": "q0" }} , 
 	{ "name": "bias_buff_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_20_V", "role": "address0" }} , 
 	{ "name": "bias_buff_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_20_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_20_V", "role": "q0" }} , 
 	{ "name": "bias_buff_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_21_V", "role": "address0" }} , 
 	{ "name": "bias_buff_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_21_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_21_V", "role": "q0" }} , 
 	{ "name": "bias_buff_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_22_V", "role": "address0" }} , 
 	{ "name": "bias_buff_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_22_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_22_V", "role": "q0" }} , 
 	{ "name": "bias_buff_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_23_V", "role": "address0" }} , 
 	{ "name": "bias_buff_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_23_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_23_V", "role": "q0" }} , 
 	{ "name": "bias_buff_24_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_24_V", "role": "address0" }} , 
 	{ "name": "bias_buff_24_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_24_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_24_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_24_V", "role": "q0" }} , 
 	{ "name": "bias_buff_25_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_25_V", "role": "address0" }} , 
 	{ "name": "bias_buff_25_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_25_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_25_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_25_V", "role": "q0" }} , 
 	{ "name": "bias_buff_26_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_26_V", "role": "address0" }} , 
 	{ "name": "bias_buff_26_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_26_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_26_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_26_V", "role": "q0" }} , 
 	{ "name": "bias_buff_27_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_27_V", "role": "address0" }} , 
 	{ "name": "bias_buff_27_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_27_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_27_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_27_V", "role": "q0" }} , 
 	{ "name": "bias_buff_28_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_28_V", "role": "address0" }} , 
 	{ "name": "bias_buff_28_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_28_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_28_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_28_V", "role": "q0" }} , 
 	{ "name": "bias_buff_29_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_29_V", "role": "address0" }} , 
 	{ "name": "bias_buff_29_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_29_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_29_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_29_V", "role": "q0" }} , 
 	{ "name": "bias_buff_30_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_30_V", "role": "address0" }} , 
 	{ "name": "bias_buff_30_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_30_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_30_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_30_V", "role": "q0" }} , 
 	{ "name": "bias_buff_31_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "bias_buff_31_V", "role": "address0" }} , 
 	{ "name": "bias_buff_31_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_buff_31_V", "role": "ce0" }} , 
 	{ "name": "bias_buff_31_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "bias_buff_31_V", "role": "q0" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "m", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "load_bias",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "173", "EstimateLatencyMax" : "173",
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
			{"Name" : "fm_out_buff_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_15_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_16_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_17_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_18_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_19_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_20_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_21_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_22_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_23_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_24_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_25_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_26_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_27_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_28_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_29_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_30_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_out_buff_31_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "bias_buff_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_buff_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_4Shg_U301", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_bias {
		fm_out_buff_0_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_1_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_2_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_3_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_4_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_5_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_6_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_7_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_8_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_9_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_10_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_11_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_12_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_13_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_14_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_15_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_16_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_17_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_18_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_19_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_20_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_21_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_22_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_23_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_24_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_25_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_26_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_27_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_28_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_29_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_30_V {Type O LastRead -1 FirstWrite 4}
		fm_out_buff_31_V {Type O LastRead -1 FirstWrite 4}
		bias_buff_0_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_1_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_2_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_3_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_4_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_5_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_6_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_7_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_8_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_9_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_10_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_11_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_12_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_13_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_14_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_15_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_16_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_17_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_18_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_19_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_20_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_21_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_22_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_23_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_24_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_25_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_26_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_27_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_28_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_29_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_30_V {Type I LastRead 3 FirstWrite -1}
		bias_buff_31_V {Type I LastRead 3 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "173", "Max" : "173"}
	, {"Name" : "Interval", "Min" : "173", "Max" : "173"}
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
	fm_out_buff_8_V { ap_memory {  { fm_out_buff_8_V_address0 mem_address 1 8 }  { fm_out_buff_8_V_ce0 mem_ce 1 1 }  { fm_out_buff_8_V_we0 mem_we 1 1 }  { fm_out_buff_8_V_d0 mem_din 1 16 } } }
	fm_out_buff_9_V { ap_memory {  { fm_out_buff_9_V_address0 mem_address 1 8 }  { fm_out_buff_9_V_ce0 mem_ce 1 1 }  { fm_out_buff_9_V_we0 mem_we 1 1 }  { fm_out_buff_9_V_d0 mem_din 1 16 } } }
	fm_out_buff_10_V { ap_memory {  { fm_out_buff_10_V_address0 mem_address 1 8 }  { fm_out_buff_10_V_ce0 mem_ce 1 1 }  { fm_out_buff_10_V_we0 mem_we 1 1 }  { fm_out_buff_10_V_d0 mem_din 1 16 } } }
	fm_out_buff_11_V { ap_memory {  { fm_out_buff_11_V_address0 mem_address 1 8 }  { fm_out_buff_11_V_ce0 mem_ce 1 1 }  { fm_out_buff_11_V_we0 mem_we 1 1 }  { fm_out_buff_11_V_d0 mem_din 1 16 } } }
	fm_out_buff_12_V { ap_memory {  { fm_out_buff_12_V_address0 mem_address 1 8 }  { fm_out_buff_12_V_ce0 mem_ce 1 1 }  { fm_out_buff_12_V_we0 mem_we 1 1 }  { fm_out_buff_12_V_d0 mem_din 1 16 } } }
	fm_out_buff_13_V { ap_memory {  { fm_out_buff_13_V_address0 mem_address 1 8 }  { fm_out_buff_13_V_ce0 mem_ce 1 1 }  { fm_out_buff_13_V_we0 mem_we 1 1 }  { fm_out_buff_13_V_d0 mem_din 1 16 } } }
	fm_out_buff_14_V { ap_memory {  { fm_out_buff_14_V_address0 mem_address 1 8 }  { fm_out_buff_14_V_ce0 mem_ce 1 1 }  { fm_out_buff_14_V_we0 mem_we 1 1 }  { fm_out_buff_14_V_d0 mem_din 1 16 } } }
	fm_out_buff_15_V { ap_memory {  { fm_out_buff_15_V_address0 mem_address 1 8 }  { fm_out_buff_15_V_ce0 mem_ce 1 1 }  { fm_out_buff_15_V_we0 mem_we 1 1 }  { fm_out_buff_15_V_d0 mem_din 1 16 } } }
	fm_out_buff_16_V { ap_memory {  { fm_out_buff_16_V_address0 mem_address 1 8 }  { fm_out_buff_16_V_ce0 mem_ce 1 1 }  { fm_out_buff_16_V_we0 mem_we 1 1 }  { fm_out_buff_16_V_d0 mem_din 1 16 } } }
	fm_out_buff_17_V { ap_memory {  { fm_out_buff_17_V_address0 mem_address 1 8 }  { fm_out_buff_17_V_ce0 mem_ce 1 1 }  { fm_out_buff_17_V_we0 mem_we 1 1 }  { fm_out_buff_17_V_d0 mem_din 1 16 } } }
	fm_out_buff_18_V { ap_memory {  { fm_out_buff_18_V_address0 mem_address 1 8 }  { fm_out_buff_18_V_ce0 mem_ce 1 1 }  { fm_out_buff_18_V_we0 mem_we 1 1 }  { fm_out_buff_18_V_d0 mem_din 1 16 } } }
	fm_out_buff_19_V { ap_memory {  { fm_out_buff_19_V_address0 mem_address 1 8 }  { fm_out_buff_19_V_ce0 mem_ce 1 1 }  { fm_out_buff_19_V_we0 mem_we 1 1 }  { fm_out_buff_19_V_d0 mem_din 1 16 } } }
	fm_out_buff_20_V { ap_memory {  { fm_out_buff_20_V_address0 mem_address 1 8 }  { fm_out_buff_20_V_ce0 mem_ce 1 1 }  { fm_out_buff_20_V_we0 mem_we 1 1 }  { fm_out_buff_20_V_d0 mem_din 1 16 } } }
	fm_out_buff_21_V { ap_memory {  { fm_out_buff_21_V_address0 mem_address 1 8 }  { fm_out_buff_21_V_ce0 mem_ce 1 1 }  { fm_out_buff_21_V_we0 mem_we 1 1 }  { fm_out_buff_21_V_d0 mem_din 1 16 } } }
	fm_out_buff_22_V { ap_memory {  { fm_out_buff_22_V_address0 mem_address 1 8 }  { fm_out_buff_22_V_ce0 mem_ce 1 1 }  { fm_out_buff_22_V_we0 mem_we 1 1 }  { fm_out_buff_22_V_d0 mem_din 1 16 } } }
	fm_out_buff_23_V { ap_memory {  { fm_out_buff_23_V_address0 mem_address 1 8 }  { fm_out_buff_23_V_ce0 mem_ce 1 1 }  { fm_out_buff_23_V_we0 mem_we 1 1 }  { fm_out_buff_23_V_d0 mem_din 1 16 } } }
	fm_out_buff_24_V { ap_memory {  { fm_out_buff_24_V_address0 mem_address 1 8 }  { fm_out_buff_24_V_ce0 mem_ce 1 1 }  { fm_out_buff_24_V_we0 mem_we 1 1 }  { fm_out_buff_24_V_d0 mem_din 1 16 } } }
	fm_out_buff_25_V { ap_memory {  { fm_out_buff_25_V_address0 mem_address 1 8 }  { fm_out_buff_25_V_ce0 mem_ce 1 1 }  { fm_out_buff_25_V_we0 mem_we 1 1 }  { fm_out_buff_25_V_d0 mem_din 1 16 } } }
	fm_out_buff_26_V { ap_memory {  { fm_out_buff_26_V_address0 mem_address 1 8 }  { fm_out_buff_26_V_ce0 mem_ce 1 1 }  { fm_out_buff_26_V_we0 mem_we 1 1 }  { fm_out_buff_26_V_d0 mem_din 1 16 } } }
	fm_out_buff_27_V { ap_memory {  { fm_out_buff_27_V_address0 mem_address 1 8 }  { fm_out_buff_27_V_ce0 mem_ce 1 1 }  { fm_out_buff_27_V_we0 mem_we 1 1 }  { fm_out_buff_27_V_d0 mem_din 1 16 } } }
	fm_out_buff_28_V { ap_memory {  { fm_out_buff_28_V_address0 mem_address 1 8 }  { fm_out_buff_28_V_ce0 mem_ce 1 1 }  { fm_out_buff_28_V_we0 mem_we 1 1 }  { fm_out_buff_28_V_d0 mem_din 1 16 } } }
	fm_out_buff_29_V { ap_memory {  { fm_out_buff_29_V_address0 mem_address 1 8 }  { fm_out_buff_29_V_ce0 mem_ce 1 1 }  { fm_out_buff_29_V_we0 mem_we 1 1 }  { fm_out_buff_29_V_d0 mem_din 1 16 } } }
	fm_out_buff_30_V { ap_memory {  { fm_out_buff_30_V_address0 mem_address 1 8 }  { fm_out_buff_30_V_ce0 mem_ce 1 1 }  { fm_out_buff_30_V_we0 mem_we 1 1 }  { fm_out_buff_30_V_d0 mem_din 1 16 } } }
	fm_out_buff_31_V { ap_memory {  { fm_out_buff_31_V_address0 mem_address 1 8 }  { fm_out_buff_31_V_ce0 mem_ce 1 1 }  { fm_out_buff_31_V_we0 mem_we 1 1 }  { fm_out_buff_31_V_d0 mem_din 1 16 } } }
	bias_buff_0_V { ap_memory {  { bias_buff_0_V_address0 mem_address 1 4 }  { bias_buff_0_V_ce0 mem_ce 1 1 }  { bias_buff_0_V_q0 mem_dout 0 16 } } }
	bias_buff_1_V { ap_memory {  { bias_buff_1_V_address0 mem_address 1 4 }  { bias_buff_1_V_ce0 mem_ce 1 1 }  { bias_buff_1_V_q0 mem_dout 0 16 } } }
	bias_buff_2_V { ap_memory {  { bias_buff_2_V_address0 mem_address 1 4 }  { bias_buff_2_V_ce0 mem_ce 1 1 }  { bias_buff_2_V_q0 mem_dout 0 16 } } }
	bias_buff_3_V { ap_memory {  { bias_buff_3_V_address0 mem_address 1 4 }  { bias_buff_3_V_ce0 mem_ce 1 1 }  { bias_buff_3_V_q0 mem_dout 0 16 } } }
	bias_buff_4_V { ap_memory {  { bias_buff_4_V_address0 mem_address 1 4 }  { bias_buff_4_V_ce0 mem_ce 1 1 }  { bias_buff_4_V_q0 mem_dout 0 16 } } }
	bias_buff_5_V { ap_memory {  { bias_buff_5_V_address0 mem_address 1 4 }  { bias_buff_5_V_ce0 mem_ce 1 1 }  { bias_buff_5_V_q0 mem_dout 0 16 } } }
	bias_buff_6_V { ap_memory {  { bias_buff_6_V_address0 mem_address 1 4 }  { bias_buff_6_V_ce0 mem_ce 1 1 }  { bias_buff_6_V_q0 mem_dout 0 16 } } }
	bias_buff_7_V { ap_memory {  { bias_buff_7_V_address0 mem_address 1 4 }  { bias_buff_7_V_ce0 mem_ce 1 1 }  { bias_buff_7_V_q0 mem_dout 0 16 } } }
	bias_buff_8_V { ap_memory {  { bias_buff_8_V_address0 mem_address 1 4 }  { bias_buff_8_V_ce0 mem_ce 1 1 }  { bias_buff_8_V_q0 mem_dout 0 16 } } }
	bias_buff_9_V { ap_memory {  { bias_buff_9_V_address0 mem_address 1 4 }  { bias_buff_9_V_ce0 mem_ce 1 1 }  { bias_buff_9_V_q0 mem_dout 0 16 } } }
	bias_buff_10_V { ap_memory {  { bias_buff_10_V_address0 mem_address 1 4 }  { bias_buff_10_V_ce0 mem_ce 1 1 }  { bias_buff_10_V_q0 mem_dout 0 16 } } }
	bias_buff_11_V { ap_memory {  { bias_buff_11_V_address0 mem_address 1 4 }  { bias_buff_11_V_ce0 mem_ce 1 1 }  { bias_buff_11_V_q0 mem_dout 0 16 } } }
	bias_buff_12_V { ap_memory {  { bias_buff_12_V_address0 mem_address 1 4 }  { bias_buff_12_V_ce0 mem_ce 1 1 }  { bias_buff_12_V_q0 mem_dout 0 16 } } }
	bias_buff_13_V { ap_memory {  { bias_buff_13_V_address0 mem_address 1 4 }  { bias_buff_13_V_ce0 mem_ce 1 1 }  { bias_buff_13_V_q0 mem_dout 0 16 } } }
	bias_buff_14_V { ap_memory {  { bias_buff_14_V_address0 mem_address 1 4 }  { bias_buff_14_V_ce0 mem_ce 1 1 }  { bias_buff_14_V_q0 mem_dout 0 16 } } }
	bias_buff_15_V { ap_memory {  { bias_buff_15_V_address0 mem_address 1 4 }  { bias_buff_15_V_ce0 mem_ce 1 1 }  { bias_buff_15_V_q0 mem_dout 0 16 } } }
	bias_buff_16_V { ap_memory {  { bias_buff_16_V_address0 mem_address 1 4 }  { bias_buff_16_V_ce0 mem_ce 1 1 }  { bias_buff_16_V_q0 mem_dout 0 16 } } }
	bias_buff_17_V { ap_memory {  { bias_buff_17_V_address0 mem_address 1 4 }  { bias_buff_17_V_ce0 mem_ce 1 1 }  { bias_buff_17_V_q0 mem_dout 0 16 } } }
	bias_buff_18_V { ap_memory {  { bias_buff_18_V_address0 mem_address 1 4 }  { bias_buff_18_V_ce0 mem_ce 1 1 }  { bias_buff_18_V_q0 mem_dout 0 16 } } }
	bias_buff_19_V { ap_memory {  { bias_buff_19_V_address0 mem_address 1 4 }  { bias_buff_19_V_ce0 mem_ce 1 1 }  { bias_buff_19_V_q0 mem_dout 0 16 } } }
	bias_buff_20_V { ap_memory {  { bias_buff_20_V_address0 mem_address 1 4 }  { bias_buff_20_V_ce0 mem_ce 1 1 }  { bias_buff_20_V_q0 mem_dout 0 16 } } }
	bias_buff_21_V { ap_memory {  { bias_buff_21_V_address0 mem_address 1 4 }  { bias_buff_21_V_ce0 mem_ce 1 1 }  { bias_buff_21_V_q0 mem_dout 0 16 } } }
	bias_buff_22_V { ap_memory {  { bias_buff_22_V_address0 mem_address 1 4 }  { bias_buff_22_V_ce0 mem_ce 1 1 }  { bias_buff_22_V_q0 mem_dout 0 16 } } }
	bias_buff_23_V { ap_memory {  { bias_buff_23_V_address0 mem_address 1 4 }  { bias_buff_23_V_ce0 mem_ce 1 1 }  { bias_buff_23_V_q0 mem_dout 0 16 } } }
	bias_buff_24_V { ap_memory {  { bias_buff_24_V_address0 mem_address 1 4 }  { bias_buff_24_V_ce0 mem_ce 1 1 }  { bias_buff_24_V_q0 mem_dout 0 16 } } }
	bias_buff_25_V { ap_memory {  { bias_buff_25_V_address0 mem_address 1 4 }  { bias_buff_25_V_ce0 mem_ce 1 1 }  { bias_buff_25_V_q0 mem_dout 0 16 } } }
	bias_buff_26_V { ap_memory {  { bias_buff_26_V_address0 mem_address 1 4 }  { bias_buff_26_V_ce0 mem_ce 1 1 }  { bias_buff_26_V_q0 mem_dout 0 16 } } }
	bias_buff_27_V { ap_memory {  { bias_buff_27_V_address0 mem_address 1 4 }  { bias_buff_27_V_ce0 mem_ce 1 1 }  { bias_buff_27_V_q0 mem_dout 0 16 } } }
	bias_buff_28_V { ap_memory {  { bias_buff_28_V_address0 mem_address 1 4 }  { bias_buff_28_V_ce0 mem_ce 1 1 }  { bias_buff_28_V_q0 mem_dout 0 16 } } }
	bias_buff_29_V { ap_memory {  { bias_buff_29_V_address0 mem_address 1 4 }  { bias_buff_29_V_ce0 mem_ce 1 1 }  { bias_buff_29_V_q0 mem_dout 0 16 } } }
	bias_buff_30_V { ap_memory {  { bias_buff_30_V_address0 mem_address 1 4 }  { bias_buff_30_V_ce0 mem_ce 1 1 }  { bias_buff_30_V_q0 mem_dout 0 16 } } }
	bias_buff_31_V { ap_memory {  { bias_buff_31_V_address0 mem_address 1 4 }  { bias_buff_31_V_ce0 mem_ce 1 1 }  { bias_buff_31_V_q0 mem_dout 0 16 } } }
	m { ap_none {  { m in_data 0 16 } } }
}
