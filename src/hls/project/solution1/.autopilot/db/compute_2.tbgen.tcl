set moduleName compute_2
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
set C_modelName {compute.2}
set C_modelType { void 0 }
set C_modelArgList {
	{ fm_in_buff_V int 16 regular {array 2704 { 1 1 } 1 1 }  }
	{ fm_out_buff_V int 16 regular {array 676 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fm_in_buff_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "fm_out_buff_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fm_in_buff_V_address0 sc_out sc_lv 12 signal 0 } 
	{ fm_in_buff_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ fm_in_buff_V_q0 sc_in sc_lv 16 signal 0 } 
	{ fm_in_buff_V_address1 sc_out sc_lv 12 signal 0 } 
	{ fm_in_buff_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ fm_in_buff_V_q1 sc_in sc_lv 16 signal 0 } 
	{ fm_out_buff_V_address0 sc_out sc_lv 10 signal 1 } 
	{ fm_out_buff_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ fm_out_buff_V_we0 sc_out sc_logic 1 signal 1 } 
	{ fm_out_buff_V_d0 sc_out sc_lv 16 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fm_in_buff_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "address0" }} , 
 	{ "name": "fm_in_buff_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "ce0" }} , 
 	{ "name": "fm_in_buff_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "q0" }} , 
 	{ "name": "fm_in_buff_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "address1" }} , 
 	{ "name": "fm_in_buff_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "ce1" }} , 
 	{ "name": "fm_in_buff_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_in_buff_V", "role": "q1" }} , 
 	{ "name": "fm_out_buff_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fm_out_buff_V", "role": "address0" }} , 
 	{ "name": "fm_out_buff_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_V", "role": "ce0" }} , 
 	{ "name": "fm_out_buff_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fm_out_buff_V", "role": "we0" }} , 
 	{ "name": "fm_out_buff_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "fm_out_buff_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "compute_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2717", "EstimateLatencyMax" : "2717",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fm_in_buff_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fm_out_buff_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_3kbM_U33", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_mac_muladd_7lbW_U34", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	compute_2 {
		fm_in_buff_V {Type I LastRead 14 FirstWrite -1}
		fm_out_buff_V {Type O LastRead -1 FirstWrite 16}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2717", "Max" : "2717"}
	, {"Name" : "Interval", "Min" : "2717", "Max" : "2717"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fm_in_buff_V { ap_memory {  { fm_in_buff_V_address0 mem_address 1 12 }  { fm_in_buff_V_ce0 mem_ce 1 1 }  { fm_in_buff_V_q0 mem_dout 0 16 }  { fm_in_buff_V_address1 MemPortADDR2 1 12 }  { fm_in_buff_V_ce1 MemPortCE2 1 1 }  { fm_in_buff_V_q1 MemPortDOUT2 0 16 } } }
	fm_out_buff_V { ap_memory {  { fm_out_buff_V_address0 mem_address 1 10 }  { fm_out_buff_V_ce0 mem_ce 1 1 }  { fm_out_buff_V_we0 mem_we 1 1 }  { fm_out_buff_V_d0 mem_din 1 16 } } }
}
