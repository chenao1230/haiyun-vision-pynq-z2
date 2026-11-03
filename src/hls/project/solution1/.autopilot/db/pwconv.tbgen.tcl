set moduleName pwconv
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
set C_modelName {pwconv}
set C_modelType { void 0 }
set C_modelArgList {
	{ in1_V int 16 regular {axi_master 2}  }
	{ in1_V_offset int 31 regular  }
	{ in2_V int 16 regular {axi_master 0}  }
	{ in2_V_offset int 31 regular  }
	{ in3_V int 16 regular {axi_master 0}  }
	{ in3_V_offset int 31 regular  }
	{ in4_V int 16 regular {axi_master 0}  }
	{ in4_V_offset int 31 regular  }
	{ weight_V int 16 regular {axi_master 0}  }
	{ weight_V_offset int 31 regular  }
	{ bias_V_offset int 31 regular  }
	{ out_V_offset int 31 regular  }
	{ N int 32 regular  }
	{ M int 32 regular  }
	{ SIZE int 32 regular  }
	{ ACT int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in1_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "in1_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in2_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in2_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in3_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in3_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "in4_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in4_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "axi_master", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "out_V_offset", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "N", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "M", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "SIZE", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ACT", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 242
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_in1_V_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_in1_V_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_in1_V_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_in1_V_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_in1_V_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_in1_V_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_in1_V_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_WDATA sc_out sc_lv 16 signal 0 } 
	{ m_axi_in1_V_WSTRB sc_out sc_lv 2 signal 0 } 
	{ m_axi_in1_V_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_in1_V_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_in1_V_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_in1_V_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_in1_V_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_in1_V_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_in1_V_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_in1_V_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_in1_V_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_RDATA sc_in sc_lv 16 signal 0 } 
	{ m_axi_in1_V_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_in1_V_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_in1_V_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_in1_V_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_in1_V_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_in1_V_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_in1_V_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_in1_V_BUSER sc_in sc_lv 1 signal 0 } 
	{ in1_V_offset sc_in sc_lv 31 signal 1 } 
	{ m_axi_in2_V_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_in2_V_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_AWLEN sc_out sc_lv 32 signal 2 } 
	{ m_axi_in2_V_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_in2_V_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_in2_V_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_in2_V_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_in2_V_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_WDATA sc_out sc_lv 16 signal 2 } 
	{ m_axi_in2_V_WSTRB sc_out sc_lv 2 signal 2 } 
	{ m_axi_in2_V_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_in2_V_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_ARLEN sc_out sc_lv 32 signal 2 } 
	{ m_axi_in2_V_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_in2_V_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_in2_V_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_in2_V_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_in2_V_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_in2_V_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_in2_V_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_RDATA sc_in sc_lv 16 signal 2 } 
	{ m_axi_in2_V_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_in2_V_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_in2_V_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_in2_V_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_in2_V_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_in2_V_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_in2_V_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_in2_V_BUSER sc_in sc_lv 1 signal 2 } 
	{ in2_V_offset sc_in sc_lv 31 signal 3 } 
	{ m_axi_in3_V_AWVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_AWREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_AWADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_in3_V_AWID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_AWLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_in3_V_AWSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_in3_V_AWBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_in3_V_AWLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_in3_V_AWCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_AWPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_in3_V_AWQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_AWREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_AWUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_WVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_WREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_WDATA sc_out sc_lv 16 signal 4 } 
	{ m_axi_in3_V_WSTRB sc_out sc_lv 2 signal 4 } 
	{ m_axi_in3_V_WLAST sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_WID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_WUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_ARVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_ARREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_ARADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_in3_V_ARID sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_ARLEN sc_out sc_lv 32 signal 4 } 
	{ m_axi_in3_V_ARSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_in3_V_ARBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_in3_V_ARLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_in3_V_ARCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_ARPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_in3_V_ARQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_ARREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_in3_V_ARUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_in3_V_RVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_RREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_RDATA sc_in sc_lv 16 signal 4 } 
	{ m_axi_in3_V_RLAST sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_RID sc_in sc_lv 1 signal 4 } 
	{ m_axi_in3_V_RUSER sc_in sc_lv 1 signal 4 } 
	{ m_axi_in3_V_RRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_in3_V_BVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_in3_V_BREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_in3_V_BRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_in3_V_BID sc_in sc_lv 1 signal 4 } 
	{ m_axi_in3_V_BUSER sc_in sc_lv 1 signal 4 } 
	{ in3_V_offset sc_in sc_lv 31 signal 5 } 
	{ m_axi_in4_V_AWVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_AWREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_AWADDR sc_out sc_lv 32 signal 6 } 
	{ m_axi_in4_V_AWID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_AWLEN sc_out sc_lv 32 signal 6 } 
	{ m_axi_in4_V_AWSIZE sc_out sc_lv 3 signal 6 } 
	{ m_axi_in4_V_AWBURST sc_out sc_lv 2 signal 6 } 
	{ m_axi_in4_V_AWLOCK sc_out sc_lv 2 signal 6 } 
	{ m_axi_in4_V_AWCACHE sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_AWPROT sc_out sc_lv 3 signal 6 } 
	{ m_axi_in4_V_AWQOS sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_AWREGION sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_AWUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_WVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_WREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_WDATA sc_out sc_lv 16 signal 6 } 
	{ m_axi_in4_V_WSTRB sc_out sc_lv 2 signal 6 } 
	{ m_axi_in4_V_WLAST sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_WID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_WUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_ARVALID sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_ARREADY sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_ARADDR sc_out sc_lv 32 signal 6 } 
	{ m_axi_in4_V_ARID sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_ARLEN sc_out sc_lv 32 signal 6 } 
	{ m_axi_in4_V_ARSIZE sc_out sc_lv 3 signal 6 } 
	{ m_axi_in4_V_ARBURST sc_out sc_lv 2 signal 6 } 
	{ m_axi_in4_V_ARLOCK sc_out sc_lv 2 signal 6 } 
	{ m_axi_in4_V_ARCACHE sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_ARPROT sc_out sc_lv 3 signal 6 } 
	{ m_axi_in4_V_ARQOS sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_ARREGION sc_out sc_lv 4 signal 6 } 
	{ m_axi_in4_V_ARUSER sc_out sc_lv 1 signal 6 } 
	{ m_axi_in4_V_RVALID sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_RREADY sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_RDATA sc_in sc_lv 16 signal 6 } 
	{ m_axi_in4_V_RLAST sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_RID sc_in sc_lv 1 signal 6 } 
	{ m_axi_in4_V_RUSER sc_in sc_lv 1 signal 6 } 
	{ m_axi_in4_V_RRESP sc_in sc_lv 2 signal 6 } 
	{ m_axi_in4_V_BVALID sc_in sc_logic 1 signal 6 } 
	{ m_axi_in4_V_BREADY sc_out sc_logic 1 signal 6 } 
	{ m_axi_in4_V_BRESP sc_in sc_lv 2 signal 6 } 
	{ m_axi_in4_V_BID sc_in sc_lv 1 signal 6 } 
	{ m_axi_in4_V_BUSER sc_in sc_lv 1 signal 6 } 
	{ in4_V_offset sc_in sc_lv 31 signal 7 } 
	{ m_axi_weight_V_AWVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_AWREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_AWADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_weight_V_AWID sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_AWLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_weight_V_AWSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_weight_V_AWBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_weight_V_AWLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_weight_V_AWCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_AWPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_weight_V_AWQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_AWREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_AWUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_WVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_WREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_WDATA sc_out sc_lv 16 signal 8 } 
	{ m_axi_weight_V_WSTRB sc_out sc_lv 2 signal 8 } 
	{ m_axi_weight_V_WLAST sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_WID sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_WUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_ARVALID sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_ARREADY sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_ARADDR sc_out sc_lv 32 signal 8 } 
	{ m_axi_weight_V_ARID sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_ARLEN sc_out sc_lv 32 signal 8 } 
	{ m_axi_weight_V_ARSIZE sc_out sc_lv 3 signal 8 } 
	{ m_axi_weight_V_ARBURST sc_out sc_lv 2 signal 8 } 
	{ m_axi_weight_V_ARLOCK sc_out sc_lv 2 signal 8 } 
	{ m_axi_weight_V_ARCACHE sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_ARPROT sc_out sc_lv 3 signal 8 } 
	{ m_axi_weight_V_ARQOS sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_ARREGION sc_out sc_lv 4 signal 8 } 
	{ m_axi_weight_V_ARUSER sc_out sc_lv 1 signal 8 } 
	{ m_axi_weight_V_RVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_RREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_RDATA sc_in sc_lv 16 signal 8 } 
	{ m_axi_weight_V_RLAST sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_RID sc_in sc_lv 1 signal 8 } 
	{ m_axi_weight_V_RUSER sc_in sc_lv 1 signal 8 } 
	{ m_axi_weight_V_RRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_weight_V_BVALID sc_in sc_logic 1 signal 8 } 
	{ m_axi_weight_V_BREADY sc_out sc_logic 1 signal 8 } 
	{ m_axi_weight_V_BRESP sc_in sc_lv 2 signal 8 } 
	{ m_axi_weight_V_BID sc_in sc_lv 1 signal 8 } 
	{ m_axi_weight_V_BUSER sc_in sc_lv 1 signal 8 } 
	{ weight_V_offset sc_in sc_lv 31 signal 9 } 
	{ bias_V_offset sc_in sc_lv 31 signal 10 } 
	{ out_V_offset sc_in sc_lv 31 signal 11 } 
	{ N sc_in sc_lv 32 signal 12 } 
	{ M sc_in sc_lv 32 signal 13 } 
	{ SIZE sc_in sc_lv 32 signal 14 } 
	{ ACT sc_in sc_lv 32 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
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
 	{ "name": "bias_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "bias_V_offset", "role": "default" }} , 
 	{ "name": "out_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "out_V_offset", "role": "default" }} , 
 	{ "name": "N", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N", "role": "default" }} , 
 	{ "name": "M", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "M", "role": "default" }} , 
 	{ "name": "SIZE", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "SIZE", "role": "default" }} , 
 	{ "name": "ACT", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ACT", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "73", "81", "82"],
		"CDFG" : "pwconv",
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
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_1_fu_469"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_1_fu_469"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_1_fu_469"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_output_1_fu_511"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_output_1_fu_511"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_output_1_fu_511"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_store_output_1_fu_511"}],
		"Port" : [
			{"Name" : "in1_V", "Type" : "MAXI", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_store_output_1_fu_511", "Port" : "fm_out_V"},
					{"ID" : "25", "SubInstance" : "grp_compute_output_1_fu_469", "Port" : "in1_V"}]},
			{"Name" : "in1_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in2_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_compute_output_1_fu_469", "Port" : "in2_V"}]},
			{"Name" : "in2_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in3_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_compute_output_1_fu_469", "Port" : "in3_V"}]},
			{"Name" : "in3_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in4_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_compute_output_1_fu_469", "Port" : "in4_V"}]},
			{"Name" : "in4_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weight_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weight_V_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_compute_output_1_fu_469", "Port" : "weight_V"}]},
			{"Name" : "weight_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "N", "Type" : "None", "Direction" : "I"},
			{"Name" : "M", "Type" : "None", "Direction" : "I"},
			{"Name" : "SIZE", "Type" : "None", "Direction" : "I"},
			{"Name" : "ACT", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_0_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_1_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_2_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_3_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_4_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_5_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_6_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_buff_7_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_0_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_1_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_2_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_3_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_4_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_5_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_6_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out1_7_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_0_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_1_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_2_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_3_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_4_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_5_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_6_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fm_out2_7_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469", "Parent" : "0", "Child" : ["26", "27", "28", "29", "30", "31", "32", "33", "34", "67", "69", "72"],
		"CDFG" : "compute_output_1",
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
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_1_fu_513"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_1_fu_513"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_1_fu_513"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_1_fu_513"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_1_fu_569"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_1_fu_569"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_weight_1_fu_569"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_1_fu_650"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_1_fu_650"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_input_1_fu_650"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_bias_1_fu_685"}],
		"Port" : [
			{"Name" : "fm_out_buff_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_0_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_0_V"}]},
			{"Name" : "fm_out_buff_1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_1_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_1_V"}]},
			{"Name" : "fm_out_buff_2_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_2_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_2_V"}]},
			{"Name" : "fm_out_buff_3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_3_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_3_V"}]},
			{"Name" : "fm_out_buff_4_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_4_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_4_V"}]},
			{"Name" : "fm_out_buff_5_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_5_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_5_V"}]},
			{"Name" : "fm_out_buff_6_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_6_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_6_V"}]},
			{"Name" : "fm_out_buff_7_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "fm_out_buff_7_V"},
					{"ID" : "34", "SubInstance" : "grp_compute_1_fu_513", "Port" : "fm_out_buff_7_V"}]},
			{"Name" : "bias_buff_0_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_0_V"}]},
			{"Name" : "bias_buff_1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_1_V"}]},
			{"Name" : "bias_buff_2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_2_V"}]},
			{"Name" : "bias_buff_3_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_3_V"}]},
			{"Name" : "bias_buff_4_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_4_V"}]},
			{"Name" : "bias_buff_5_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_5_V"}]},
			{"Name" : "bias_buff_6_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_6_V"}]},
			{"Name" : "bias_buff_7_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_load_bias_1_fu_685", "Port" : "bias_buff_7_V"}]},
			{"Name" : "in1_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_load_input_1_fu_650", "Port" : "in1_V"}]},
			{"Name" : "in1_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in2_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_load_input_1_fu_650", "Port" : "in2_V"}]},
			{"Name" : "in2_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in3_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_load_input_1_fu_650", "Port" : "in3_V"}]},
			{"Name" : "in3_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "in4_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_load_input_1_fu_650", "Port" : "in4_V"}]},
			{"Name" : "in4_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_load_weight_1_fu_569", "Port" : "weight_V"}]},
			{"Name" : "weight_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_size", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "ch_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "basePixAddr", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff1_0_V_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff1_1_V_U", "Parent" : "25"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff1_2_V_U", "Parent" : "25"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff1_3_V_U", "Parent" : "25"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff2_0_V_U", "Parent" : "25"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff2_1_V_U", "Parent" : "25"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff2_2_V_U", "Parent" : "25"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.fm_in_buff2_3_V_U", "Parent" : "25"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513", "Parent" : "25", "Child" : ["35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66"],
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
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U144", "Parent" : "34"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U145", "Parent" : "34"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U146", "Parent" : "34"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U147", "Parent" : "34"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U148", "Parent" : "34"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U149", "Parent" : "34"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U150", "Parent" : "34"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U151", "Parent" : "34"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U152", "Parent" : "34"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U153", "Parent" : "34"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U154", "Parent" : "34"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U155", "Parent" : "34"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U156", "Parent" : "34"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U157", "Parent" : "34"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U158", "Parent" : "34"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U159", "Parent" : "34"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U160", "Parent" : "34"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U161", "Parent" : "34"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U162", "Parent" : "34"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U163", "Parent" : "34"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U164", "Parent" : "34"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U165", "Parent" : "34"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U166", "Parent" : "34"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U167", "Parent" : "34"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U168", "Parent" : "34"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U169", "Parent" : "34"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U170", "Parent" : "34"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U171", "Parent" : "34"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U172", "Parent" : "34"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U173", "Parent" : "34"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U174", "Parent" : "34"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_compute_1_fu_513.conv_mul_mul_16s_wdI_U175", "Parent" : "34"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_weight_1_fu_569", "Parent" : "25", "Child" : ["68"],
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
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_weight_1_fu_569.conv_am_addmul_16vdy_U104", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_input_1_fu_650", "Parent" : "25", "Child" : ["70", "71"],
		"CDFG" : "load_input_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "183", "EstimateLatencyMax" : "183",
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
			{"Name" : "basePixAddr", "Type" : "None", "Direction" : "I"},
			{"Name" : "fm_size", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_input_1_fu_650.conv_mul_mul_16nstde_U85", "Parent" : "69"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_input_1_fu_650.conv_mac_muladd_1udo_U86", "Parent" : "69"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_output_1_fu_469.grp_load_bias_1_fu_685", "Parent" : "25",
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
			{"Name" : "m", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511", "Parent" : "0", "Child" : ["74", "75", "76", "77", "78", "79", "80"],
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
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_urem_24ns_9nFfa_U253", "Parent" : "73"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_urem_24ns_9nFfa_U254", "Parent" : "73"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_mux_83_16_1_1_U255", "Parent" : "73"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_mul_mul_16nstde_U256", "Parent" : "73"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_mul_mul_16nsGfk_U257", "Parent" : "73"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_mac_muladd_1Hfu_U258", "Parent" : "73"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_store_output_1_fu_511.conv_mul_mul_7ns_IfE_U259", "Parent" : "73"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_32s_32s_sc4_U280", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mul_mul_16nsRg6_U281", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pwconv {
		in1_V {Type IO LastRead 34 FirstWrite -1}
		in1_V_offset {Type I LastRead 6 FirstWrite -1}
		in2_V {Type I LastRead 13 FirstWrite -1}
		in2_V_offset {Type I LastRead 6 FirstWrite -1}
		in3_V {Type I LastRead 13 FirstWrite -1}
		in3_V_offset {Type I LastRead 6 FirstWrite -1}
		in4_V {Type I LastRead 13 FirstWrite -1}
		in4_V_offset {Type I LastRead 6 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		weight_V_offset {Type I LastRead 6 FirstWrite -1}
		bias_V_offset {Type I LastRead 0 FirstWrite -1}
		out_V_offset {Type I LastRead 6 FirstWrite -1}
		N {Type I LastRead 6 FirstWrite -1}
		M {Type I LastRead 0 FirstWrite -1}
		SIZE {Type I LastRead 6 FirstWrite -1}
		ACT {Type I LastRead 6 FirstWrite -1}}
	compute_output_1 {
		fm_out_buff_0_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_1_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_2_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_3_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_4_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_5_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_6_V {Type IO LastRead 6 FirstWrite 3}
		fm_out_buff_7_V {Type IO LastRead 6 FirstWrite 3}
		bias_buff_0_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_1_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_2_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_3_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_4_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_5_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_6_V {Type I LastRead 1 FirstWrite -1}
		bias_buff_7_V {Type I LastRead 1 FirstWrite -1}
		in1_V {Type I LastRead 13 FirstWrite -1}
		in1_V_offset {Type I LastRead 0 FirstWrite -1}
		in2_V {Type I LastRead 13 FirstWrite -1}
		in2_V_offset {Type I LastRead 0 FirstWrite -1}
		in3_V {Type I LastRead 13 FirstWrite -1}
		in3_V_offset {Type I LastRead 0 FirstWrite -1}
		in4_V {Type I LastRead 13 FirstWrite -1}
		in4_V_offset {Type I LastRead 0 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		weight_V_offset {Type I LastRead 0 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}
		fm_size {Type I LastRead 0 FirstWrite -1}
		ch_in {Type I LastRead 0 FirstWrite -1}
		ch_out {Type I LastRead 0 FirstWrite -1}
		basePixAddr {Type I LastRead 0 FirstWrite -1}}
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
		wt_buff_7_3_V_read {Type I LastRead 0 FirstWrite -1}}
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
		ch_out {Type I LastRead 0 FirstWrite -1}}
	load_input_1 {
		fm_in_buff_0_V {Type O LastRead -1 FirstWrite 14}
		fm_in_buff_1_V {Type O LastRead -1 FirstWrite 14}
		fm_in_buff_2_V {Type O LastRead -1 FirstWrite 14}
		fm_in_buff_3_V {Type O LastRead -1 FirstWrite 14}
		in1_V {Type I LastRead 13 FirstWrite -1}
		in1_V_offset {Type I LastRead 4 FirstWrite -1}
		in2_V {Type I LastRead 13 FirstWrite -1}
		in2_V_offset {Type I LastRead 4 FirstWrite -1}
		in3_V {Type I LastRead 13 FirstWrite -1}
		in3_V_offset {Type I LastRead 4 FirstWrite -1}
		in4_V {Type I LastRead 13 FirstWrite -1}
		in4_V_offset {Type I LastRead 4 FirstWrite -1}
		n {Type I LastRead 2 FirstWrite -1}
		basePixAddr {Type I LastRead 3 FirstWrite -1}
		fm_size {Type I LastRead 0 FirstWrite -1}}
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
		m {Type I LastRead 0 FirstWrite -1}}
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
	in1_V { m_axi {  { m_axi_in1_V_AWVALID VALID 1 1 }  { m_axi_in1_V_AWREADY READY 0 1 }  { m_axi_in1_V_AWADDR ADDR 1 32 }  { m_axi_in1_V_AWID ID 1 1 }  { m_axi_in1_V_AWLEN LEN 1 32 }  { m_axi_in1_V_AWSIZE SIZE 1 3 }  { m_axi_in1_V_AWBURST BURST 1 2 }  { m_axi_in1_V_AWLOCK LOCK 1 2 }  { m_axi_in1_V_AWCACHE CACHE 1 4 }  { m_axi_in1_V_AWPROT PROT 1 3 }  { m_axi_in1_V_AWQOS QOS 1 4 }  { m_axi_in1_V_AWREGION REGION 1 4 }  { m_axi_in1_V_AWUSER USER 1 1 }  { m_axi_in1_V_WVALID VALID 1 1 }  { m_axi_in1_V_WREADY READY 0 1 }  { m_axi_in1_V_WDATA DATA 1 16 }  { m_axi_in1_V_WSTRB STRB 1 2 }  { m_axi_in1_V_WLAST LAST 1 1 }  { m_axi_in1_V_WID ID 1 1 }  { m_axi_in1_V_WUSER USER 1 1 }  { m_axi_in1_V_ARVALID VALID 1 1 }  { m_axi_in1_V_ARREADY READY 0 1 }  { m_axi_in1_V_ARADDR ADDR 1 32 }  { m_axi_in1_V_ARID ID 1 1 }  { m_axi_in1_V_ARLEN LEN 1 32 }  { m_axi_in1_V_ARSIZE SIZE 1 3 }  { m_axi_in1_V_ARBURST BURST 1 2 }  { m_axi_in1_V_ARLOCK LOCK 1 2 }  { m_axi_in1_V_ARCACHE CACHE 1 4 }  { m_axi_in1_V_ARPROT PROT 1 3 }  { m_axi_in1_V_ARQOS QOS 1 4 }  { m_axi_in1_V_ARREGION REGION 1 4 }  { m_axi_in1_V_ARUSER USER 1 1 }  { m_axi_in1_V_RVALID VALID 0 1 }  { m_axi_in1_V_RREADY READY 1 1 }  { m_axi_in1_V_RDATA DATA 0 16 }  { m_axi_in1_V_RLAST LAST 0 1 }  { m_axi_in1_V_RID ID 0 1 }  { m_axi_in1_V_RUSER USER 0 1 }  { m_axi_in1_V_RRESP RESP 0 2 }  { m_axi_in1_V_BVALID VALID 0 1 }  { m_axi_in1_V_BREADY READY 1 1 }  { m_axi_in1_V_BRESP RESP 0 2 }  { m_axi_in1_V_BID ID 0 1 }  { m_axi_in1_V_BUSER USER 0 1 } } }
	in1_V_offset { ap_none {  { in1_V_offset in_data 0 31 } } }
	in2_V { m_axi {  { m_axi_in2_V_AWVALID VALID 1 1 }  { m_axi_in2_V_AWREADY READY 0 1 }  { m_axi_in2_V_AWADDR ADDR 1 32 }  { m_axi_in2_V_AWID ID 1 1 }  { m_axi_in2_V_AWLEN LEN 1 32 }  { m_axi_in2_V_AWSIZE SIZE 1 3 }  { m_axi_in2_V_AWBURST BURST 1 2 }  { m_axi_in2_V_AWLOCK LOCK 1 2 }  { m_axi_in2_V_AWCACHE CACHE 1 4 }  { m_axi_in2_V_AWPROT PROT 1 3 }  { m_axi_in2_V_AWQOS QOS 1 4 }  { m_axi_in2_V_AWREGION REGION 1 4 }  { m_axi_in2_V_AWUSER USER 1 1 }  { m_axi_in2_V_WVALID VALID 1 1 }  { m_axi_in2_V_WREADY READY 0 1 }  { m_axi_in2_V_WDATA DATA 1 16 }  { m_axi_in2_V_WSTRB STRB 1 2 }  { m_axi_in2_V_WLAST LAST 1 1 }  { m_axi_in2_V_WID ID 1 1 }  { m_axi_in2_V_WUSER USER 1 1 }  { m_axi_in2_V_ARVALID VALID 1 1 }  { m_axi_in2_V_ARREADY READY 0 1 }  { m_axi_in2_V_ARADDR ADDR 1 32 }  { m_axi_in2_V_ARID ID 1 1 }  { m_axi_in2_V_ARLEN LEN 1 32 }  { m_axi_in2_V_ARSIZE SIZE 1 3 }  { m_axi_in2_V_ARBURST BURST 1 2 }  { m_axi_in2_V_ARLOCK LOCK 1 2 }  { m_axi_in2_V_ARCACHE CACHE 1 4 }  { m_axi_in2_V_ARPROT PROT 1 3 }  { m_axi_in2_V_ARQOS QOS 1 4 }  { m_axi_in2_V_ARREGION REGION 1 4 }  { m_axi_in2_V_ARUSER USER 1 1 }  { m_axi_in2_V_RVALID VALID 0 1 }  { m_axi_in2_V_RREADY READY 1 1 }  { m_axi_in2_V_RDATA DATA 0 16 }  { m_axi_in2_V_RLAST LAST 0 1 }  { m_axi_in2_V_RID ID 0 1 }  { m_axi_in2_V_RUSER USER 0 1 }  { m_axi_in2_V_RRESP RESP 0 2 }  { m_axi_in2_V_BVALID VALID 0 1 }  { m_axi_in2_V_BREADY READY 1 1 }  { m_axi_in2_V_BRESP RESP 0 2 }  { m_axi_in2_V_BID ID 0 1 }  { m_axi_in2_V_BUSER USER 0 1 } } }
	in2_V_offset { ap_none {  { in2_V_offset in_data 0 31 } } }
	in3_V { m_axi {  { m_axi_in3_V_AWVALID VALID 1 1 }  { m_axi_in3_V_AWREADY READY 0 1 }  { m_axi_in3_V_AWADDR ADDR 1 32 }  { m_axi_in3_V_AWID ID 1 1 }  { m_axi_in3_V_AWLEN LEN 1 32 }  { m_axi_in3_V_AWSIZE SIZE 1 3 }  { m_axi_in3_V_AWBURST BURST 1 2 }  { m_axi_in3_V_AWLOCK LOCK 1 2 }  { m_axi_in3_V_AWCACHE CACHE 1 4 }  { m_axi_in3_V_AWPROT PROT 1 3 }  { m_axi_in3_V_AWQOS QOS 1 4 }  { m_axi_in3_V_AWREGION REGION 1 4 }  { m_axi_in3_V_AWUSER USER 1 1 }  { m_axi_in3_V_WVALID VALID 1 1 }  { m_axi_in3_V_WREADY READY 0 1 }  { m_axi_in3_V_WDATA DATA 1 16 }  { m_axi_in3_V_WSTRB STRB 1 2 }  { m_axi_in3_V_WLAST LAST 1 1 }  { m_axi_in3_V_WID ID 1 1 }  { m_axi_in3_V_WUSER USER 1 1 }  { m_axi_in3_V_ARVALID VALID 1 1 }  { m_axi_in3_V_ARREADY READY 0 1 }  { m_axi_in3_V_ARADDR ADDR 1 32 }  { m_axi_in3_V_ARID ID 1 1 }  { m_axi_in3_V_ARLEN LEN 1 32 }  { m_axi_in3_V_ARSIZE SIZE 1 3 }  { m_axi_in3_V_ARBURST BURST 1 2 }  { m_axi_in3_V_ARLOCK LOCK 1 2 }  { m_axi_in3_V_ARCACHE CACHE 1 4 }  { m_axi_in3_V_ARPROT PROT 1 3 }  { m_axi_in3_V_ARQOS QOS 1 4 }  { m_axi_in3_V_ARREGION REGION 1 4 }  { m_axi_in3_V_ARUSER USER 1 1 }  { m_axi_in3_V_RVALID VALID 0 1 }  { m_axi_in3_V_RREADY READY 1 1 }  { m_axi_in3_V_RDATA DATA 0 16 }  { m_axi_in3_V_RLAST LAST 0 1 }  { m_axi_in3_V_RID ID 0 1 }  { m_axi_in3_V_RUSER USER 0 1 }  { m_axi_in3_V_RRESP RESP 0 2 }  { m_axi_in3_V_BVALID VALID 0 1 }  { m_axi_in3_V_BREADY READY 1 1 }  { m_axi_in3_V_BRESP RESP 0 2 }  { m_axi_in3_V_BID ID 0 1 }  { m_axi_in3_V_BUSER USER 0 1 } } }
	in3_V_offset { ap_none {  { in3_V_offset in_data 0 31 } } }
	in4_V { m_axi {  { m_axi_in4_V_AWVALID VALID 1 1 }  { m_axi_in4_V_AWREADY READY 0 1 }  { m_axi_in4_V_AWADDR ADDR 1 32 }  { m_axi_in4_V_AWID ID 1 1 }  { m_axi_in4_V_AWLEN LEN 1 32 }  { m_axi_in4_V_AWSIZE SIZE 1 3 }  { m_axi_in4_V_AWBURST BURST 1 2 }  { m_axi_in4_V_AWLOCK LOCK 1 2 }  { m_axi_in4_V_AWCACHE CACHE 1 4 }  { m_axi_in4_V_AWPROT PROT 1 3 }  { m_axi_in4_V_AWQOS QOS 1 4 }  { m_axi_in4_V_AWREGION REGION 1 4 }  { m_axi_in4_V_AWUSER USER 1 1 }  { m_axi_in4_V_WVALID VALID 1 1 }  { m_axi_in4_V_WREADY READY 0 1 }  { m_axi_in4_V_WDATA DATA 1 16 }  { m_axi_in4_V_WSTRB STRB 1 2 }  { m_axi_in4_V_WLAST LAST 1 1 }  { m_axi_in4_V_WID ID 1 1 }  { m_axi_in4_V_WUSER USER 1 1 }  { m_axi_in4_V_ARVALID VALID 1 1 }  { m_axi_in4_V_ARREADY READY 0 1 }  { m_axi_in4_V_ARADDR ADDR 1 32 }  { m_axi_in4_V_ARID ID 1 1 }  { m_axi_in4_V_ARLEN LEN 1 32 }  { m_axi_in4_V_ARSIZE SIZE 1 3 }  { m_axi_in4_V_ARBURST BURST 1 2 }  { m_axi_in4_V_ARLOCK LOCK 1 2 }  { m_axi_in4_V_ARCACHE CACHE 1 4 }  { m_axi_in4_V_ARPROT PROT 1 3 }  { m_axi_in4_V_ARQOS QOS 1 4 }  { m_axi_in4_V_ARREGION REGION 1 4 }  { m_axi_in4_V_ARUSER USER 1 1 }  { m_axi_in4_V_RVALID VALID 0 1 }  { m_axi_in4_V_RREADY READY 1 1 }  { m_axi_in4_V_RDATA DATA 0 16 }  { m_axi_in4_V_RLAST LAST 0 1 }  { m_axi_in4_V_RID ID 0 1 }  { m_axi_in4_V_RUSER USER 0 1 }  { m_axi_in4_V_RRESP RESP 0 2 }  { m_axi_in4_V_BVALID VALID 0 1 }  { m_axi_in4_V_BREADY READY 1 1 }  { m_axi_in4_V_BRESP RESP 0 2 }  { m_axi_in4_V_BID ID 0 1 }  { m_axi_in4_V_BUSER USER 0 1 } } }
	in4_V_offset { ap_none {  { in4_V_offset in_data 0 31 } } }
	weight_V { m_axi {  { m_axi_weight_V_AWVALID VALID 1 1 }  { m_axi_weight_V_AWREADY READY 0 1 }  { m_axi_weight_V_AWADDR ADDR 1 32 }  { m_axi_weight_V_AWID ID 1 1 }  { m_axi_weight_V_AWLEN LEN 1 32 }  { m_axi_weight_V_AWSIZE SIZE 1 3 }  { m_axi_weight_V_AWBURST BURST 1 2 }  { m_axi_weight_V_AWLOCK LOCK 1 2 }  { m_axi_weight_V_AWCACHE CACHE 1 4 }  { m_axi_weight_V_AWPROT PROT 1 3 }  { m_axi_weight_V_AWQOS QOS 1 4 }  { m_axi_weight_V_AWREGION REGION 1 4 }  { m_axi_weight_V_AWUSER USER 1 1 }  { m_axi_weight_V_WVALID VALID 1 1 }  { m_axi_weight_V_WREADY READY 0 1 }  { m_axi_weight_V_WDATA DATA 1 16 }  { m_axi_weight_V_WSTRB STRB 1 2 }  { m_axi_weight_V_WLAST LAST 1 1 }  { m_axi_weight_V_WID ID 1 1 }  { m_axi_weight_V_WUSER USER 1 1 }  { m_axi_weight_V_ARVALID VALID 1 1 }  { m_axi_weight_V_ARREADY READY 0 1 }  { m_axi_weight_V_ARADDR ADDR 1 32 }  { m_axi_weight_V_ARID ID 1 1 }  { m_axi_weight_V_ARLEN LEN 1 32 }  { m_axi_weight_V_ARSIZE SIZE 1 3 }  { m_axi_weight_V_ARBURST BURST 1 2 }  { m_axi_weight_V_ARLOCK LOCK 1 2 }  { m_axi_weight_V_ARCACHE CACHE 1 4 }  { m_axi_weight_V_ARPROT PROT 1 3 }  { m_axi_weight_V_ARQOS QOS 1 4 }  { m_axi_weight_V_ARREGION REGION 1 4 }  { m_axi_weight_V_ARUSER USER 1 1 }  { m_axi_weight_V_RVALID VALID 0 1 }  { m_axi_weight_V_RREADY READY 1 1 }  { m_axi_weight_V_RDATA DATA 0 16 }  { m_axi_weight_V_RLAST LAST 0 1 }  { m_axi_weight_V_RID ID 0 1 }  { m_axi_weight_V_RUSER USER 0 1 }  { m_axi_weight_V_RRESP RESP 0 2 }  { m_axi_weight_V_BVALID VALID 0 1 }  { m_axi_weight_V_BREADY READY 1 1 }  { m_axi_weight_V_BRESP RESP 0 2 }  { m_axi_weight_V_BID ID 0 1 }  { m_axi_weight_V_BUSER USER 0 1 } } }
	weight_V_offset { ap_none {  { weight_V_offset in_data 0 31 } } }
	bias_V_offset { ap_none {  { bias_V_offset in_data 0 31 } } }
	out_V_offset { ap_none {  { out_V_offset in_data 0 31 } } }
	N { ap_none {  { N in_data 0 32 } } }
	M { ap_none {  { M in_data 0 32 } } }
	SIZE { ap_none {  { SIZE in_data 0 32 } } }
	ACT { ap_none {  { ACT in_data 0 32 } } }
}
