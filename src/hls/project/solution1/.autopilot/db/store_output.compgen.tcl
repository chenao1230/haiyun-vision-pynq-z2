# This script segment is generated automatically by AutoPilot

set id 945
set name conv_urem_11ns_5nfq0
set corename simcore_urem
set op urem
set stage_num 15
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 11
set in0_signed 0
set in1_width 5
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 11
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
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
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
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
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 947
set name conv_mul_mul_16s_fr0
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
set in0_signed 1
set in1_width 16
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 16
set exp i0*i1
set arg_lists {i0 {16 1 +} i1 {16 1 +} p {16 1 +} acc {0} }
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


set id 949
set name conv_am_addmul_16fs0
set corename simcore_am
set op am
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 0
set in1_width 6
set in1_signed 0
set in2_width 16
set in2_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set exp (i0+i1)*i2
set arg_lists {i0 {16 0 +} i1 {6 0 +} s {17 0 +} i2 {16 0 +} p {32 0 +} c_expval {c} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_am] == "ap_gen_simcore_am"} {
eval "ap_gen_simcore_am { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_am, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op am
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


set id 950
set name conv_ama_addmuladft1
set corename simcore_ama
set op ama
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 0
set in1_width 4
set in1_signed 0
set in2_width 16
set in2_signed 0
set in3_width 16
set in3_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set exp (i0+i1)*i2+i3
set arg_lists {i0 {16 0 +} i1 {4 0 +} s {17 0 +} i2 {16 0 +} m {32 0 +} i3 {16 0 +} p {32 0 +} c_expval {c} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_ama] == "ap_gen_simcore_ama"} {
eval "ap_gen_simcore_ama { \
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
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_ama, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op ama
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
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
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
    id 962 \
    name fm_out_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_0_V \
    op interface \
    ports { fm_out_buff_0_V_address0 { O 8 vector } fm_out_buff_0_V_ce0 { O 1 bit } fm_out_buff_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 963 \
    name fm_out_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_1_V \
    op interface \
    ports { fm_out_buff_1_V_address0 { O 8 vector } fm_out_buff_1_V_ce0 { O 1 bit } fm_out_buff_1_V_q0 { I 16 vector } fm_out_buff_1_V_address1 { O 8 vector } fm_out_buff_1_V_ce1 { O 1 bit } fm_out_buff_1_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 964 \
    name fm_out_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_2_V \
    op interface \
    ports { fm_out_buff_2_V_address0 { O 8 vector } fm_out_buff_2_V_ce0 { O 1 bit } fm_out_buff_2_V_q0 { I 16 vector } fm_out_buff_2_V_address1 { O 8 vector } fm_out_buff_2_V_ce1 { O 1 bit } fm_out_buff_2_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 965 \
    name fm_out_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_3_V \
    op interface \
    ports { fm_out_buff_3_V_address0 { O 8 vector } fm_out_buff_3_V_ce0 { O 1 bit } fm_out_buff_3_V_q0 { I 16 vector } fm_out_buff_3_V_address1 { O 8 vector } fm_out_buff_3_V_ce1 { O 1 bit } fm_out_buff_3_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 966 \
    name fm_out_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_4_V \
    op interface \
    ports { fm_out_buff_4_V_address0 { O 8 vector } fm_out_buff_4_V_ce0 { O 1 bit } fm_out_buff_4_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 967 \
    name fm_out_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_5_V \
    op interface \
    ports { fm_out_buff_5_V_address0 { O 8 vector } fm_out_buff_5_V_ce0 { O 1 bit } fm_out_buff_5_V_q0 { I 16 vector } fm_out_buff_5_V_address1 { O 8 vector } fm_out_buff_5_V_ce1 { O 1 bit } fm_out_buff_5_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 968 \
    name fm_out_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_6_V \
    op interface \
    ports { fm_out_buff_6_V_address0 { O 8 vector } fm_out_buff_6_V_ce0 { O 1 bit } fm_out_buff_6_V_q0 { I 16 vector } fm_out_buff_6_V_address1 { O 8 vector } fm_out_buff_6_V_ce1 { O 1 bit } fm_out_buff_6_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 969 \
    name fm_out_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_7_V \
    op interface \
    ports { fm_out_buff_7_V_address0 { O 8 vector } fm_out_buff_7_V_ce0 { O 1 bit } fm_out_buff_7_V_q0 { I 16 vector } fm_out_buff_7_V_address1 { O 8 vector } fm_out_buff_7_V_ce1 { O 1 bit } fm_out_buff_7_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 970 \
    name fm_out_buff_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_8_V \
    op interface \
    ports { fm_out_buff_8_V_address0 { O 8 vector } fm_out_buff_8_V_ce0 { O 1 bit } fm_out_buff_8_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 971 \
    name fm_out_buff_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_9_V \
    op interface \
    ports { fm_out_buff_9_V_address0 { O 8 vector } fm_out_buff_9_V_ce0 { O 1 bit } fm_out_buff_9_V_q0 { I 16 vector } fm_out_buff_9_V_address1 { O 8 vector } fm_out_buff_9_V_ce1 { O 1 bit } fm_out_buff_9_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 972 \
    name fm_out_buff_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_10_V \
    op interface \
    ports { fm_out_buff_10_V_address0 { O 8 vector } fm_out_buff_10_V_ce0 { O 1 bit } fm_out_buff_10_V_q0 { I 16 vector } fm_out_buff_10_V_address1 { O 8 vector } fm_out_buff_10_V_ce1 { O 1 bit } fm_out_buff_10_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 973 \
    name fm_out_buff_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_11_V \
    op interface \
    ports { fm_out_buff_11_V_address0 { O 8 vector } fm_out_buff_11_V_ce0 { O 1 bit } fm_out_buff_11_V_q0 { I 16 vector } fm_out_buff_11_V_address1 { O 8 vector } fm_out_buff_11_V_ce1 { O 1 bit } fm_out_buff_11_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 974 \
    name fm_out_buff_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_12_V \
    op interface \
    ports { fm_out_buff_12_V_address0 { O 8 vector } fm_out_buff_12_V_ce0 { O 1 bit } fm_out_buff_12_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 975 \
    name fm_out_buff_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_13_V \
    op interface \
    ports { fm_out_buff_13_V_address0 { O 8 vector } fm_out_buff_13_V_ce0 { O 1 bit } fm_out_buff_13_V_q0 { I 16 vector } fm_out_buff_13_V_address1 { O 8 vector } fm_out_buff_13_V_ce1 { O 1 bit } fm_out_buff_13_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 976 \
    name fm_out_buff_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_14_V \
    op interface \
    ports { fm_out_buff_14_V_address0 { O 8 vector } fm_out_buff_14_V_ce0 { O 1 bit } fm_out_buff_14_V_q0 { I 16 vector } fm_out_buff_14_V_address1 { O 8 vector } fm_out_buff_14_V_ce1 { O 1 bit } fm_out_buff_14_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 977 \
    name fm_out_buff_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_15_V \
    op interface \
    ports { fm_out_buff_15_V_address0 { O 8 vector } fm_out_buff_15_V_ce0 { O 1 bit } fm_out_buff_15_V_q0 { I 16 vector } fm_out_buff_15_V_address1 { O 8 vector } fm_out_buff_15_V_ce1 { O 1 bit } fm_out_buff_15_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_15_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 978 \
    name fm_out_buff_16_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_16_V \
    op interface \
    ports { fm_out_buff_16_V_address0 { O 8 vector } fm_out_buff_16_V_ce0 { O 1 bit } fm_out_buff_16_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_16_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 979 \
    name fm_out_buff_17_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_17_V \
    op interface \
    ports { fm_out_buff_17_V_address0 { O 8 vector } fm_out_buff_17_V_ce0 { O 1 bit } fm_out_buff_17_V_q0 { I 16 vector } fm_out_buff_17_V_address1 { O 8 vector } fm_out_buff_17_V_ce1 { O 1 bit } fm_out_buff_17_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_17_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 980 \
    name fm_out_buff_18_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_18_V \
    op interface \
    ports { fm_out_buff_18_V_address0 { O 8 vector } fm_out_buff_18_V_ce0 { O 1 bit } fm_out_buff_18_V_q0 { I 16 vector } fm_out_buff_18_V_address1 { O 8 vector } fm_out_buff_18_V_ce1 { O 1 bit } fm_out_buff_18_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_18_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 981 \
    name fm_out_buff_19_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_19_V \
    op interface \
    ports { fm_out_buff_19_V_address0 { O 8 vector } fm_out_buff_19_V_ce0 { O 1 bit } fm_out_buff_19_V_q0 { I 16 vector } fm_out_buff_19_V_address1 { O 8 vector } fm_out_buff_19_V_ce1 { O 1 bit } fm_out_buff_19_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_19_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 982 \
    name fm_out_buff_20_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_20_V \
    op interface \
    ports { fm_out_buff_20_V_address0 { O 8 vector } fm_out_buff_20_V_ce0 { O 1 bit } fm_out_buff_20_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_20_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 983 \
    name fm_out_buff_21_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_21_V \
    op interface \
    ports { fm_out_buff_21_V_address0 { O 8 vector } fm_out_buff_21_V_ce0 { O 1 bit } fm_out_buff_21_V_q0 { I 16 vector } fm_out_buff_21_V_address1 { O 8 vector } fm_out_buff_21_V_ce1 { O 1 bit } fm_out_buff_21_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_21_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 984 \
    name fm_out_buff_22_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_22_V \
    op interface \
    ports { fm_out_buff_22_V_address0 { O 8 vector } fm_out_buff_22_V_ce0 { O 1 bit } fm_out_buff_22_V_q0 { I 16 vector } fm_out_buff_22_V_address1 { O 8 vector } fm_out_buff_22_V_ce1 { O 1 bit } fm_out_buff_22_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_22_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 985 \
    name fm_out_buff_23_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_23_V \
    op interface \
    ports { fm_out_buff_23_V_address0 { O 8 vector } fm_out_buff_23_V_ce0 { O 1 bit } fm_out_buff_23_V_q0 { I 16 vector } fm_out_buff_23_V_address1 { O 8 vector } fm_out_buff_23_V_ce1 { O 1 bit } fm_out_buff_23_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_23_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 986 \
    name fm_out_buff_24_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_24_V \
    op interface \
    ports { fm_out_buff_24_V_address0 { O 8 vector } fm_out_buff_24_V_ce0 { O 1 bit } fm_out_buff_24_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_24_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 987 \
    name fm_out_buff_25_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_25_V \
    op interface \
    ports { fm_out_buff_25_V_address0 { O 8 vector } fm_out_buff_25_V_ce0 { O 1 bit } fm_out_buff_25_V_q0 { I 16 vector } fm_out_buff_25_V_address1 { O 8 vector } fm_out_buff_25_V_ce1 { O 1 bit } fm_out_buff_25_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_25_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 988 \
    name fm_out_buff_26_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_26_V \
    op interface \
    ports { fm_out_buff_26_V_address0 { O 8 vector } fm_out_buff_26_V_ce0 { O 1 bit } fm_out_buff_26_V_q0 { I 16 vector } fm_out_buff_26_V_address1 { O 8 vector } fm_out_buff_26_V_ce1 { O 1 bit } fm_out_buff_26_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_26_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 989 \
    name fm_out_buff_27_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_27_V \
    op interface \
    ports { fm_out_buff_27_V_address0 { O 8 vector } fm_out_buff_27_V_ce0 { O 1 bit } fm_out_buff_27_V_q0 { I 16 vector } fm_out_buff_27_V_address1 { O 8 vector } fm_out_buff_27_V_ce1 { O 1 bit } fm_out_buff_27_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_27_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 990 \
    name fm_out_buff_28_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_28_V \
    op interface \
    ports { fm_out_buff_28_V_address0 { O 8 vector } fm_out_buff_28_V_ce0 { O 1 bit } fm_out_buff_28_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_28_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 991 \
    name fm_out_buff_29_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_29_V \
    op interface \
    ports { fm_out_buff_29_V_address0 { O 8 vector } fm_out_buff_29_V_ce0 { O 1 bit } fm_out_buff_29_V_q0 { I 16 vector } fm_out_buff_29_V_address1 { O 8 vector } fm_out_buff_29_V_ce1 { O 1 bit } fm_out_buff_29_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_29_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 992 \
    name fm_out_buff_30_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_30_V \
    op interface \
    ports { fm_out_buff_30_V_address0 { O 8 vector } fm_out_buff_30_V_ce0 { O 1 bit } fm_out_buff_30_V_q0 { I 16 vector } fm_out_buff_30_V_address1 { O 8 vector } fm_out_buff_30_V_ce1 { O 1 bit } fm_out_buff_30_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_30_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 993 \
    name fm_out_buff_31_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_out_buff_31_V \
    op interface \
    ports { fm_out_buff_31_V_address0 { O 8 vector } fm_out_buff_31_V_ce0 { O 1 bit } fm_out_buff_31_V_q0 { I 16 vector } fm_out_buff_31_V_address1 { O 8 vector } fm_out_buff_31_V_ce1 { O 1 bit } fm_out_buff_31_V_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_31_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 994 \
    name out1_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out1_V \
    op interface \
    ports { m_axi_out1_V_AWVALID { O 1 bit } m_axi_out1_V_AWREADY { I 1 bit } m_axi_out1_V_AWADDR { O 32 vector } m_axi_out1_V_AWID { O 1 vector } m_axi_out1_V_AWLEN { O 32 vector } m_axi_out1_V_AWSIZE { O 3 vector } m_axi_out1_V_AWBURST { O 2 vector } m_axi_out1_V_AWLOCK { O 2 vector } m_axi_out1_V_AWCACHE { O 4 vector } m_axi_out1_V_AWPROT { O 3 vector } m_axi_out1_V_AWQOS { O 4 vector } m_axi_out1_V_AWREGION { O 4 vector } m_axi_out1_V_AWUSER { O 1 vector } m_axi_out1_V_WVALID { O 1 bit } m_axi_out1_V_WREADY { I 1 bit } m_axi_out1_V_WDATA { O 16 vector } m_axi_out1_V_WSTRB { O 2 vector } m_axi_out1_V_WLAST { O 1 bit } m_axi_out1_V_WID { O 1 vector } m_axi_out1_V_WUSER { O 1 vector } m_axi_out1_V_ARVALID { O 1 bit } m_axi_out1_V_ARREADY { I 1 bit } m_axi_out1_V_ARADDR { O 32 vector } m_axi_out1_V_ARID { O 1 vector } m_axi_out1_V_ARLEN { O 32 vector } m_axi_out1_V_ARSIZE { O 3 vector } m_axi_out1_V_ARBURST { O 2 vector } m_axi_out1_V_ARLOCK { O 2 vector } m_axi_out1_V_ARCACHE { O 4 vector } m_axi_out1_V_ARPROT { O 3 vector } m_axi_out1_V_ARQOS { O 4 vector } m_axi_out1_V_ARREGION { O 4 vector } m_axi_out1_V_ARUSER { O 1 vector } m_axi_out1_V_RVALID { I 1 bit } m_axi_out1_V_RREADY { O 1 bit } m_axi_out1_V_RDATA { I 16 vector } m_axi_out1_V_RLAST { I 1 bit } m_axi_out1_V_RID { I 1 vector } m_axi_out1_V_RUSER { I 1 vector } m_axi_out1_V_RRESP { I 2 vector } m_axi_out1_V_BVALID { I 1 bit } m_axi_out1_V_BREADY { O 1 bit } m_axi_out1_V_BRESP { I 2 vector } m_axi_out1_V_BID { I 1 vector } m_axi_out1_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 995 \
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
    id 996 \
    name out2_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out2_V \
    op interface \
    ports { m_axi_out2_V_AWVALID { O 1 bit } m_axi_out2_V_AWREADY { I 1 bit } m_axi_out2_V_AWADDR { O 32 vector } m_axi_out2_V_AWID { O 1 vector } m_axi_out2_V_AWLEN { O 32 vector } m_axi_out2_V_AWSIZE { O 3 vector } m_axi_out2_V_AWBURST { O 2 vector } m_axi_out2_V_AWLOCK { O 2 vector } m_axi_out2_V_AWCACHE { O 4 vector } m_axi_out2_V_AWPROT { O 3 vector } m_axi_out2_V_AWQOS { O 4 vector } m_axi_out2_V_AWREGION { O 4 vector } m_axi_out2_V_AWUSER { O 1 vector } m_axi_out2_V_WVALID { O 1 bit } m_axi_out2_V_WREADY { I 1 bit } m_axi_out2_V_WDATA { O 16 vector } m_axi_out2_V_WSTRB { O 2 vector } m_axi_out2_V_WLAST { O 1 bit } m_axi_out2_V_WID { O 1 vector } m_axi_out2_V_WUSER { O 1 vector } m_axi_out2_V_ARVALID { O 1 bit } m_axi_out2_V_ARREADY { I 1 bit } m_axi_out2_V_ARADDR { O 32 vector } m_axi_out2_V_ARID { O 1 vector } m_axi_out2_V_ARLEN { O 32 vector } m_axi_out2_V_ARSIZE { O 3 vector } m_axi_out2_V_ARBURST { O 2 vector } m_axi_out2_V_ARLOCK { O 2 vector } m_axi_out2_V_ARCACHE { O 4 vector } m_axi_out2_V_ARPROT { O 3 vector } m_axi_out2_V_ARQOS { O 4 vector } m_axi_out2_V_ARREGION { O 4 vector } m_axi_out2_V_ARUSER { O 1 vector } m_axi_out2_V_RVALID { I 1 bit } m_axi_out2_V_RREADY { O 1 bit } m_axi_out2_V_RDATA { I 16 vector } m_axi_out2_V_RLAST { I 1 bit } m_axi_out2_V_RID { I 1 vector } m_axi_out2_V_RUSER { I 1 vector } m_axi_out2_V_RRESP { I 2 vector } m_axi_out2_V_BVALID { I 1 bit } m_axi_out2_V_BREADY { O 1 bit } m_axi_out2_V_BRESP { I 2 vector } m_axi_out2_V_BID { I 1 vector } m_axi_out2_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 997 \
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
    id 998 \
    name out3_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out3_V \
    op interface \
    ports { m_axi_out3_V_AWVALID { O 1 bit } m_axi_out3_V_AWREADY { I 1 bit } m_axi_out3_V_AWADDR { O 32 vector } m_axi_out3_V_AWID { O 1 vector } m_axi_out3_V_AWLEN { O 32 vector } m_axi_out3_V_AWSIZE { O 3 vector } m_axi_out3_V_AWBURST { O 2 vector } m_axi_out3_V_AWLOCK { O 2 vector } m_axi_out3_V_AWCACHE { O 4 vector } m_axi_out3_V_AWPROT { O 3 vector } m_axi_out3_V_AWQOS { O 4 vector } m_axi_out3_V_AWREGION { O 4 vector } m_axi_out3_V_AWUSER { O 1 vector } m_axi_out3_V_WVALID { O 1 bit } m_axi_out3_V_WREADY { I 1 bit } m_axi_out3_V_WDATA { O 16 vector } m_axi_out3_V_WSTRB { O 2 vector } m_axi_out3_V_WLAST { O 1 bit } m_axi_out3_V_WID { O 1 vector } m_axi_out3_V_WUSER { O 1 vector } m_axi_out3_V_ARVALID { O 1 bit } m_axi_out3_V_ARREADY { I 1 bit } m_axi_out3_V_ARADDR { O 32 vector } m_axi_out3_V_ARID { O 1 vector } m_axi_out3_V_ARLEN { O 32 vector } m_axi_out3_V_ARSIZE { O 3 vector } m_axi_out3_V_ARBURST { O 2 vector } m_axi_out3_V_ARLOCK { O 2 vector } m_axi_out3_V_ARCACHE { O 4 vector } m_axi_out3_V_ARPROT { O 3 vector } m_axi_out3_V_ARQOS { O 4 vector } m_axi_out3_V_ARREGION { O 4 vector } m_axi_out3_V_ARUSER { O 1 vector } m_axi_out3_V_RVALID { I 1 bit } m_axi_out3_V_RREADY { O 1 bit } m_axi_out3_V_RDATA { I 16 vector } m_axi_out3_V_RLAST { I 1 bit } m_axi_out3_V_RID { I 1 vector } m_axi_out3_V_RUSER { I 1 vector } m_axi_out3_V_RRESP { I 2 vector } m_axi_out3_V_BVALID { I 1 bit } m_axi_out3_V_BREADY { O 1 bit } m_axi_out3_V_BRESP { I 2 vector } m_axi_out3_V_BID { I 1 vector } m_axi_out3_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 999 \
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
    id 1000 \
    name out4_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out4_V \
    op interface \
    ports { m_axi_out4_V_AWVALID { O 1 bit } m_axi_out4_V_AWREADY { I 1 bit } m_axi_out4_V_AWADDR { O 32 vector } m_axi_out4_V_AWID { O 1 vector } m_axi_out4_V_AWLEN { O 32 vector } m_axi_out4_V_AWSIZE { O 3 vector } m_axi_out4_V_AWBURST { O 2 vector } m_axi_out4_V_AWLOCK { O 2 vector } m_axi_out4_V_AWCACHE { O 4 vector } m_axi_out4_V_AWPROT { O 3 vector } m_axi_out4_V_AWQOS { O 4 vector } m_axi_out4_V_AWREGION { O 4 vector } m_axi_out4_V_AWUSER { O 1 vector } m_axi_out4_V_WVALID { O 1 bit } m_axi_out4_V_WREADY { I 1 bit } m_axi_out4_V_WDATA { O 16 vector } m_axi_out4_V_WSTRB { O 2 vector } m_axi_out4_V_WLAST { O 1 bit } m_axi_out4_V_WID { O 1 vector } m_axi_out4_V_WUSER { O 1 vector } m_axi_out4_V_ARVALID { O 1 bit } m_axi_out4_V_ARREADY { I 1 bit } m_axi_out4_V_ARADDR { O 32 vector } m_axi_out4_V_ARID { O 1 vector } m_axi_out4_V_ARLEN { O 32 vector } m_axi_out4_V_ARSIZE { O 3 vector } m_axi_out4_V_ARBURST { O 2 vector } m_axi_out4_V_ARLOCK { O 2 vector } m_axi_out4_V_ARCACHE { O 4 vector } m_axi_out4_V_ARPROT { O 3 vector } m_axi_out4_V_ARQOS { O 4 vector } m_axi_out4_V_ARREGION { O 4 vector } m_axi_out4_V_ARUSER { O 1 vector } m_axi_out4_V_RVALID { I 1 bit } m_axi_out4_V_RREADY { O 1 bit } m_axi_out4_V_RDATA { I 16 vector } m_axi_out4_V_RLAST { I 1 bit } m_axi_out4_V_RID { I 1 vector } m_axi_out4_V_RUSER { I 1 vector } m_axi_out4_V_RRESP { I 2 vector } m_axi_out4_V_BVALID { I 1 bit } m_axi_out4_V_BREADY { O 1 bit } m_axi_out4_V_BRESP { I 2 vector } m_axi_out4_V_BID { I 1 vector } m_axi_out4_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1001 \
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
    id 1002 \
    name fm_row \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fm_row \
    op interface \
    ports { fm_row { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1003 \
    name fm_col \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_fm_col \
    op interface \
    ports { fm_col { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1004 \
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
    id 1005 \
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
    id 1006 \
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
    id 1007 \
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


