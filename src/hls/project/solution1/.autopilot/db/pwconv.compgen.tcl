# This script segment is generated automatically by AutoPilot

set id 281
set name conv_mul_mul_16nsRg6
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 0
set in1_width 16
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set exp i0*i1
set arg_lists {i0 {16 0 +} i1 {16 0 +} p {32 0 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 283
set hasByteEnable 0
set MemName pwconv_bias_buff_JfO
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 16
set AddrRange 128
set AddrWd 7
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.771
set ClkPeriod 5.5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 284
set hasByteEnable 0
set MemName pwconv_fm_out1_0_V
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 16
set AddrRange 169
set AddrWd 8
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.771
set ClkPeriod 5.5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name in1_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_V \
    op interface \
    ports { m_axi_in1_V_AWVALID { O 1 bit } m_axi_in1_V_AWREADY { I 1 bit } m_axi_in1_V_AWADDR { O 32 vector } m_axi_in1_V_AWID { O 1 vector } m_axi_in1_V_AWLEN { O 32 vector } m_axi_in1_V_AWSIZE { O 3 vector } m_axi_in1_V_AWBURST { O 2 vector } m_axi_in1_V_AWLOCK { O 2 vector } m_axi_in1_V_AWCACHE { O 4 vector } m_axi_in1_V_AWPROT { O 3 vector } m_axi_in1_V_AWQOS { O 4 vector } m_axi_in1_V_AWREGION { O 4 vector } m_axi_in1_V_AWUSER { O 1 vector } m_axi_in1_V_WVALID { O 1 bit } m_axi_in1_V_WREADY { I 1 bit } m_axi_in1_V_WDATA { O 16 vector } m_axi_in1_V_WSTRB { O 2 vector } m_axi_in1_V_WLAST { O 1 bit } m_axi_in1_V_WID { O 1 vector } m_axi_in1_V_WUSER { O 1 vector } m_axi_in1_V_ARVALID { O 1 bit } m_axi_in1_V_ARREADY { I 1 bit } m_axi_in1_V_ARADDR { O 32 vector } m_axi_in1_V_ARID { O 1 vector } m_axi_in1_V_ARLEN { O 32 vector } m_axi_in1_V_ARSIZE { O 3 vector } m_axi_in1_V_ARBURST { O 2 vector } m_axi_in1_V_ARLOCK { O 2 vector } m_axi_in1_V_ARCACHE { O 4 vector } m_axi_in1_V_ARPROT { O 3 vector } m_axi_in1_V_ARQOS { O 4 vector } m_axi_in1_V_ARREGION { O 4 vector } m_axi_in1_V_ARUSER { O 1 vector } m_axi_in1_V_RVALID { I 1 bit } m_axi_in1_V_RREADY { O 1 bit } m_axi_in1_V_RDATA { I 16 vector } m_axi_in1_V_RLAST { I 1 bit } m_axi_in1_V_RID { I 1 vector } m_axi_in1_V_RUSER { I 1 vector } m_axi_in1_V_RRESP { I 2 vector } m_axi_in1_V_BVALID { I 1 bit } m_axi_in1_V_BREADY { O 1 bit } m_axi_in1_V_BRESP { I 2 vector } m_axi_in1_V_BID { I 1 vector } m_axi_in1_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name in1_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_V_offset \
    op interface \
    ports { in1_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name in2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V \
    op interface \
    ports { m_axi_in2_V_AWVALID { O 1 bit } m_axi_in2_V_AWREADY { I 1 bit } m_axi_in2_V_AWADDR { O 32 vector } m_axi_in2_V_AWID { O 1 vector } m_axi_in2_V_AWLEN { O 32 vector } m_axi_in2_V_AWSIZE { O 3 vector } m_axi_in2_V_AWBURST { O 2 vector } m_axi_in2_V_AWLOCK { O 2 vector } m_axi_in2_V_AWCACHE { O 4 vector } m_axi_in2_V_AWPROT { O 3 vector } m_axi_in2_V_AWQOS { O 4 vector } m_axi_in2_V_AWREGION { O 4 vector } m_axi_in2_V_AWUSER { O 1 vector } m_axi_in2_V_WVALID { O 1 bit } m_axi_in2_V_WREADY { I 1 bit } m_axi_in2_V_WDATA { O 16 vector } m_axi_in2_V_WSTRB { O 2 vector } m_axi_in2_V_WLAST { O 1 bit } m_axi_in2_V_WID { O 1 vector } m_axi_in2_V_WUSER { O 1 vector } m_axi_in2_V_ARVALID { O 1 bit } m_axi_in2_V_ARREADY { I 1 bit } m_axi_in2_V_ARADDR { O 32 vector } m_axi_in2_V_ARID { O 1 vector } m_axi_in2_V_ARLEN { O 32 vector } m_axi_in2_V_ARSIZE { O 3 vector } m_axi_in2_V_ARBURST { O 2 vector } m_axi_in2_V_ARLOCK { O 2 vector } m_axi_in2_V_ARCACHE { O 4 vector } m_axi_in2_V_ARPROT { O 3 vector } m_axi_in2_V_ARQOS { O 4 vector } m_axi_in2_V_ARREGION { O 4 vector } m_axi_in2_V_ARUSER { O 1 vector } m_axi_in2_V_RVALID { I 1 bit } m_axi_in2_V_RREADY { O 1 bit } m_axi_in2_V_RDATA { I 16 vector } m_axi_in2_V_RLAST { I 1 bit } m_axi_in2_V_RID { I 1 vector } m_axi_in2_V_RUSER { I 1 vector } m_axi_in2_V_RRESP { I 2 vector } m_axi_in2_V_BVALID { I 1 bit } m_axi_in2_V_BREADY { O 1 bit } m_axi_in2_V_BRESP { I 2 vector } m_axi_in2_V_BID { I 1 vector } m_axi_in2_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name in2_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_offset \
    op interface \
    ports { in2_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name in3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in3_V \
    op interface \
    ports { m_axi_in3_V_AWVALID { O 1 bit } m_axi_in3_V_AWREADY { I 1 bit } m_axi_in3_V_AWADDR { O 32 vector } m_axi_in3_V_AWID { O 1 vector } m_axi_in3_V_AWLEN { O 32 vector } m_axi_in3_V_AWSIZE { O 3 vector } m_axi_in3_V_AWBURST { O 2 vector } m_axi_in3_V_AWLOCK { O 2 vector } m_axi_in3_V_AWCACHE { O 4 vector } m_axi_in3_V_AWPROT { O 3 vector } m_axi_in3_V_AWQOS { O 4 vector } m_axi_in3_V_AWREGION { O 4 vector } m_axi_in3_V_AWUSER { O 1 vector } m_axi_in3_V_WVALID { O 1 bit } m_axi_in3_V_WREADY { I 1 bit } m_axi_in3_V_WDATA { O 16 vector } m_axi_in3_V_WSTRB { O 2 vector } m_axi_in3_V_WLAST { O 1 bit } m_axi_in3_V_WID { O 1 vector } m_axi_in3_V_WUSER { O 1 vector } m_axi_in3_V_ARVALID { O 1 bit } m_axi_in3_V_ARREADY { I 1 bit } m_axi_in3_V_ARADDR { O 32 vector } m_axi_in3_V_ARID { O 1 vector } m_axi_in3_V_ARLEN { O 32 vector } m_axi_in3_V_ARSIZE { O 3 vector } m_axi_in3_V_ARBURST { O 2 vector } m_axi_in3_V_ARLOCK { O 2 vector } m_axi_in3_V_ARCACHE { O 4 vector } m_axi_in3_V_ARPROT { O 3 vector } m_axi_in3_V_ARQOS { O 4 vector } m_axi_in3_V_ARREGION { O 4 vector } m_axi_in3_V_ARUSER { O 1 vector } m_axi_in3_V_RVALID { I 1 bit } m_axi_in3_V_RREADY { O 1 bit } m_axi_in3_V_RDATA { I 16 vector } m_axi_in3_V_RLAST { I 1 bit } m_axi_in3_V_RID { I 1 vector } m_axi_in3_V_RUSER { I 1 vector } m_axi_in3_V_RRESP { I 2 vector } m_axi_in3_V_BVALID { I 1 bit } m_axi_in3_V_BREADY { O 1 bit } m_axi_in3_V_BRESP { I 2 vector } m_axi_in3_V_BID { I 1 vector } m_axi_in3_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name in3_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in3_V_offset \
    op interface \
    ports { in3_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name in4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in4_V \
    op interface \
    ports { m_axi_in4_V_AWVALID { O 1 bit } m_axi_in4_V_AWREADY { I 1 bit } m_axi_in4_V_AWADDR { O 32 vector } m_axi_in4_V_AWID { O 1 vector } m_axi_in4_V_AWLEN { O 32 vector } m_axi_in4_V_AWSIZE { O 3 vector } m_axi_in4_V_AWBURST { O 2 vector } m_axi_in4_V_AWLOCK { O 2 vector } m_axi_in4_V_AWCACHE { O 4 vector } m_axi_in4_V_AWPROT { O 3 vector } m_axi_in4_V_AWQOS { O 4 vector } m_axi_in4_V_AWREGION { O 4 vector } m_axi_in4_V_AWUSER { O 1 vector } m_axi_in4_V_WVALID { O 1 bit } m_axi_in4_V_WREADY { I 1 bit } m_axi_in4_V_WDATA { O 16 vector } m_axi_in4_V_WSTRB { O 2 vector } m_axi_in4_V_WLAST { O 1 bit } m_axi_in4_V_WID { O 1 vector } m_axi_in4_V_WUSER { O 1 vector } m_axi_in4_V_ARVALID { O 1 bit } m_axi_in4_V_ARREADY { I 1 bit } m_axi_in4_V_ARADDR { O 32 vector } m_axi_in4_V_ARID { O 1 vector } m_axi_in4_V_ARLEN { O 32 vector } m_axi_in4_V_ARSIZE { O 3 vector } m_axi_in4_V_ARBURST { O 2 vector } m_axi_in4_V_ARLOCK { O 2 vector } m_axi_in4_V_ARCACHE { O 4 vector } m_axi_in4_V_ARPROT { O 3 vector } m_axi_in4_V_ARQOS { O 4 vector } m_axi_in4_V_ARREGION { O 4 vector } m_axi_in4_V_ARUSER { O 1 vector } m_axi_in4_V_RVALID { I 1 bit } m_axi_in4_V_RREADY { O 1 bit } m_axi_in4_V_RDATA { I 16 vector } m_axi_in4_V_RLAST { I 1 bit } m_axi_in4_V_RID { I 1 vector } m_axi_in4_V_RUSER { I 1 vector } m_axi_in4_V_RRESP { I 2 vector } m_axi_in4_V_BVALID { I 1 bit } m_axi_in4_V_BREADY { O 1 bit } m_axi_in4_V_BRESP { I 2 vector } m_axi_in4_V_BID { I 1 vector } m_axi_in4_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name in4_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in4_V_offset \
    op interface \
    ports { in4_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name weight_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_V \
    op interface \
    ports { m_axi_weight_V_AWVALID { O 1 bit } m_axi_weight_V_AWREADY { I 1 bit } m_axi_weight_V_AWADDR { O 32 vector } m_axi_weight_V_AWID { O 1 vector } m_axi_weight_V_AWLEN { O 32 vector } m_axi_weight_V_AWSIZE { O 3 vector } m_axi_weight_V_AWBURST { O 2 vector } m_axi_weight_V_AWLOCK { O 2 vector } m_axi_weight_V_AWCACHE { O 4 vector } m_axi_weight_V_AWPROT { O 3 vector } m_axi_weight_V_AWQOS { O 4 vector } m_axi_weight_V_AWREGION { O 4 vector } m_axi_weight_V_AWUSER { O 1 vector } m_axi_weight_V_WVALID { O 1 bit } m_axi_weight_V_WREADY { I 1 bit } m_axi_weight_V_WDATA { O 16 vector } m_axi_weight_V_WSTRB { O 2 vector } m_axi_weight_V_WLAST { O 1 bit } m_axi_weight_V_WID { O 1 vector } m_axi_weight_V_WUSER { O 1 vector } m_axi_weight_V_ARVALID { O 1 bit } m_axi_weight_V_ARREADY { I 1 bit } m_axi_weight_V_ARADDR { O 32 vector } m_axi_weight_V_ARID { O 1 vector } m_axi_weight_V_ARLEN { O 32 vector } m_axi_weight_V_ARSIZE { O 3 vector } m_axi_weight_V_ARBURST { O 2 vector } m_axi_weight_V_ARLOCK { O 2 vector } m_axi_weight_V_ARCACHE { O 4 vector } m_axi_weight_V_ARPROT { O 3 vector } m_axi_weight_V_ARQOS { O 4 vector } m_axi_weight_V_ARREGION { O 4 vector } m_axi_weight_V_ARUSER { O 1 vector } m_axi_weight_V_RVALID { I 1 bit } m_axi_weight_V_RREADY { O 1 bit } m_axi_weight_V_RDATA { I 16 vector } m_axi_weight_V_RLAST { I 1 bit } m_axi_weight_V_RID { I 1 vector } m_axi_weight_V_RUSER { I 1 vector } m_axi_weight_V_RRESP { I 2 vector } m_axi_weight_V_BVALID { I 1 bit } m_axi_weight_V_BREADY { O 1 bit } m_axi_weight_V_BRESP { I 2 vector } m_axi_weight_V_BID { I 1 vector } m_axi_weight_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name weight_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weight_V_offset \
    op interface \
    ports { weight_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name bias_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_bias_V_offset \
    op interface \
    ports { bias_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name out_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_offset \
    op interface \
    ports { out_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name N \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_N \
    op interface \
    ports { N { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name M \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_M \
    op interface \
    ports { M { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 299 \
    name SIZE \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_SIZE \
    op interface \
    ports { SIZE { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 300 \
    name ACT \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ACT \
    op interface \
    ports { ACT { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


