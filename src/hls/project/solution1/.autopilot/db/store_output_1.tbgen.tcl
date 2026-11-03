set moduleName store_output_1
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
set C_modelName {store_output.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ fm_out_buff_0_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_1_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_2_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_3_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_4_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_5_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_6_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_buff_7_V int 16 regular {array 169 { 1 3 } 1 1 }  }
	{ fm_out_V int 16 regular {axi_master 1}  }
	{ fm_out_V_offset int 31 regular  }
	{ basePixAddr int 16 regular  }
	{ m int 16 regular  }
	{ fm_size int 16 regular  }
	{ ch_out int 16 regular  }
	{ ACT int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fm_out_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_4_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_5_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_6_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_7_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_out_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "basePixAddr", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "m", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_size", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ch_out", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ACT", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 81
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fm_out_buff_0_V_address0 sc_out sc_lv 8 signal 0 } 
	{ fm_out_buff_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fm_out_buff_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ fm_out_buff_1_V_address0 sc_out sc_lv 8 signal 1 } 
	{ fm_out_buff_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fm_out_buff_1_V_q0 sc_in sc_lv 16 signal 1 } 
	{ fm_out_buff_2_V_address0 sc_out sc_lv 8 signal 2 } 
	{ fm_out_buff_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fm_out_buff_2_V_q0 sc_in sc_lv 16 signal 2 } 
	{ fm_out_buff_3_V_address0 sc_out sc_lv 8 signal 3 } 
	{ fm_out_buff_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fm_out_buff_3_V_q0 sc_in sc_lv 16 signal 3 } 
	{ fm_out_buff_4_V_address0 sc_out sc_lv 8 signal 4 } 
	{ fm_out_buff_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ fm_out_buff_4_V_q0 sc_in sc_lv 16 signal 4 } 
	{ fm_out_buff_5_V_address0 sc_out sc_lv 8 signal 5 } 
	{ fm_out_buff_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fm_out_buff_5_V_q0 sc_in sc_lv 16 signal 5 } 
	{ fm_out_buff_6_V_address0 sc_out sc_lv 8 signal 6 } 
	{ fm_out_buff_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fm_out_buff_6_V_q0 sc_in sc_lv 16 signal 6 } 
	{ fm_out_buff_7_V_address0 sc_out sc_lv 8 signal 7 } 
	{ fm_out_buff_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fm_out_buff_7_V_q0 sc_in sc_lv 16 signal 7 } 
	{ m_axi_fm_out_V_AWVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_AWREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_AWADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_fm_out_V_AWID sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_AWLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_fm_out_V_AWSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_fm_out_V_AWBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_AWLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_AWCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_AWPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_fm_out_V_AWQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_AWREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_AWUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_WVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_WREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_WDATA sc_out sc_lv 16 signal 8 } 
	{ m_axi_fm_out_V_WSTRB sc_out sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_WLAST sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_WID sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_WUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_ARVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_ARREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_ARADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_fm_out_V_ARID sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_ARLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_fm_out_V_ARSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_fm_out_V_ARBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_ARLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_ARCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_ARPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_fm_out_V_ARQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_ARREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_fm_out_V_ARUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_RVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_RREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_RDATA sc_in sc_lv 16 signal 8 } 
	{ m_axi_fm_out_V_RLAST sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_RID sc_in sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_RUSER sc_in sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_RRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_BVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_BREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_fm_out_V_BRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_fm_out_V_BID sc_in sc_lv 1 signal 8 } 
	{ m_axi_fm_out_V_BUSER sc_in sc_lv 1 signal 8 } 
	{ fm_out_V_offset sc_in sc_lv 31 signal 9 } 
	{ basePixAddr sc_in sc_lv 16 signal 10 } 
	{ m sc_in sc_lv 16 signal 11 } 
	{ fm_size sc_in sc_lv 16 signal 12 } 
	{ ch_out sc_in sc_lv 16 signal 13 } 
	{ ACT sc_in sc_lv 32 signal 14 } 
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
 	{ "name": "fm_out_buff_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_0_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_1_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_2_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_3_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_4_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_5_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_6_V", "role": "q0" }} , 
 	{ "name": "fm_out_buff_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_7_V", "role": "q0" }} , 
 	{ "name": "m_axi_fm_out_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_fm_out_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_fm_out_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_fm_out_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWID" }} , 
 	{ "name": "m_axi_fm_out_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_fm_out_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_fm_out_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_fm_out_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_fm_out_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_fm_out_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_fm_out_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_fm_out_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_fm_out_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_fm_out_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_fm_out_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_fm_out_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_fm_out_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_fm_out_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_fm_out_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WID" }} , 
 	{ "name": "m_axi_fm_out_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_fm_out_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_fm_out_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_fm_out_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_fm_out_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARID" }} , 
 	{ "name": "m_axi_fm_out_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_fm_out_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_fm_out_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_fm_out_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_fm_out_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_fm_out_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_fm_out_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_fm_out_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_fm_out_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_fm_out_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_fm_out_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_fm_out_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_fm_out_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_fm_out_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RID" }} , 
 	{ "name": "m_axi_fm_out_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_fm_out_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_fm_out_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_fm_out_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_fm_out_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fm_out_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_fm_out_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "BID" }} , 
 	{ "name": "m_axi_fm_out_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_V", "role": "BUSER" }} , 
 	{ "name": "fm_out_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "fm_out_V_offset", "role": "default" }} , 
 	{ "name": "basePixAddr", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "basePixAddr", "role": "default" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "m", "role": "default" }} , 
 	{ "name": "fm_size", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_size", "role": "default" }} , 
 	{ "name": "ch_out", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ch_out", "role": "default" }} , 
 	{ "name": "ACT", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ACT", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "store_output_1",
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
			{"Name" : "fm_out_buff_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "fm_out_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "fm_out_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "fm_out_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "fm_out_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "basePixAddr", "Type" : "None", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_size", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "ACT", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_urem_24ns_9nFfa_U253", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_urem_24ns_9nFfa_U254", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mux_83_16_1_1_U255", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16nstde_U256", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16nsGfk_U257", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_1Hfu_U258", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_7ns_IfE_U259", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	store_output_1 {
		fm_out_buff_0_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_1_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_2_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_3_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_4_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_5_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_6_V {Type I LastRead 27 FirstWrite -1}
		fm_out_buff_7_V {Type I LastRead 27 FirstWrite -1}
		fm_out_V {Type O LastRead 34 FirstWrite 33}
		fm_out_V_offset {Type I LastRead 2 FirstWrite -1}
		basePixAddr {Type I LastRead 2 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}
		fm_size {Type I LastRead 1 FirstWrite -1}
		ch_out {Type I LastRead 0 FirstWrite -1}
		ACT {Type I LastRead 2 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fm_out_buff_0_V { ap_memory {  { fm_out_buff_0_V_address0 mem_address 1 8 }  { fm_out_buff_0_V_ce0 mem_ce 1 1 }  { fm_out_buff_0_V_q0 mem_dout 0 16 } } }
	fm_out_buff_1_V { ap_memory {  { fm_out_buff_1_V_address0 mem_address 1 8 }  { fm_out_buff_1_V_ce0 mem_ce 1 1 }  { fm_out_buff_1_V_q0 mem_dout 0 16 } } }
	fm_out_buff_2_V { ap_memory {  { fm_out_buff_2_V_address0 mem_address 1 8 }  { fm_out_buff_2_V_ce0 mem_ce 1 1 }  { fm_out_buff_2_V_q0 mem_dout 0 16 } } }
	fm_out_buff_3_V { ap_memory {  { fm_out_buff_3_V_address0 mem_address 1 8 }  { fm_out_buff_3_V_ce0 mem_ce 1 1 }  { fm_out_buff_3_V_q0 mem_dout 0 16 } } }
	fm_out_buff_4_V { ap_memory {  { fm_out_buff_4_V_address0 mem_address 1 8 }  { fm_out_buff_4_V_ce0 mem_ce 1 1 }  { fm_out_buff_4_V_q0 mem_dout 0 16 } } }
	fm_out_buff_5_V { ap_memory {  { fm_out_buff_5_V_address0 mem_address 1 8 }  { fm_out_buff_5_V_ce0 mem_ce 1 1 }  { fm_out_buff_5_V_q0 mem_dout 0 16 } } }
	fm_out_buff_6_V { ap_memory {  { fm_out_buff_6_V_address0 mem_address 1 8 }  { fm_out_buff_6_V_ce0 mem_ce 1 1 }  { fm_out_buff_6_V_q0 mem_dout 0 16 } } }
	fm_out_buff_7_V { ap_memory {  { fm_out_buff_7_V_address0 mem_address 1 8 }  { fm_out_buff_7_V_ce0 mem_ce 1 1 }  { fm_out_buff_7_V_q0 mem_dout 0 16 } } }
	fm_out_V { m_axi {  { m_axi_fm_out_V_AWVALID VALID 1 1 }  { m_axi_fm_out_V_AWREADY READY 0 1 }  { m_axi_fm_out_V_AWADDR ADDR 1 32 }  { m_axi_fm_out_V_AWID ID 1 1 }  { m_axi_fm_out_V_AWLEN LEN 1 32 }  { m_axi_fm_out_V_AWSIZE SIZE 1 3 }  { m_axi_fm_out_V_AWBURST BURST 1 2 }  { m_axi_fm_out_V_AWLOCK LOCK 1 2 }  { m_axi_fm_out_V_AWCACHE CACHE 1 4 }  { m_axi_fm_out_V_AWPROT PROT 1 3 }  { m_axi_fm_out_V_AWQOS QOS 1 4 }  { m_axi_fm_out_V_AWREGION REGION 1 4 }  { m_axi_fm_out_V_AWUSER USER 1 1 }  { m_axi_fm_out_V_WVALID VALID 1 1 }  { m_axi_fm_out_V_WREADY READY 0 1 }  { m_axi_fm_out_V_WDATA DATA 1 16 }  { m_axi_fm_out_V_WSTRB STRB 1 2 }  { m_axi_fm_out_V_WLAST LAST 1 1 }  { m_axi_fm_out_V_WID ID 1 1 }  { m_axi_fm_out_V_WUSER USER 1 1 }  { m_axi_fm_out_V_ARVALID VALID 1 1 }  { m_axi_fm_out_V_ARREADY READY 0 1 }  { m_axi_fm_out_V_ARADDR ADDR 1 32 }  { m_axi_fm_out_V_ARID ID 1 1 }  { m_axi_fm_out_V_ARLEN LEN 1 32 }  { m_axi_fm_out_V_ARSIZE SIZE 1 3 }  { m_axi_fm_out_V_ARBURST BURST 1 2 }  { m_axi_fm_out_V_ARLOCK LOCK 1 2 }  { m_axi_fm_out_V_ARCACHE CACHE 1 4 }  { m_axi_fm_out_V_ARPROT PROT 1 3 }  { m_axi_fm_out_V_ARQOS QOS 1 4 }  { m_axi_fm_out_V_ARREGION REGION 1 4 }  { m_axi_fm_out_V_ARUSER USER 1 1 }  { m_axi_fm_out_V_RVALID VALID 0 1 }  { m_axi_fm_out_V_RREADY READY 1 1 }  { m_axi_fm_out_V_RDATA DATA 0 16 }  { m_axi_fm_out_V_RLAST LAST 0 1 }  { m_axi_fm_out_V_RID ID 0 1 }  { m_axi_fm_out_V_RUSER USER 0 1 }  { m_axi_fm_out_V_RRESP RESP 0 2 }  { m_axi_fm_out_V_BVALID VALID 0 1 }  { m_axi_fm_out_V_BREADY READY 1 1 }  { m_axi_fm_out_V_BRESP RESP 0 2 }  { m_axi_fm_out_V_BID ID 0 1 }  { m_axi_fm_out_V_BUSER USER 0 1 } } }
	fm_out_V_offset { ap_none {  { fm_out_V_offset in_data 0 31 } } }
	basePixAddr { ap_none {  { basePixAddr in_data 0 16 } } }
	m { ap_none {  { m in_data 0 16 } } }
	fm_size { ap_none {  { fm_size in_data 0 16 } } }
	ch_out { ap_none {  { ch_out in_data 0 16 } } }
	ACT { ap_none {  { ACT in_data 0 32 } } }
}
