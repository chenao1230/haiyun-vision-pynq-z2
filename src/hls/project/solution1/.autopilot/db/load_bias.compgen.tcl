# This script segment is generated automatically by AutoPilot

set id 301
set name conv_mac_muladd_4Shg
set corename simcore_mac
set op mac
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 4
set in0_signed 0
set in1_width 5
set in1_signed 0
set in2_width 4
set in2_signed 0
set ce_width 1
set ce_signed 0
set out_width 8
set exp i0*i1+i2
set arg_lists {i0 {4 0 +} i1 {5 0 +} m {8 0 +} i2 {4 0 +} p {8 0 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
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
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
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
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
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
    id 303 \
    name fm_out_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_0_V \
    op interface \
    ports { fm_out_buff_0_V_address0 { O 8 vector } fm_out_buff_0_V_ce0 { O 1 bit } fm_out_buff_0_V_we0 { O 1 bit } fm_out_buff_0_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 304 \
    name fm_out_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_1_V \
    op interface \
    ports { fm_out_buff_1_V_address0 { O 8 vector } fm_out_buff_1_V_ce0 { O 1 bit } fm_out_buff_1_V_we0 { O 1 bit } fm_out_buff_1_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 305 \
    name fm_out_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_2_V \
    op interface \
    ports { fm_out_buff_2_V_address0 { O 8 vector } fm_out_buff_2_V_ce0 { O 1 bit } fm_out_buff_2_V_we0 { O 1 bit } fm_out_buff_2_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 306 \
    name fm_out_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_3_V \
    op interface \
    ports { fm_out_buff_3_V_address0 { O 8 vector } fm_out_buff_3_V_ce0 { O 1 bit } fm_out_buff_3_V_we0 { O 1 bit } fm_out_buff_3_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 307 \
    name fm_out_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_4_V \
    op interface \
    ports { fm_out_buff_4_V_address0 { O 8 vector } fm_out_buff_4_V_ce0 { O 1 bit } fm_out_buff_4_V_we0 { O 1 bit } fm_out_buff_4_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 308 \
    name fm_out_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_5_V \
    op interface \
    ports { fm_out_buff_5_V_address0 { O 8 vector } fm_out_buff_5_V_ce0 { O 1 bit } fm_out_buff_5_V_we0 { O 1 bit } fm_out_buff_5_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 309 \
    name fm_out_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_6_V \
    op interface \
    ports { fm_out_buff_6_V_address0 { O 8 vector } fm_out_buff_6_V_ce0 { O 1 bit } fm_out_buff_6_V_we0 { O 1 bit } fm_out_buff_6_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 310 \
    name fm_out_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_7_V \
    op interface \
    ports { fm_out_buff_7_V_address0 { O 8 vector } fm_out_buff_7_V_ce0 { O 1 bit } fm_out_buff_7_V_we0 { O 1 bit } fm_out_buff_7_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 311 \
    name fm_out_buff_8_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_8_V \
    op interface \
    ports { fm_out_buff_8_V_address0 { O 8 vector } fm_out_buff_8_V_ce0 { O 1 bit } fm_out_buff_8_V_we0 { O 1 bit } fm_out_buff_8_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 312 \
    name fm_out_buff_9_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_9_V \
    op interface \
    ports { fm_out_buff_9_V_address0 { O 8 vector } fm_out_buff_9_V_ce0 { O 1 bit } fm_out_buff_9_V_we0 { O 1 bit } fm_out_buff_9_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 313 \
    name fm_out_buff_10_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_10_V \
    op interface \
    ports { fm_out_buff_10_V_address0 { O 8 vector } fm_out_buff_10_V_ce0 { O 1 bit } fm_out_buff_10_V_we0 { O 1 bit } fm_out_buff_10_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 314 \
    name fm_out_buff_11_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_11_V \
    op interface \
    ports { fm_out_buff_11_V_address0 { O 8 vector } fm_out_buff_11_V_ce0 { O 1 bit } fm_out_buff_11_V_we0 { O 1 bit } fm_out_buff_11_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 315 \
    name fm_out_buff_12_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_12_V \
    op interface \
    ports { fm_out_buff_12_V_address0 { O 8 vector } fm_out_buff_12_V_ce0 { O 1 bit } fm_out_buff_12_V_we0 { O 1 bit } fm_out_buff_12_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 316 \
    name fm_out_buff_13_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_13_V \
    op interface \
    ports { fm_out_buff_13_V_address0 { O 8 vector } fm_out_buff_13_V_ce0 { O 1 bit } fm_out_buff_13_V_we0 { O 1 bit } fm_out_buff_13_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 317 \
    name fm_out_buff_14_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_14_V \
    op interface \
    ports { fm_out_buff_14_V_address0 { O 8 vector } fm_out_buff_14_V_ce0 { O 1 bit } fm_out_buff_14_V_we0 { O 1 bit } fm_out_buff_14_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 318 \
    name fm_out_buff_15_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_15_V \
    op interface \
    ports { fm_out_buff_15_V_address0 { O 8 vector } fm_out_buff_15_V_ce0 { O 1 bit } fm_out_buff_15_V_we0 { O 1 bit } fm_out_buff_15_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 319 \
    name fm_out_buff_16_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_16_V \
    op interface \
    ports { fm_out_buff_16_V_address0 { O 8 vector } fm_out_buff_16_V_ce0 { O 1 bit } fm_out_buff_16_V_we0 { O 1 bit } fm_out_buff_16_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 320 \
    name fm_out_buff_17_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_17_V \
    op interface \
    ports { fm_out_buff_17_V_address0 { O 8 vector } fm_out_buff_17_V_ce0 { O 1 bit } fm_out_buff_17_V_we0 { O 1 bit } fm_out_buff_17_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 321 \
    name fm_out_buff_18_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_18_V \
    op interface \
    ports { fm_out_buff_18_V_address0 { O 8 vector } fm_out_buff_18_V_ce0 { O 1 bit } fm_out_buff_18_V_we0 { O 1 bit } fm_out_buff_18_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 322 \
    name fm_out_buff_19_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_19_V \
    op interface \
    ports { fm_out_buff_19_V_address0 { O 8 vector } fm_out_buff_19_V_ce0 { O 1 bit } fm_out_buff_19_V_we0 { O 1 bit } fm_out_buff_19_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 323 \
    name fm_out_buff_20_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_20_V \
    op interface \
    ports { fm_out_buff_20_V_address0 { O 8 vector } fm_out_buff_20_V_ce0 { O 1 bit } fm_out_buff_20_V_we0 { O 1 bit } fm_out_buff_20_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 324 \
    name fm_out_buff_21_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_21_V \
    op interface \
    ports { fm_out_buff_21_V_address0 { O 8 vector } fm_out_buff_21_V_ce0 { O 1 bit } fm_out_buff_21_V_we0 { O 1 bit } fm_out_buff_21_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 325 \
    name fm_out_buff_22_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_22_V \
    op interface \
    ports { fm_out_buff_22_V_address0 { O 8 vector } fm_out_buff_22_V_ce0 { O 1 bit } fm_out_buff_22_V_we0 { O 1 bit } fm_out_buff_22_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 326 \
    name fm_out_buff_23_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_23_V \
    op interface \
    ports { fm_out_buff_23_V_address0 { O 8 vector } fm_out_buff_23_V_ce0 { O 1 bit } fm_out_buff_23_V_we0 { O 1 bit } fm_out_buff_23_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 327 \
    name fm_out_buff_24_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_24_V \
    op interface \
    ports { fm_out_buff_24_V_address0 { O 8 vector } fm_out_buff_24_V_ce0 { O 1 bit } fm_out_buff_24_V_we0 { O 1 bit } fm_out_buff_24_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 328 \
    name fm_out_buff_25_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_25_V \
    op interface \
    ports { fm_out_buff_25_V_address0 { O 8 vector } fm_out_buff_25_V_ce0 { O 1 bit } fm_out_buff_25_V_we0 { O 1 bit } fm_out_buff_25_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 329 \
    name fm_out_buff_26_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_26_V \
    op interface \
    ports { fm_out_buff_26_V_address0 { O 8 vector } fm_out_buff_26_V_ce0 { O 1 bit } fm_out_buff_26_V_we0 { O 1 bit } fm_out_buff_26_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 330 \
    name fm_out_buff_27_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_27_V \
    op interface \
    ports { fm_out_buff_27_V_address0 { O 8 vector } fm_out_buff_27_V_ce0 { O 1 bit } fm_out_buff_27_V_we0 { O 1 bit } fm_out_buff_27_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 331 \
    name fm_out_buff_28_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_28_V \
    op interface \
    ports { fm_out_buff_28_V_address0 { O 8 vector } fm_out_buff_28_V_ce0 { O 1 bit } fm_out_buff_28_V_we0 { O 1 bit } fm_out_buff_28_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 332 \
    name fm_out_buff_29_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_29_V \
    op interface \
    ports { fm_out_buff_29_V_address0 { O 8 vector } fm_out_buff_29_V_ce0 { O 1 bit } fm_out_buff_29_V_we0 { O 1 bit } fm_out_buff_29_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 333 \
    name fm_out_buff_30_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_30_V \
    op interface \
    ports { fm_out_buff_30_V_address0 { O 8 vector } fm_out_buff_30_V_ce0 { O 1 bit } fm_out_buff_30_V_we0 { O 1 bit } fm_out_buff_30_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 334 \
    name fm_out_buff_31_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_out_buff_31_V \
    op interface \
    ports { fm_out_buff_31_V_address0 { O 8 vector } fm_out_buff_31_V_ce0 { O 1 bit } fm_out_buff_31_V_we0 { O 1 bit } fm_out_buff_31_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_31_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 335 \
    name bias_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_0_V \
    op interface \
    ports { bias_buff_0_V_address0 { O 4 vector } bias_buff_0_V_ce0 { O 1 bit } bias_buff_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 336 \
    name bias_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_1_V \
    op interface \
    ports { bias_buff_1_V_address0 { O 4 vector } bias_buff_1_V_ce0 { O 1 bit } bias_buff_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 337 \
    name bias_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_2_V \
    op interface \
    ports { bias_buff_2_V_address0 { O 4 vector } bias_buff_2_V_ce0 { O 1 bit } bias_buff_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 338 \
    name bias_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_3_V \
    op interface \
    ports { bias_buff_3_V_address0 { O 4 vector } bias_buff_3_V_ce0 { O 1 bit } bias_buff_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 339 \
    name bias_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_4_V \
    op interface \
    ports { bias_buff_4_V_address0 { O 4 vector } bias_buff_4_V_ce0 { O 1 bit } bias_buff_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 340 \
    name bias_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_5_V \
    op interface \
    ports { bias_buff_5_V_address0 { O 4 vector } bias_buff_5_V_ce0 { O 1 bit } bias_buff_5_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 341 \
    name bias_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_6_V \
    op interface \
    ports { bias_buff_6_V_address0 { O 4 vector } bias_buff_6_V_ce0 { O 1 bit } bias_buff_6_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 342 \
    name bias_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_7_V \
    op interface \
    ports { bias_buff_7_V_address0 { O 4 vector } bias_buff_7_V_ce0 { O 1 bit } bias_buff_7_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 343 \
    name bias_buff_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_8_V \
    op interface \
    ports { bias_buff_8_V_address0 { O 4 vector } bias_buff_8_V_ce0 { O 1 bit } bias_buff_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 344 \
    name bias_buff_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_9_V \
    op interface \
    ports { bias_buff_9_V_address0 { O 4 vector } bias_buff_9_V_ce0 { O 1 bit } bias_buff_9_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 345 \
    name bias_buff_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_10_V \
    op interface \
    ports { bias_buff_10_V_address0 { O 4 vector } bias_buff_10_V_ce0 { O 1 bit } bias_buff_10_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 346 \
    name bias_buff_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_11_V \
    op interface \
    ports { bias_buff_11_V_address0 { O 4 vector } bias_buff_11_V_ce0 { O 1 bit } bias_buff_11_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 347 \
    name bias_buff_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_12_V \
    op interface \
    ports { bias_buff_12_V_address0 { O 4 vector } bias_buff_12_V_ce0 { O 1 bit } bias_buff_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 348 \
    name bias_buff_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_13_V \
    op interface \
    ports { bias_buff_13_V_address0 { O 4 vector } bias_buff_13_V_ce0 { O 1 bit } bias_buff_13_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 349 \
    name bias_buff_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_14_V \
    op interface \
    ports { bias_buff_14_V_address0 { O 4 vector } bias_buff_14_V_ce0 { O 1 bit } bias_buff_14_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 350 \
    name bias_buff_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_15_V \
    op interface \
    ports { bias_buff_15_V_address0 { O 4 vector } bias_buff_15_V_ce0 { O 1 bit } bias_buff_15_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 351 \
    name bias_buff_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_16_V \
    op interface \
    ports { bias_buff_16_V_address0 { O 4 vector } bias_buff_16_V_ce0 { O 1 bit } bias_buff_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 352 \
    name bias_buff_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_17_V \
    op interface \
    ports { bias_buff_17_V_address0 { O 4 vector } bias_buff_17_V_ce0 { O 1 bit } bias_buff_17_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 353 \
    name bias_buff_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_18_V \
    op interface \
    ports { bias_buff_18_V_address0 { O 4 vector } bias_buff_18_V_ce0 { O 1 bit } bias_buff_18_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 354 \
    name bias_buff_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_19_V \
    op interface \
    ports { bias_buff_19_V_address0 { O 4 vector } bias_buff_19_V_ce0 { O 1 bit } bias_buff_19_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 355 \
    name bias_buff_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_20_V \
    op interface \
    ports { bias_buff_20_V_address0 { O 4 vector } bias_buff_20_V_ce0 { O 1 bit } bias_buff_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 356 \
    name bias_buff_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_21_V \
    op interface \
    ports { bias_buff_21_V_address0 { O 4 vector } bias_buff_21_V_ce0 { O 1 bit } bias_buff_21_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 357 \
    name bias_buff_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_22_V \
    op interface \
    ports { bias_buff_22_V_address0 { O 4 vector } bias_buff_22_V_ce0 { O 1 bit } bias_buff_22_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 358 \
    name bias_buff_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_23_V \
    op interface \
    ports { bias_buff_23_V_address0 { O 4 vector } bias_buff_23_V_ce0 { O 1 bit } bias_buff_23_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 359 \
    name bias_buff_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_24_V \
    op interface \
    ports { bias_buff_24_V_address0 { O 4 vector } bias_buff_24_V_ce0 { O 1 bit } bias_buff_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 360 \
    name bias_buff_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_25_V \
    op interface \
    ports { bias_buff_25_V_address0 { O 4 vector } bias_buff_25_V_ce0 { O 1 bit } bias_buff_25_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 361 \
    name bias_buff_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_26_V \
    op interface \
    ports { bias_buff_26_V_address0 { O 4 vector } bias_buff_26_V_ce0 { O 1 bit } bias_buff_26_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 362 \
    name bias_buff_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_27_V \
    op interface \
    ports { bias_buff_27_V_address0 { O 4 vector } bias_buff_27_V_ce0 { O 1 bit } bias_buff_27_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 363 \
    name bias_buff_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_28_V \
    op interface \
    ports { bias_buff_28_V_address0 { O 4 vector } bias_buff_28_V_ce0 { O 1 bit } bias_buff_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 364 \
    name bias_buff_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_29_V \
    op interface \
    ports { bias_buff_29_V_address0 { O 4 vector } bias_buff_29_V_ce0 { O 1 bit } bias_buff_29_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 365 \
    name bias_buff_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_30_V \
    op interface \
    ports { bias_buff_30_V_address0 { O 4 vector } bias_buff_30_V_ce0 { O 1 bit } bias_buff_30_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 366 \
    name bias_buff_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename bias_buff_31_V \
    op interface \
    ports { bias_buff_31_V_address0 { O 4 vector } bias_buff_31_V_ce0 { O 1 bit } bias_buff_31_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'bias_buff_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
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


