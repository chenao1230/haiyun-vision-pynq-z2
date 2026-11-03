set moduleName load_weight_1
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
set C_modelName {load_weight.1}
set C_modelType { int 512 }
set C_modelArgList {
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
	{ weight_V int 16 regular {axi_master 0}  }
	{ weight_V_offset int 31 regular  }
	{ n int 16 regular  }
	{ m int 16 regular  }
	{ ch_in int 16 regular  }
	{ ch_out int 16 regular  }
}
set C_modelArgMapList {[ 
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
 	{ "Name" : "wt_buff_7_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "n", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "m", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ch_in", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ch_out", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 512} ]}
# RTL Port declarations: 
set portNum 120
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ wt_buff_0_0_V_read sc_in sc_lv 16 signal 0 } 
	{ wt_buff_0_1_V_read sc_in sc_lv 16 signal 1 } 
	{ wt_buff_0_2_V_read sc_in sc_lv 16 signal 2 } 
	{ wt_buff_0_3_V_read sc_in sc_lv 16 signal 3 } 
	{ wt_buff_1_0_V_read sc_in sc_lv 16 signal 4 } 
	{ wt_buff_1_1_V_read sc_in sc_lv 16 signal 5 } 
	{ wt_buff_1_2_V_read sc_in sc_lv 16 signal 6 } 
	{ wt_buff_1_3_V_read sc_in sc_lv 16 signal 7 } 
	{ wt_buff_2_0_V_read sc_in sc_lv 16 signal 8 } 
	{ wt_buff_2_1_V_read sc_in sc_lv 16 signal 9 } 
	{ wt_buff_2_2_V_read sc_in sc_lv 16 signal 10 } 
	{ wt_buff_2_3_V_read sc_in sc_lv 16 signal 11 } 
	{ wt_buff_3_0_V_read sc_in sc_lv 16 signal 12 } 
	{ wt_buff_3_1_V_read sc_in sc_lv 16 signal 13 } 
	{ wt_buff_3_2_V_read sc_in sc_lv 16 signal 14 } 
	{ wt_buff_3_3_V_read sc_in sc_lv 16 signal 15 } 
	{ wt_buff_4_0_V_read sc_in sc_lv 16 signal 16 } 
	{ wt_buff_4_1_V_read sc_in sc_lv 16 signal 17 } 
	{ wt_buff_4_2_V_read sc_in sc_lv 16 signal 18 } 
	{ wt_buff_4_3_V_read sc_in sc_lv 16 signal 19 } 
	{ wt_buff_5_0_V_read sc_in sc_lv 16 signal 20 } 
	{ wt_buff_5_1_V_read sc_in sc_lv 16 signal 21 } 
	{ wt_buff_5_2_V_read sc_in sc_lv 16 signal 22 } 
	{ wt_buff_5_3_V_read sc_in sc_lv 16 signal 23 } 
	{ wt_buff_6_0_V_read sc_in sc_lv 16 signal 24 } 
	{ wt_buff_6_1_V_read sc_in sc_lv 16 signal 25 } 
	{ wt_buff_6_2_V_read sc_in sc_lv 16 signal 26 } 
	{ wt_buff_6_3_V_read sc_in sc_lv 16 signal 27 } 
	{ wt_buff_7_0_V_read sc_in sc_lv 16 signal 28 } 
	{ wt_buff_7_1_V_read sc_in sc_lv 16 signal 29 } 
	{ wt_buff_7_2_V_read sc_in sc_lv 16 signal 30 } 
	{ wt_buff_7_3_V_read sc_in sc_lv 16 signal 31 } 
	{ m_axi_weight_V_AWVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_AWREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_AWADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_weight_V_AWID sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_AWLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_weight_V_AWSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_weight_V_AWBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_weight_V_AWLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_weight_V_AWCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_AWPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_weight_V_AWQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_AWREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_AWUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_WVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_WREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_WDATA sc_out sc_lv 16 signal 32 } 
	{ m_axi_weight_V_WSTRB sc_out sc_lv 2 signal 32 } 
	{ m_axi_weight_V_WLAST sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_WID sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_WUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_ARVALID sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_ARREADY sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_ARADDR sc_out sc_lv 32 signal 32 } 
	{ m_axi_weight_V_ARID sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_ARLEN sc_out sc_lv 32 signal 32 } 
	{ m_axi_weight_V_ARSIZE sc_out sc_lv 3 signal 32 } 
	{ m_axi_weight_V_ARBURST sc_out sc_lv 2 signal 32 } 
	{ m_axi_weight_V_ARLOCK sc_out sc_lv 2 signal 32 } 
	{ m_axi_weight_V_ARCACHE sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_ARPROT sc_out sc_lv 3 signal 32 } 
	{ m_axi_weight_V_ARQOS sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_ARREGION sc_out sc_lv 4 signal 32 } 
	{ m_axi_weight_V_ARUSER sc_out sc_lv 1 signal 32 } 
	{ m_axi_weight_V_RVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_RREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_RDATA sc_in sc_lv 16 signal 32 } 
	{ m_axi_weight_V_RLAST sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_RID sc_in sc_lv 1 signal 32 } 
	{ m_axi_weight_V_RUSER sc_in sc_lv 1 signal 32 } 
	{ m_axi_weight_V_RRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_weight_V_BVALID sc_in sc_logic 1 signal 32 } 
	{ m_axi_weight_V_BREADY sc_out sc_logic 1 signal 32 } 
	{ m_axi_weight_V_BRESP sc_in sc_lv 2 signal 32 } 
	{ m_axi_weight_V_BID sc_in sc_lv 1 signal 32 } 
	{ m_axi_weight_V_BUSER sc_in sc_lv 1 signal 32 } 
	{ weight_V_offset sc_in sc_lv 31 signal 33 } 
	{ n sc_in sc_lv 16 signal 34 } 
	{ m sc_in sc_lv 16 signal 35 } 
	{ ch_in sc_in sc_lv 16 signal 36 } 
	{ ch_out sc_in sc_lv 16 signal 37 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
	{ ap_return_10 sc_out sc_lv 16 signal -1 } 
	{ ap_return_11 sc_out sc_lv 16 signal -1 } 
	{ ap_return_12 sc_out sc_lv 16 signal -1 } 
	{ ap_return_13 sc_out sc_lv 16 signal -1 } 
	{ ap_return_14 sc_out sc_lv 16 signal -1 } 
	{ ap_return_15 sc_out sc_lv 16 signal -1 } 
	{ ap_return_16 sc_out sc_lv 16 signal -1 } 
	{ ap_return_17 sc_out sc_lv 16 signal -1 } 
	{ ap_return_18 sc_out sc_lv 16 signal -1 } 
	{ ap_return_19 sc_out sc_lv 16 signal -1 } 
	{ ap_return_20 sc_out sc_lv 16 signal -1 } 
	{ ap_return_21 sc_out sc_lv 16 signal -1 } 
	{ ap_return_22 sc_out sc_lv 16 signal -1 } 
	{ ap_return_23 sc_out sc_lv 16 signal -1 } 
	{ ap_return_24 sc_out sc_lv 16 signal -1 } 
	{ ap_return_25 sc_out sc_lv 16 signal -1 } 
	{ ap_return_26 sc_out sc_lv 16 signal -1 } 
	{ ap_return_27 sc_out sc_lv 16 signal -1 } 
	{ ap_return_28 sc_out sc_lv 16 signal -1 } 
	{ ap_return_29 sc_out sc_lv 16 signal -1 } 
	{ ap_return_30 sc_out sc_lv 16 signal -1 } 
	{ ap_return_31 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
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
 	{ "name": "wt_buff_7_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "wt_buff_7_3_V_read", "role": "default" }} , 
 	{ "name": "m_axi_weight_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_weight_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_weight_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_weight_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWID" }} , 
 	{ "name": "m_axi_weight_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_weight_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_weight_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_weight_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_weight_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_weight_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_weight_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_weight_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_weight_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_weight_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_weight_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_weight_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weight_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_weight_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_weight_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_weight_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WID" }} , 
 	{ "name": "m_axi_weight_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_weight_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_weight_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_weight_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_weight_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARID" }} , 
 	{ "name": "m_axi_weight_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_weight_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_weight_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_weight_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_weight_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_weight_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_weight_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_weight_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_weight_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_weight_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_weight_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_weight_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weight_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_weight_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_weight_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RID" }} , 
 	{ "name": "m_axi_weight_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_weight_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_weight_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_weight_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_weight_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_weight_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BID" }} , 
 	{ "name": "m_axi_weight_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BUSER" }} , 
 	{ "name": "weight_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "weight_V_offset", "role": "default" }} , 
 	{ "name": "n", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "n", "role": "default" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "m", "role": "default" }} , 
 	{ "name": "ch_in", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ch_in", "role": "default" }} , 
 	{ "name": "ch_out", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ch_out", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "load_weight_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
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
			{"Name" : "wt_buff_7_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weight_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weight_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "weight_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "n", "Type" : "None", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_out", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_am_addmul_16vdy_U104", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_weight_1 {
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
		wt_buff_7_3_V_read {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		weight_V_offset {Type I LastRead 0 FirstWrite -1}
		n {Type I LastRead 0 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}
		ch_in {Type I LastRead 0 FirstWrite -1}
		ch_out {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
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
	weight_V { m_axi {  { m_axi_weight_V_AWVALID VALID 1 1 }  { m_axi_weight_V_AWREADY READY 0 1 }  { m_axi_weight_V_AWADDR ADDR 1 32 }  { m_axi_weight_V_AWID ID 1 1 }  { m_axi_weight_V_AWLEN LEN 1 32 }  { m_axi_weight_V_AWSIZE SIZE 1 3 }  { m_axi_weight_V_AWBURST BURST 1 2 }  { m_axi_weight_V_AWLOCK LOCK 1 2 }  { m_axi_weight_V_AWCACHE CACHE 1 4 }  { m_axi_weight_V_AWPROT PROT 1 3 }  { m_axi_weight_V_AWQOS QOS 1 4 }  { m_axi_weight_V_AWREGION REGION 1 4 }  { m_axi_weight_V_AWUSER USER 1 1 }  { m_axi_weight_V_WVALID VALID 1 1 }  { m_axi_weight_V_WREADY READY 0 1 }  { m_axi_weight_V_WDATA DATA 1 16 }  { m_axi_weight_V_WSTRB STRB 1 2 }  { m_axi_weight_V_WLAST LAST 1 1 }  { m_axi_weight_V_WID ID 1 1 }  { m_axi_weight_V_WUSER USER 1 1 }  { m_axi_weight_V_ARVALID VALID 1 1 }  { m_axi_weight_V_ARREADY READY 0 1 }  { m_axi_weight_V_ARADDR ADDR 1 32 }  { m_axi_weight_V_ARID ID 1 1 }  { m_axi_weight_V_ARLEN LEN 1 32 }  { m_axi_weight_V_ARSIZE SIZE 1 3 }  { m_axi_weight_V_ARBURST BURST 1 2 }  { m_axi_weight_V_ARLOCK LOCK 1 2 }  { m_axi_weight_V_ARCACHE CACHE 1 4 }  { m_axi_weight_V_ARPROT PROT 1 3 }  { m_axi_weight_V_ARQOS QOS 1 4 }  { m_axi_weight_V_ARREGION REGION 1 4 }  { m_axi_weight_V_ARUSER USER 1 1 }  { m_axi_weight_V_RVALID VALID 0 1 }  { m_axi_weight_V_RREADY READY 1 1 }  { m_axi_weight_V_RDATA DATA 0 16 }  { m_axi_weight_V_RLAST LAST 0 1 }  { m_axi_weight_V_RID ID 0 1 }  { m_axi_weight_V_RUSER USER 0 1 }  { m_axi_weight_V_RRESP RESP 0 2 }  { m_axi_weight_V_BVALID VALID 0 1 }  { m_axi_weight_V_BREADY READY 1 1 }  { m_axi_weight_V_BRESP RESP 0 2 }  { m_axi_weight_V_BID ID 0 1 }  { m_axi_weight_V_BUSER USER 0 1 } } }
	weight_V_offset { ap_none {  { weight_V_offset in_data 0 31 } } }
	n { ap_none {  { n in_data 0 16 } } }
	m { ap_none {  { m in_data 0 16 } } }
	ch_in { ap_none {  { ch_in in_data 0 16 } } }
	ch_out { ap_none {  { ch_out in_data 0 16 } } }
}
