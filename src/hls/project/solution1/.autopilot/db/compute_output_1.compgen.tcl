# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 221
set hasByteEnable 0
set MemName compute_output_1_xdS
set CoreName ap_simcore_mem
set PortList { 2 3 }
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

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 222 \
    name fm_out_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_0_V \
    op interface \
    ports { fm_out_buff_0_V_address0 { O 8 vector } fm_out_buff_0_V_ce0 { O 1 bit } fm_out_buff_0_V_we0 { O 1 bit } fm_out_buff_0_V_d0 { O 16 vector } fm_out_buff_0_V_q0 { I 16 vector } fm_out_buff_0_V_address1 { O 8 vector } fm_out_buff_0_V_ce1 { O 1 bit } fm_out_buff_0_V_we1 { O 1 bit } fm_out_buff_0_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 223 \
    name fm_out_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_1_V \
    op interface \
    ports { fm_out_buff_1_V_address0 { O 8 vector } fm_out_buff_1_V_ce0 { O 1 bit } fm_out_buff_1_V_we0 { O 1 bit } fm_out_buff_1_V_d0 { O 16 vector } fm_out_buff_1_V_q0 { I 16 vector } fm_out_buff_1_V_address1 { O 8 vector } fm_out_buff_1_V_ce1 { O 1 bit } fm_out_buff_1_V_we1 { O 1 bit } fm_out_buff_1_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 224 \
    name fm_out_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_2_V \
    op interface \
    ports { fm_out_buff_2_V_address0 { O 8 vector } fm_out_buff_2_V_ce0 { O 1 bit } fm_out_buff_2_V_we0 { O 1 bit } fm_out_buff_2_V_d0 { O 16 vector } fm_out_buff_2_V_q0 { I 16 vector } fm_out_buff_2_V_address1 { O 8 vector } fm_out_buff_2_V_ce1 { O 1 bit } fm_out_buff_2_V_we1 { O 1 bit } fm_out_buff_2_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 225 \
    name fm_out_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_3_V \
    op interface \
    ports { fm_out_buff_3_V_address0 { O 8 vector } fm_out_buff_3_V_ce0 { O 1 bit } fm_out_buff_3_V_we0 { O 1 bit } fm_out_buff_3_V_d0 { O 16 vector } fm_out_buff_3_V_q0 { I 16 vector } fm_out_buff_3_V_address1 { O 8 vector } fm_out_buff_3_V_ce1 { O 1 bit } fm_out_buff_3_V_we1 { O 1 bit } fm_out_buff_3_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 226 \
    name fm_out_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_4_V \
    op interface \
    ports { fm_out_buff_4_V_address0 { O 8 vector } fm_out_buff_4_V_ce0 { O 1 bit } fm_out_buff_4_V_we0 { O 1 bit } fm_out_buff_4_V_d0 { O 16 vector } fm_out_buff_4_V_q0 { I 16 vector } fm_out_buff_4_V_address1 { O 8 vector } fm_out_buff_4_V_ce1 { O 1 bit } fm_out_buff_4_V_we1 { O 1 bit } fm_out_buff_4_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 227 \
    name fm_out_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_5_V \
    op interface \
    ports { fm_out_buff_5_V_address0 { O 8 vector } fm_out_buff_5_V_ce0 { O 1 bit } fm_out_buff_5_V_we0 { O 1 bit } fm_out_buff_5_V_d0 { O 16 vector } fm_out_buff_5_V_q0 { I 16 vector } fm_out_buff_5_V_address1 { O 8 vector } fm_out_buff_5_V_ce1 { O 1 bit } fm_out_buff_5_V_we1 { O 1 bit } fm_out_buff_5_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 228 \
    name fm_out_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_6_V \
    op interface \
    ports { fm_out_buff_6_V_address0 { O 8 vector } fm_out_buff_6_V_ce0 { O 1 bit } fm_out_buff_6_V_we0 { O 1 bit } fm_out_buff_6_V_d0 { O 16 vector } fm_out_buff_6_V_q0 { I 16 vector } fm_out_buff_6_V_address1 { O 8 vector } fm_out_buff_6_V_ce1 { O 1 bit } fm_out_buff_6_V_we1 { O 1 bit } fm_out_buff_6_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 229 \
    name fm_out_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_7_V \
    op interface \
    ports { fm_out_buff_7_V_address0 { O 8 vector } fm_out_buff_7_V_ce0 { O 1 bit } fm_out_buff_7_V_we0 { O 1 bit } fm_out_buff_7_V_d0 { O 16 vector } fm_out_buff_7_V_q0 { I 16 vector } fm_out_buff_7_V_address1 { O 8 vector } fm_out_buff_7_V_ce1 { O 1 bit } fm_out_buff_7_V_we1 { O 1 bit } fm_out_buff_7_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 230 \
    name bias_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_0_V \
    op interface \
    ports { bias_buff_0_V_address0 { O 7 vector } bias_buff_0_V_ce0 { O 1 bit } bias_buff_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 231 \
    name bias_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_1_V \
    op interface \
    ports { bias_buff_1_V_address0 { O 7 vector } bias_buff_1_V_ce0 { O 1 bit } bias_buff_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 232 \
    name bias_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_2_V \
    op interface \
    ports { bias_buff_2_V_address0 { O 7 vector } bias_buff_2_V_ce0 { O 1 bit } bias_buff_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 233 \
    name bias_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_3_V \
    op interface \
    ports { bias_buff_3_V_address0 { O 7 vector } bias_buff_3_V_ce0 { O 1 bit } bias_buff_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 234 \
    name bias_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_4_V \
    op interface \
    ports { bias_buff_4_V_address0 { O 7 vector } bias_buff_4_V_ce0 { O 1 bit } bias_buff_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 235 \
    name bias_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_5_V \
    op interface \
    ports { bias_buff_5_V_address0 { O 7 vector } bias_buff_5_V_ce0 { O 1 bit } bias_buff_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 236 \
    name bias_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_6_V \
    op interface \
    ports { bias_buff_6_V_address0 { O 7 vector } bias_buff_6_V_ce0 { O 1 bit } bias_buff_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 237 \
    name bias_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_7_V \
    op interface \
    ports { bias_buff_7_V_address0 { O 7 vector } bias_buff_7_V_ce0 { O 1 bit } bias_buff_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_7_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name in1_V \
    type other \
    dir I \
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
    id 239 \
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
    id 240 \
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
    id 241 \
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
    id 242 \
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
    id 243 \
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
    id 244 \
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
    id 245 \
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
    id 246 \
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
    id 247 \
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
    id 248 \
    name m \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_m \
    op interface \
    ports { m { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
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
    id 250 \
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
    id 251 \
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
    id 252 \
    name basePixAddr \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_basePixAddr \
    op interface \
    ports { basePixAddr { I 16 vector } } \
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


