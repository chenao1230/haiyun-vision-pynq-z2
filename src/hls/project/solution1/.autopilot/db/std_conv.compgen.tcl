# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 1008
set hasByteEnable 0
set MemName std_conv_bias_buffu1
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 16
set AddrRange 16
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
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
set ID 1009
set hasByteEnable 0
set MemName std_conv_fm_out1_f06
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


# Memory (RAM/ROM)  definition:
set ID 1010
set hasByteEnable 0
set MemName std_conv_fm_out1_f16
set CoreName ap_simcore_mem
set PortList { 2 2 }
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
    id 1011 \
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
    id 1012 \
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
    id 1013 \
    name in2_V \
    type other \
    dir IO \
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
    id 1014 \
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
    id 1015 \
    name in3_V \
    type other \
    dir IO \
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
    id 1016 \
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
    id 1017 \
    name in4_V \
    type other \
    dir IO \
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
    id 1018 \
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
    id 1019 \
    name w1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w1_V \
    op interface \
    ports { m_axi_w1_V_AWVALID { O 1 bit } m_axi_w1_V_AWREADY { I 1 bit } m_axi_w1_V_AWADDR { O 32 vector } m_axi_w1_V_AWID { O 1 vector } m_axi_w1_V_AWLEN { O 32 vector } m_axi_w1_V_AWSIZE { O 3 vector } m_axi_w1_V_AWBURST { O 2 vector } m_axi_w1_V_AWLOCK { O 2 vector } m_axi_w1_V_AWCACHE { O 4 vector } m_axi_w1_V_AWPROT { O 3 vector } m_axi_w1_V_AWQOS { O 4 vector } m_axi_w1_V_AWREGION { O 4 vector } m_axi_w1_V_AWUSER { O 1 vector } m_axi_w1_V_WVALID { O 1 bit } m_axi_w1_V_WREADY { I 1 bit } m_axi_w1_V_WDATA { O 16 vector } m_axi_w1_V_WSTRB { O 2 vector } m_axi_w1_V_WLAST { O 1 bit } m_axi_w1_V_WID { O 1 vector } m_axi_w1_V_WUSER { O 1 vector } m_axi_w1_V_ARVALID { O 1 bit } m_axi_w1_V_ARREADY { I 1 bit } m_axi_w1_V_ARADDR { O 32 vector } m_axi_w1_V_ARID { O 1 vector } m_axi_w1_V_ARLEN { O 32 vector } m_axi_w1_V_ARSIZE { O 3 vector } m_axi_w1_V_ARBURST { O 2 vector } m_axi_w1_V_ARLOCK { O 2 vector } m_axi_w1_V_ARCACHE { O 4 vector } m_axi_w1_V_ARPROT { O 3 vector } m_axi_w1_V_ARQOS { O 4 vector } m_axi_w1_V_ARREGION { O 4 vector } m_axi_w1_V_ARUSER { O 1 vector } m_axi_w1_V_RVALID { I 1 bit } m_axi_w1_V_RREADY { O 1 bit } m_axi_w1_V_RDATA { I 16 vector } m_axi_w1_V_RLAST { I 1 bit } m_axi_w1_V_RID { I 1 vector } m_axi_w1_V_RUSER { I 1 vector } m_axi_w1_V_RRESP { I 2 vector } m_axi_w1_V_BVALID { I 1 bit } m_axi_w1_V_BREADY { O 1 bit } m_axi_w1_V_BRESP { I 2 vector } m_axi_w1_V_BID { I 1 vector } m_axi_w1_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1020 \
    name w1_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w1_V_offset \
    op interface \
    ports { w1_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1021 \
    name w2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w2_V \
    op interface \
    ports { m_axi_w2_V_AWVALID { O 1 bit } m_axi_w2_V_AWREADY { I 1 bit } m_axi_w2_V_AWADDR { O 32 vector } m_axi_w2_V_AWID { O 1 vector } m_axi_w2_V_AWLEN { O 32 vector } m_axi_w2_V_AWSIZE { O 3 vector } m_axi_w2_V_AWBURST { O 2 vector } m_axi_w2_V_AWLOCK { O 2 vector } m_axi_w2_V_AWCACHE { O 4 vector } m_axi_w2_V_AWPROT { O 3 vector } m_axi_w2_V_AWQOS { O 4 vector } m_axi_w2_V_AWREGION { O 4 vector } m_axi_w2_V_AWUSER { O 1 vector } m_axi_w2_V_WVALID { O 1 bit } m_axi_w2_V_WREADY { I 1 bit } m_axi_w2_V_WDATA { O 16 vector } m_axi_w2_V_WSTRB { O 2 vector } m_axi_w2_V_WLAST { O 1 bit } m_axi_w2_V_WID { O 1 vector } m_axi_w2_V_WUSER { O 1 vector } m_axi_w2_V_ARVALID { O 1 bit } m_axi_w2_V_ARREADY { I 1 bit } m_axi_w2_V_ARADDR { O 32 vector } m_axi_w2_V_ARID { O 1 vector } m_axi_w2_V_ARLEN { O 32 vector } m_axi_w2_V_ARSIZE { O 3 vector } m_axi_w2_V_ARBURST { O 2 vector } m_axi_w2_V_ARLOCK { O 2 vector } m_axi_w2_V_ARCACHE { O 4 vector } m_axi_w2_V_ARPROT { O 3 vector } m_axi_w2_V_ARQOS { O 4 vector } m_axi_w2_V_ARREGION { O 4 vector } m_axi_w2_V_ARUSER { O 1 vector } m_axi_w2_V_RVALID { I 1 bit } m_axi_w2_V_RREADY { O 1 bit } m_axi_w2_V_RDATA { I 16 vector } m_axi_w2_V_RLAST { I 1 bit } m_axi_w2_V_RID { I 1 vector } m_axi_w2_V_RUSER { I 1 vector } m_axi_w2_V_RRESP { I 2 vector } m_axi_w2_V_BVALID { I 1 bit } m_axi_w2_V_BREADY { O 1 bit } m_axi_w2_V_BRESP { I 2 vector } m_axi_w2_V_BID { I 1 vector } m_axi_w2_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1022 \
    name w2_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w2_V_offset \
    op interface \
    ports { w2_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1023 \
    name w3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w3_V \
    op interface \
    ports { m_axi_w3_V_AWVALID { O 1 bit } m_axi_w3_V_AWREADY { I 1 bit } m_axi_w3_V_AWADDR { O 32 vector } m_axi_w3_V_AWID { O 1 vector } m_axi_w3_V_AWLEN { O 32 vector } m_axi_w3_V_AWSIZE { O 3 vector } m_axi_w3_V_AWBURST { O 2 vector } m_axi_w3_V_AWLOCK { O 2 vector } m_axi_w3_V_AWCACHE { O 4 vector } m_axi_w3_V_AWPROT { O 3 vector } m_axi_w3_V_AWQOS { O 4 vector } m_axi_w3_V_AWREGION { O 4 vector } m_axi_w3_V_AWUSER { O 1 vector } m_axi_w3_V_WVALID { O 1 bit } m_axi_w3_V_WREADY { I 1 bit } m_axi_w3_V_WDATA { O 16 vector } m_axi_w3_V_WSTRB { O 2 vector } m_axi_w3_V_WLAST { O 1 bit } m_axi_w3_V_WID { O 1 vector } m_axi_w3_V_WUSER { O 1 vector } m_axi_w3_V_ARVALID { O 1 bit } m_axi_w3_V_ARREADY { I 1 bit } m_axi_w3_V_ARADDR { O 32 vector } m_axi_w3_V_ARID { O 1 vector } m_axi_w3_V_ARLEN { O 32 vector } m_axi_w3_V_ARSIZE { O 3 vector } m_axi_w3_V_ARBURST { O 2 vector } m_axi_w3_V_ARLOCK { O 2 vector } m_axi_w3_V_ARCACHE { O 4 vector } m_axi_w3_V_ARPROT { O 3 vector } m_axi_w3_V_ARQOS { O 4 vector } m_axi_w3_V_ARREGION { O 4 vector } m_axi_w3_V_ARUSER { O 1 vector } m_axi_w3_V_RVALID { I 1 bit } m_axi_w3_V_RREADY { O 1 bit } m_axi_w3_V_RDATA { I 16 vector } m_axi_w3_V_RLAST { I 1 bit } m_axi_w3_V_RID { I 1 vector } m_axi_w3_V_RUSER { I 1 vector } m_axi_w3_V_RRESP { I 2 vector } m_axi_w3_V_BVALID { I 1 bit } m_axi_w3_V_BREADY { O 1 bit } m_axi_w3_V_BRESP { I 2 vector } m_axi_w3_V_BID { I 1 vector } m_axi_w3_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1024 \
    name w3_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w3_V_offset \
    op interface \
    ports { w3_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1025 \
    name w4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w4_V \
    op interface \
    ports { m_axi_w4_V_AWVALID { O 1 bit } m_axi_w4_V_AWREADY { I 1 bit } m_axi_w4_V_AWADDR { O 32 vector } m_axi_w4_V_AWID { O 1 vector } m_axi_w4_V_AWLEN { O 32 vector } m_axi_w4_V_AWSIZE { O 3 vector } m_axi_w4_V_AWBURST { O 2 vector } m_axi_w4_V_AWLOCK { O 2 vector } m_axi_w4_V_AWCACHE { O 4 vector } m_axi_w4_V_AWPROT { O 3 vector } m_axi_w4_V_AWQOS { O 4 vector } m_axi_w4_V_AWREGION { O 4 vector } m_axi_w4_V_AWUSER { O 1 vector } m_axi_w4_V_WVALID { O 1 bit } m_axi_w4_V_WREADY { I 1 bit } m_axi_w4_V_WDATA { O 16 vector } m_axi_w4_V_WSTRB { O 2 vector } m_axi_w4_V_WLAST { O 1 bit } m_axi_w4_V_WID { O 1 vector } m_axi_w4_V_WUSER { O 1 vector } m_axi_w4_V_ARVALID { O 1 bit } m_axi_w4_V_ARREADY { I 1 bit } m_axi_w4_V_ARADDR { O 32 vector } m_axi_w4_V_ARID { O 1 vector } m_axi_w4_V_ARLEN { O 32 vector } m_axi_w4_V_ARSIZE { O 3 vector } m_axi_w4_V_ARBURST { O 2 vector } m_axi_w4_V_ARLOCK { O 2 vector } m_axi_w4_V_ARCACHE { O 4 vector } m_axi_w4_V_ARPROT { O 3 vector } m_axi_w4_V_ARQOS { O 4 vector } m_axi_w4_V_ARREGION { O 4 vector } m_axi_w4_V_ARUSER { O 1 vector } m_axi_w4_V_RVALID { I 1 bit } m_axi_w4_V_RREADY { O 1 bit } m_axi_w4_V_RDATA { I 16 vector } m_axi_w4_V_RLAST { I 1 bit } m_axi_w4_V_RID { I 1 vector } m_axi_w4_V_RUSER { I 1 vector } m_axi_w4_V_RRESP { I 2 vector } m_axi_w4_V_BVALID { I 1 bit } m_axi_w4_V_BREADY { O 1 bit } m_axi_w4_V_BRESP { I 2 vector } m_axi_w4_V_BID { I 1 vector } m_axi_w4_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1026 \
    name w4_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_w4_V_offset \
    op interface \
    ports { w4_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1027 \
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
    id 1028 \
    name out1_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out1_V_offset \
    op interface \
    ports { out1_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1029 \
    name out2_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out2_V_offset \
    op interface \
    ports { out2_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1030 \
    name out3_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out3_V_offset \
    op interface \
    ports { out3_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1031 \
    name out4_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out4_V_offset \
    op interface \
    ports { out4_V_offset { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1032 \
    name ch_in \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ch_in \
    op interface \
    ports { ch_in { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1033 \
    name ch_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ch_out \
    op interface \
    ports { ch_out { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1034 \
    name fm_size \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fm_size \
    op interface \
    ports { fm_size { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1035 \
    name stride \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_stride \
    op interface \
    ports { stride { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1036 \
    name act \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_act \
    op interface \
    ports { act { I 16 vector } } \
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


