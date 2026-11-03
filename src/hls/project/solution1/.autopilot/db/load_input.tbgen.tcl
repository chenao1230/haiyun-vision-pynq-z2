set moduleName load_input
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
set C_modelName {load_input}
set C_modelType { void 0 }
set C_modelArgList {
	{ fm_in_buff_0_V int 16 regular {array 729 { 0 3 } 0 1 }  }
	{ fm_in_buff_1_V int 16 regular {array 729 { 0 3 } 0 1 }  }
	{ fm_in_buff_2_V int 16 regular {array 729 { 0 3 } 0 1 }  }
	{ fm_in_buff_3_V int 16 regular {array 729 { 0 3 } 0 1 }  }
	{ in1_V int 16 regular {axi_master 0}  }
	{ in1_V_offset int 31 regular  }
	{ in2_V int 16 regular {axi_master 0}  }
	{ in2_V_offset int 31 regular  }
	{ in3_V int 16 regular {axi_master 0}  }
	{ in3_V_offset int 31 regular  }
	{ in4_V int 16 regular {axi_master 0}  }
	{ in4_V_offset int 31 regular  }
	{ n int 16 regular  }
	{ fm_row int 16 regular  }
	{ fm_col int 16 regular  }
	{ fm_size int 16 regular  }
	{ stride int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fm_in_buff_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_in_buff_1_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_in_buff_2_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fm_in_buff_3_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "in1_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in1_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in2_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in2_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in3_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in3_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in4_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in4_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "n", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_row", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_col", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_size", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "stride", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 211
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fm_in_buff_0_V_address0 sc_out sc_lv 10 signal 0 } 
	{ fm_in_buff_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fm_in_buff_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ fm_in_buff_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ fm_in_buff_1_V_address0 sc_out sc_lv 10 signal 1 } 
	{ fm_in_buff_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fm_in_buff_1_V_we0 sc_out sc_logic 1 signal 1 } 
	{ fm_in_buff_1_V_d0 sc_out sc_lv 16 signal 1 } 
	{ fm_in_buff_2_V_address0 sc_out sc_lv 10 signal 2 } 
	{ fm_in_buff_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ fm_in_buff_2_V_we0 sc_out sc_logic 1 signal 2 } 
	{ fm_in_buff_2_V_d0 sc_out sc_lv 16 signal 2 } 
	{ fm_in_buff_3_V_address0 sc_out sc_lv 10 signal 3 } 
	{ fm_in_buff_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ fm_in_buff_3_V_we0 sc_out sc_logic 1 signal 3 } 
	{ fm_in_buff_3_V_d0 sc_out sc_lv 16 signal 3 } 
	{ m_axi_in1_V_AWVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_AWREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_AWADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_in1_V_AWID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_AWLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_in1_V_AWSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_in1_V_AWBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_in1_V_AWLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_in1_V_AWCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_AWPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_in1_V_AWQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_AWREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_AWUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_WVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_WREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_WDATA sc_out sc_lv 16 signal 4 } 
	{ m_axi_in1_V_WSTRB sc_out sc_lv 2 signal 4 } 
	{ m_axi_in1_V_WLAST sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_WID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_WUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_ARVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_ARREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_ARADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_in1_V_ARID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_ARLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_in1_V_ARSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_in1_V_ARBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_in1_V_ARLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_in1_V_ARCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_ARPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_in1_V_ARQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_ARREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_in1_V_ARUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in1_V_RVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_RREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_RDATA sc_in sc_lv 16 signal 4 } 
	{ m_axi_in1_V_RLAST sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_RID sc_in sc_lv 1 signal 4 } 
	{ m_axi_in1_V_RUSER sc_in sc_lv 1 signal 4 } 
	{ m_axi_in1_V_RRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_in1_V_BVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_in1_V_BREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_in1_V_BRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_in1_V_BID sc_in sc_lv 1 signal 4 } 
	{ m_axi_in1_V_BUSER sc_in sc_lv 1 signal 4 } 
	{ in1_V_offset sc_in sc_lv 31 signal 5 } 
	{ m_axi_in2_V_AWVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_AWREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_AWADDR sc_out sc_lv 32 signal 6 } 
	{ m_axi_in2_V_AWID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_AWLEN sc_out sc_lv 32 signal 6 } 
	{ m_axi_in2_V_AWSIZE sc_out sc_lv 3 signal 6 } 
	{ m_axi_in2_V_AWBURST sc_out sc_lv 2 signal 6 } 
	{ m_axi_in2_V_AWLOCK sc_out sc_lv 2 signal 6 } 
	{ m_axi_in2_V_AWCACHE sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_AWPROT sc_out sc_lv 3 signal 6 } 
	{ m_axi_in2_V_AWQOS sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_AWREGION sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_AWUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_WVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_WREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_WDATA sc_out sc_lv 16 signal 6 } 
	{ m_axi_in2_V_WSTRB sc_out sc_lv 2 signal 6 } 
	{ m_axi_in2_V_WLAST sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_WID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_WUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_ARVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_ARREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_ARADDR sc_out sc_lv 32 signal 6 } 
	{ m_axi_in2_V_ARID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_ARLEN sc_out sc_lv 32 signal 6 } 
	{ m_axi_in2_V_ARSIZE sc_out sc_lv 3 signal 6 } 
	{ m_axi_in2_V_ARBURST sc_out sc_lv 2 signal 6 } 
	{ m_axi_in2_V_ARLOCK sc_out sc_lv 2 signal 6 } 
	{ m_axi_in2_V_ARCACHE sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_ARPROT sc_out sc_lv 3 signal 6 } 
	{ m_axi_in2_V_ARQOS sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_ARREGION sc_out sc_lv 4 signal 6 } 
	{ m_axi_in2_V_ARUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in2_V_RVALID sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_RREADY sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_RDATA sc_in sc_lv 16 signal 6 } 
	{ m_axi_in2_V_RLAST sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_RID sc_in sc_lv 1 signal 6 } 
	{ m_axi_in2_V_RUSER sc_in sc_lv 1 signal 6 } 
	{ m_axi_in2_V_RRESP sc_in sc_lv 2 signal 6 } 
	{ m_axi_in2_V_BVALID sc_in sc_logic 1 signal 6 } 
	{ m_axi_in2_V_BREADY sc_out sc_logic 1 signal 6 } 
	{ m_axi_in2_V_BRESP sc_in sc_lv 2 signal 6 } 
	{ m_axi_in2_V_BID sc_in sc_lv 1 signal 6 } 
	{ m_axi_in2_V_BUSER sc_in sc_lv 1 signal 6 } 
	{ in2_V_offset sc_in sc_lv 31 signal 7 } 
	{ m_axi_in3_V_AWVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_AWREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_AWADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_in3_V_AWID sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_AWLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_in3_V_AWSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_in3_V_AWBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_in3_V_AWLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_in3_V_AWCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_AWPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_in3_V_AWQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_AWREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_AWUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_WVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_WREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_WDATA sc_out sc_lv 16 signal 8 } 
	{ m_axi_in3_V_WSTRB sc_out sc_lv 2 signal 8 } 
	{ m_axi_in3_V_WLAST sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_WID sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_WUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_ARVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_ARREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_ARADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_in3_V_ARID sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_ARLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_in3_V_ARSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_in3_V_ARBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_in3_V_ARLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_in3_V_ARCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_ARPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_in3_V_ARQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_ARREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_in3_V_ARUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_in3_V_RVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_RREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_RDATA sc_in sc_lv 16 signal 8 } 
	{ m_axi_in3_V_RLAST sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_RID sc_in sc_lv 1 signal 8 } 
	{ m_axi_in3_V_RUSER sc_in sc_lv 1 signal 8 } 
	{ m_axi_in3_V_RRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_in3_V_BVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_in3_V_BREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_in3_V_BRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_in3_V_BID sc_in sc_lv 1 signal 8 } 
	{ m_axi_in3_V_BUSER sc_in sc_lv 1 signal 8 } 
	{ in3_V_offset sc_in sc_lv 31 signal 9 } 
	{ m_axi_in4_V_AWVALID sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_AWREADY sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_AWADDR sc_out sc_lv 32 signal 10 } 
	{ m_axi_in4_V_AWID sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_AWLEN sc_out sc_lv 32 signal 10 } 
	{ m_axi_in4_V_AWSIZE sc_out sc_lv 3 signal 10 } 
	{ m_axi_in4_V_AWBURST sc_out sc_lv 2 signal 10 } 
	{ m_axi_in4_V_AWLOCK sc_out sc_lv 2 signal 10 } 
	{ m_axi_in4_V_AWCACHE sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_AWPROT sc_out sc_lv 3 signal 10 } 
	{ m_axi_in4_V_AWQOS sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_AWREGION sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_AWUSER sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_WVALID sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_WREADY sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_WDATA sc_out sc_lv 16 signal 10 } 
	{ m_axi_in4_V_WSTRB sc_out sc_lv 2 signal 10 } 
	{ m_axi_in4_V_WLAST sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_WID sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_WUSER sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_ARVALID sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_ARREADY sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_ARADDR sc_out sc_lv 32 signal 10 } 
	{ m_axi_in4_V_ARID sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_ARLEN sc_out sc_lv 32 signal 10 } 
	{ m_axi_in4_V_ARSIZE sc_out sc_lv 3 signal 10 } 
	{ m_axi_in4_V_ARBURST sc_out sc_lv 2 signal 10 } 
	{ m_axi_in4_V_ARLOCK sc_out sc_lv 2 signal 10 } 
	{ m_axi_in4_V_ARCACHE sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_ARPROT sc_out sc_lv 3 signal 10 } 
	{ m_axi_in4_V_ARQOS sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_ARREGION sc_out sc_lv 4 signal 10 } 
	{ m_axi_in4_V_ARUSER sc_out sc_lv 1 signal 10 } 
	{ m_axi_in4_V_RVALID sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_RREADY sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_RDATA sc_in sc_lv 16 signal 10 } 
	{ m_axi_in4_V_RLAST sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_RID sc_in sc_lv 1 signal 10 } 
	{ m_axi_in4_V_RUSER sc_in sc_lv 1 signal 10 } 
	{ m_axi_in4_V_RRESP sc_in sc_lv 2 signal 10 } 
	{ m_axi_in4_V_BVALID sc_in sc_logic 1 signal 10 } 
	{ m_axi_in4_V_BREADY sc_out sc_logic 1 signal 10 } 
	{ m_axi_in4_V_BRESP sc_in sc_lv 2 signal 10 } 
	{ m_axi_in4_V_BID sc_in sc_lv 1 signal 10 } 
	{ m_axi_in4_V_BUSER sc_in sc_lv 1 signal 10 } 
	{ in4_V_offset sc_in sc_lv 31 signal 11 } 
	{ n sc_in sc_lv 16 signal 12 } 
	{ fm_row sc_in sc_lv 16 signal 13 } 
	{ fm_col sc_in sc_lv 16 signal 14 } 
	{ fm_size sc_in sc_lv 16 signal 15 } 
	{ stride sc_in sc_lv 16 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fm_in_buff_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "we0" }} , 
 	{ "name": "fm_in_buff_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_0_V", "role": "d0" }} , 
 	{ "name": "fm_in_buff_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "we0" }} , 
 	{ "name": "fm_in_buff_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_1_V", "role": "d0" }} , 
 	{ "name": "fm_in_buff_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "we0" }} , 
 	{ "name": "fm_in_buff_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_2_V", "role": "d0" }} , 
 	{ "name": "fm_in_buff_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "we0" }} , 
 	{ "name": "fm_in_buff_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_3_V", "role": "d0" }} , 
 	{ "name": "m_axi_in1_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_in1_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_in1_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_in1_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "AWID" }} , 
 	{ "name": "m_axi_in1_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_in1_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in1_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_in1_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_in1_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_in1_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_in1_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in1_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_in1_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_in1_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_in1_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_in1_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_in1_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_in1_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in1_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_in1_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_in1_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_in1_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "WID" }} , 
 	{ "name": "m_axi_in1_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_in1_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_in1_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_in1_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_in1_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "ARID" }} , 
 	{ "name": "m_axi_in1_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_in1_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in1_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_in1_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_in1_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_in1_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_in1_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in1_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_in1_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_in1_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in1_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_in1_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_in1_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_in1_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_in1_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in1_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_in1_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_in1_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "RID" }} , 
 	{ "name": "m_axi_in1_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_in1_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_in1_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_in1_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_in1_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in1_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_in1_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "BID" }} , 
 	{ "name": "m_axi_in1_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in1_V", "role": "BUSER" }} , 
 	{ "name": "in1_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "in1_V_offset", "role": "default" }} , 
 	{ "name": "m_axi_in2_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_in2_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_in2_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in2_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_in2_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "AWID" }} , 
 	{ "name": "m_axi_in2_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in2_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_in2_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in2_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_in2_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_in2_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_in2_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_in2_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in2_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_in2_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_in2_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_in2_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_in2_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_in2_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_in2_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in2_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_in2_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_in2_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_in2_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "WID" }} , 
 	{ "name": "m_axi_in2_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_in2_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_in2_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_in2_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in2_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_in2_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "ARID" }} , 
 	{ "name": "m_axi_in2_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in2_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_in2_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in2_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_in2_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_in2_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_in2_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_in2_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in2_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_in2_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_in2_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in2_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_in2_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_in2_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_in2_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_in2_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in2_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_in2_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_in2_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "RID" }} , 
 	{ "name": "m_axi_in2_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_in2_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_in2_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_in2_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_in2_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in2_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_in2_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "BID" }} , 
 	{ "name": "m_axi_in2_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in2_V", "role": "BUSER" }} , 
 	{ "name": "in2_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "in2_V_offset", "role": "default" }} , 
 	{ "name": "m_axi_in3_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_in3_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_in3_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in3_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_in3_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "AWID" }} , 
 	{ "name": "m_axi_in3_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in3_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_in3_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in3_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_in3_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_in3_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_in3_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_in3_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in3_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_in3_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_in3_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_in3_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_in3_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_in3_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_in3_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in3_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_in3_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_in3_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_in3_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "WID" }} , 
 	{ "name": "m_axi_in3_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_in3_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_in3_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_in3_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in3_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_in3_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "ARID" }} , 
 	{ "name": "m_axi_in3_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in3_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_in3_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in3_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_in3_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_in3_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_in3_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_in3_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in3_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_in3_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_in3_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in3_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_in3_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_in3_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_in3_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_in3_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in3_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_in3_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_in3_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "RID" }} , 
 	{ "name": "m_axi_in3_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_in3_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_in3_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_in3_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_in3_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in3_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_in3_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "BID" }} , 
 	{ "name": "m_axi_in3_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in3_V", "role": "BUSER" }} , 
 	{ "name": "in3_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "in3_V_offset", "role": "default" }} , 
 	{ "name": "m_axi_in4_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_in4_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_in4_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in4_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_in4_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "AWID" }} , 
 	{ "name": "m_axi_in4_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in4_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_in4_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in4_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_in4_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_in4_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_in4_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_in4_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in4_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_in4_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_in4_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_in4_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_in4_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_in4_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_in4_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in4_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_in4_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_in4_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_in4_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "WID" }} , 
 	{ "name": "m_axi_in4_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_in4_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_in4_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_in4_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in4_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_in4_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "ARID" }} , 
 	{ "name": "m_axi_in4_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in4_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_in4_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in4_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_in4_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_in4_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_in4_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_in4_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in4_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_in4_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_in4_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in4_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_in4_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_in4_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_in4_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_in4_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in4_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_in4_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_in4_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "RID" }} , 
 	{ "name": "m_axi_in4_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_in4_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_in4_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_in4_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_in4_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "in4_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_in4_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "BID" }} , 
 	{ "name": "m_axi_in4_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in4_V", "role": "BUSER" }} , 
 	{ "name": "in4_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "in4_V_offset", "role": "default" }} , 
 	{ "name": "n", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "n", "role": "default" }} , 
 	{ "name": "fm_row", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_row", "role": "default" }} , 
 	{ "name": "fm_col", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_col", "role": "default" }} , 
 	{ "name": "fm_size", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_size", "role": "default" }} , 
 	{ "name": "stride", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "stride", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10"],
		"CDFG" : "load_input",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "252", "EstimateLatencyMax" : "758",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fm_in_buff_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_in_buff_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_in_buff_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "fm_in_buff_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "in1_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in1_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "in1_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "in1_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in2_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in2_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "in2_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "in2_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in3_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in3_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "in3_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "in3_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in4_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in4_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "in4_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "in4_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "n", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_col", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_size", "Type" : "None", "Direction" : "I"},
			{"Name" : "stride", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_urem_10ns_6nThq_U368", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_16ns_5nsUhA_U369", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_urem_8ns_5nsVhK_U370", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_16ns_4nsWhU_U371", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16nstde_U372", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_17s_Xh4_U373", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_1Yie_U374", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_1fYi_U375", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_5Zio_U376", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_40iy_U377", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	load_input {
		fm_in_buff_0_V {Type O LastRead -1 FirstWrite 26}
		fm_in_buff_1_V {Type O LastRead -1 FirstWrite 26}
		fm_in_buff_2_V {Type O LastRead -1 FirstWrite 26}
		fm_in_buff_3_V {Type O LastRead -1 FirstWrite 26}
		in1_V {Type I LastRead 28 FirstWrite -1}
		in1_V_offset {Type I LastRead 5 FirstWrite -1}
		in2_V {Type I LastRead 28 FirstWrite -1}
		in2_V_offset {Type I LastRead 5 FirstWrite -1}
		in3_V {Type I LastRead 28 FirstWrite -1}
		in3_V_offset {Type I LastRead 5 FirstWrite -1}
		in4_V {Type I LastRead 28 FirstWrite -1}
		in4_V_offset {Type I LastRead 5 FirstWrite -1}
		n {Type I LastRead 2 FirstWrite -1}
		fm_row {Type I LastRead 0 FirstWrite -1}
		fm_col {Type I LastRead 4 FirstWrite -1}
		fm_size {Type I LastRead 0 FirstWrite -1}
		stride {Type I LastRead 5 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "252", "Max" : "758"}
	, {"Name" : "Interval", "Min" : "252", "Max" : "758"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	fm_in_buff_0_V { ap_memory {  { fm_in_buff_0_V_address0 mem_address 1 10 }  { fm_in_buff_0_V_ce0 mem_ce 1 1 }  { fm_in_buff_0_V_we0 mem_we 1 1 }  { fm_in_buff_0_V_d0 mem_din 1 16 } } }
	fm_in_buff_1_V { ap_memory {  { fm_in_buff_1_V_address0 mem_address 1 10 }  { fm_in_buff_1_V_ce0 mem_ce 1 1 }  { fm_in_buff_1_V_we0 mem_we 1 1 }  { fm_in_buff_1_V_d0 mem_din 1 16 } } }
	fm_in_buff_2_V { ap_memory {  { fm_in_buff_2_V_address0 mem_address 1 10 }  { fm_in_buff_2_V_ce0 mem_ce 1 1 }  { fm_in_buff_2_V_we0 mem_we 1 1 }  { fm_in_buff_2_V_d0 mem_din 1 16 } } }
	fm_in_buff_3_V { ap_memory {  { fm_in_buff_3_V_address0 mem_address 1 10 }  { fm_in_buff_3_V_ce0 mem_ce 1 1 }  { fm_in_buff_3_V_we0 mem_we 1 1 }  { fm_in_buff_3_V_d0 mem_din 1 16 } } }
	in1_V { m_axi {  { m_axi_in1_V_AWVALID VALID 1 1 }  { m_axi_in1_V_AWREADY READY 0 1 }  { m_axi_in1_V_AWADDR ADDR 1 32 }  { m_axi_in1_V_AWID ID 1 1 }  { m_axi_in1_V_AWLEN LEN 1 32 }  { m_axi_in1_V_AWSIZE SIZE 1 3 }  { m_axi_in1_V_AWBURST BURST 1 2 }  { m_axi_in1_V_AWLOCK LOCK 1 2 }  { m_axi_in1_V_AWCACHE CACHE 1 4 }  { m_axi_in1_V_AWPROT PROT 1 3 }  { m_axi_in1_V_AWQOS QOS 1 4 }  { m_axi_in1_V_AWREGION REGION 1 4 }  { m_axi_in1_V_AWUSER USER 1 1 }  { m_axi_in1_V_WVALID VALID 1 1 }  { m_axi_in1_V_WREADY READY 0 1 }  { m_axi_in1_V_WDATA DATA 1 16 }  { m_axi_in1_V_WSTRB STRB 1 2 }  { m_axi_in1_V_WLAST LAST 1 1 }  { m_axi_in1_V_WID ID 1 1 }  { m_axi_in1_V_WUSER USER 1 1 }  { m_axi_in1_V_ARVALID VALID 1 1 }  { m_axi_in1_V_ARREADY READY 0 1 }  { m_axi_in1_V_ARADDR ADDR 1 32 }  { m_axi_in1_V_ARID ID 1 1 }  { m_axi_in1_V_ARLEN LEN 1 32 }  { m_axi_in1_V_ARSIZE SIZE 1 3 }  { m_axi_in1_V_ARBURST BURST 1 2 }  { m_axi_in1_V_ARLOCK LOCK 1 2 }  { m_axi_in1_V_ARCACHE CACHE 1 4 }  { m_axi_in1_V_ARPROT PROT 1 3 }  { m_axi_in1_V_ARQOS QOS 1 4 }  { m_axi_in1_V_ARREGION REGION 1 4 }  { m_axi_in1_V_ARUSER USER 1 1 }  { m_axi_in1_V_RVALID VALID 0 1 }  { m_axi_in1_V_RREADY READY 1 1 }  { m_axi_in1_V_RDATA DATA 0 16 }  { m_axi_in1_V_RLAST LAST 0 1 }  { m_axi_in1_V_RID ID 0 1 }  { m_axi_in1_V_RUSER USER 0 1 }  { m_axi_in1_V_RRESP RESP 0 2 }  { m_axi_in1_V_BVALID VALID 0 1 }  { m_axi_in1_V_BREADY READY 1 1 }  { m_axi_in1_V_BRESP RESP 0 2 }  { m_axi_in1_V_BID ID 0 1 }  { m_axi_in1_V_BUSER USER 0 1 } } }
	in1_V_offset { ap_none {  { in1_V_offset in_data 0 31 } } }
	in2_V { m_axi {  { m_axi_in2_V_AWVALID VALID 1 1 }  { m_axi_in2_V_AWREADY READY 0 1 }  { m_axi_in2_V_AWADDR ADDR 1 32 }  { m_axi_in2_V_AWID ID 1 1 }  { m_axi_in2_V_AWLEN LEN 1 32 }  { m_axi_in2_V_AWSIZE SIZE 1 3 }  { m_axi_in2_V_AWBURST BURST 1 2 }  { m_axi_in2_V_AWLOCK LOCK 1 2 }  { m_axi_in2_V_AWCACHE CACHE 1 4 }  { m_axi_in2_V_AWPROT PROT 1 3 }  { m_axi_in2_V_AWQOS QOS 1 4 }  { m_axi_in2_V_AWREGION REGION 1 4 }  { m_axi_in2_V_AWUSER USER 1 1 }  { m_axi_in2_V_WVALID VALID 1 1 }  { m_axi_in2_V_WREADY READY 0 1 }  { m_axi_in2_V_WDATA DATA 1 16 }  { m_axi_in2_V_WSTRB STRB 1 2 }  { m_axi_in2_V_WLAST LAST 1 1 }  { m_axi_in2_V_WID ID 1 1 }  { m_axi_in2_V_WUSER USER 1 1 }  { m_axi_in2_V_ARVALID VALID 1 1 }  { m_axi_in2_V_ARREADY READY 0 1 }  { m_axi_in2_V_ARADDR ADDR 1 32 }  { m_axi_in2_V_ARID ID 1 1 }  { m_axi_in2_V_ARLEN LEN 1 32 }  { m_axi_in2_V_ARSIZE SIZE 1 3 }  { m_axi_in2_V_ARBURST BURST 1 2 }  { m_axi_in2_V_ARLOCK LOCK 1 2 }  { m_axi_in2_V_ARCACHE CACHE 1 4 }  { m_axi_in2_V_ARPROT PROT 1 3 }  { m_axi_in2_V_ARQOS QOS 1 4 }  { m_axi_in2_V_ARREGION REGION 1 4 }  { m_axi_in2_V_ARUSER USER 1 1 }  { m_axi_in2_V_RVALID VALID 0 1 }  { m_axi_in2_V_RREADY READY 1 1 }  { m_axi_in2_V_RDATA DATA 0 16 }  { m_axi_in2_V_RLAST LAST 0 1 }  { m_axi_in2_V_RID ID 0 1 }  { m_axi_in2_V_RUSER USER 0 1 }  { m_axi_in2_V_RRESP RESP 0 2 }  { m_axi_in2_V_BVALID VALID 0 1 }  { m_axi_in2_V_BREADY READY 1 1 }  { m_axi_in2_V_BRESP RESP 0 2 }  { m_axi_in2_V_BID ID 0 1 }  { m_axi_in2_V_BUSER USER 0 1 } } }
	in2_V_offset { ap_none {  { in2_V_offset in_data 0 31 } } }
	in3_V { m_axi {  { m_axi_in3_V_AWVALID VALID 1 1 }  { m_axi_in3_V_AWREADY READY 0 1 }  { m_axi_in3_V_AWADDR ADDR 1 32 }  { m_axi_in3_V_AWID ID 1 1 }  { m_axi_in3_V_AWLEN LEN 1 32 }  { m_axi_in3_V_AWSIZE SIZE 1 3 }  { m_axi_in3_V_AWBURST BURST 1 2 }  { m_axi_in3_V_AWLOCK LOCK 1 2 }  { m_axi_in3_V_AWCACHE CACHE 1 4 }  { m_axi_in3_V_AWPROT PROT 1 3 }  { m_axi_in3_V_AWQOS QOS 1 4 }  { m_axi_in3_V_AWREGION REGION 1 4 }  { m_axi_in3_V_AWUSER USER 1 1 }  { m_axi_in3_V_WVALID VALID 1 1 }  { m_axi_in3_V_WREADY READY 0 1 }  { m_axi_in3_V_WDATA DATA 1 16 }  { m_axi_in3_V_WSTRB STRB 1 2 }  { m_axi_in3_V_WLAST LAST 1 1 }  { m_axi_in3_V_WID ID 1 1 }  { m_axi_in3_V_WUSER USER 1 1 }  { m_axi_in3_V_ARVALID VALID 1 1 }  { m_axi_in3_V_ARREADY READY 0 1 }  { m_axi_in3_V_ARADDR ADDR 1 32 }  { m_axi_in3_V_ARID ID 1 1 }  { m_axi_in3_V_ARLEN LEN 1 32 }  { m_axi_in3_V_ARSIZE SIZE 1 3 }  { m_axi_in3_V_ARBURST BURST 1 2 }  { m_axi_in3_V_ARLOCK LOCK 1 2 }  { m_axi_in3_V_ARCACHE CACHE 1 4 }  { m_axi_in3_V_ARPROT PROT 1 3 }  { m_axi_in3_V_ARQOS QOS 1 4 }  { m_axi_in3_V_ARREGION REGION 1 4 }  { m_axi_in3_V_ARUSER USER 1 1 }  { m_axi_in3_V_RVALID VALID 0 1 }  { m_axi_in3_V_RREADY READY 1 1 }  { m_axi_in3_V_RDATA DATA 0 16 }  { m_axi_in3_V_RLAST LAST 0 1 }  { m_axi_in3_V_RID ID 0 1 }  { m_axi_in3_V_RUSER USER 0 1 }  { m_axi_in3_V_RRESP RESP 0 2 }  { m_axi_in3_V_BVALID VALID 0 1 }  { m_axi_in3_V_BREADY READY 1 1 }  { m_axi_in3_V_BRESP RESP 0 2 }  { m_axi_in3_V_BID ID 0 1 }  { m_axi_in3_V_BUSER USER 0 1 } } }
	in3_V_offset { ap_none {  { in3_V_offset in_data 0 31 } } }
	in4_V { m_axi {  { m_axi_in4_V_AWVALID VALID 1 1 }  { m_axi_in4_V_AWREADY READY 0 1 }  { m_axi_in4_V_AWADDR ADDR 1 32 }  { m_axi_in4_V_AWID ID 1 1 }  { m_axi_in4_V_AWLEN LEN 1 32 }  { m_axi_in4_V_AWSIZE SIZE 1 3 }  { m_axi_in4_V_AWBURST BURST 1 2 }  { m_axi_in4_V_AWLOCK LOCK 1 2 }  { m_axi_in4_V_AWCACHE CACHE 1 4 }  { m_axi_in4_V_AWPROT PROT 1 3 }  { m_axi_in4_V_AWQOS QOS 1 4 }  { m_axi_in4_V_AWREGION REGION 1 4 }  { m_axi_in4_V_AWUSER USER 1 1 }  { m_axi_in4_V_WVALID VALID 1 1 }  { m_axi_in4_V_WREADY READY 0 1 }  { m_axi_in4_V_WDATA DATA 1 16 }  { m_axi_in4_V_WSTRB STRB 1 2 }  { m_axi_in4_V_WLAST LAST 1 1 }  { m_axi_in4_V_WID ID 1 1 }  { m_axi_in4_V_WUSER USER 1 1 }  { m_axi_in4_V_ARVALID VALID 1 1 }  { m_axi_in4_V_ARREADY READY 0 1 }  { m_axi_in4_V_ARADDR ADDR 1 32 }  { m_axi_in4_V_ARID ID 1 1 }  { m_axi_in4_V_ARLEN LEN 1 32 }  { m_axi_in4_V_ARSIZE SIZE 1 3 }  { m_axi_in4_V_ARBURST BURST 1 2 }  { m_axi_in4_V_ARLOCK LOCK 1 2 }  { m_axi_in4_V_ARCACHE CACHE 1 4 }  { m_axi_in4_V_ARPROT PROT 1 3 }  { m_axi_in4_V_ARQOS QOS 1 4 }  { m_axi_in4_V_ARREGION REGION 1 4 }  { m_axi_in4_V_ARUSER USER 1 1 }  { m_axi_in4_V_RVALID VALID 0 1 }  { m_axi_in4_V_RREADY READY 1 1 }  { m_axi_in4_V_RDATA DATA 0 16 }  { m_axi_in4_V_RLAST LAST 0 1 }  { m_axi_in4_V_RID ID 0 1 }  { m_axi_in4_V_RUSER USER 0 1 }  { m_axi_in4_V_RRESP RESP 0 2 }  { m_axi_in4_V_BVALID VALID 0 1 }  { m_axi_in4_V_BREADY READY 1 1 }  { m_axi_in4_V_BRESP RESP 0 2 }  { m_axi_in4_V_BID ID 0 1 }  { m_axi_in4_V_BUSER USER 0 1 } } }
	in4_V_offset { ap_none {  { in4_V_offset in_data 0 31 } } }
	n { ap_none {  { n in_data 0 16 } } }
	fm_row { ap_none {  { fm_row in_data 0 16 } } }
	fm_col { ap_none {  { fm_col in_data 0 16 } } }
	fm_size { ap_none {  { fm_size in_data 0 16 } } }
	stride { ap_none {  { stride in_data 0 16 } } }
}
