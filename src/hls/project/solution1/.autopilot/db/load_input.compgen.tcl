# This script segment is generated automatically by AutoPilot

set id 368
set name conv_urem_10ns_6nThq
set corename simcore_urem
set op urem
set stage_num 14
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 10
set in0_signed 0
set in1_width 6
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 10
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


set id 369
set name conv_mul_16ns_5nsUhA
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 0
set in1_width 5
set in1_signed 0
set out_width 21
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename Mul_LUT
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 370
set name conv_urem_8ns_5nsVhK
set corename simcore_urem
set op urem
set stage_num 12
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 8
set in0_signed 0
set in1_width 5
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 8
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


set id 371
set name conv_mul_16ns_4nsWhU
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 0
set in1_width 4
set in1_signed 0
set out_width 20
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename Mul_LUT
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 373
set name conv_mul_mul_17s_Xh4
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 17
set in0_signed 1
set in1_width 16
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set exp i0*i1
set arg_lists {i0 {17 1 +} i1 {16 0 +} p {32 1 +} acc {0} }
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


set id 374
set name conv_mac_muladd_1Yie
set corename simcore_mac
set op mac
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 18
set in0_signed 0
set in1_width 16
set in1_signed 0
set in2_width 32
set in2_signed 1
set ce_width 1
set ce_signed 0
set out_width 32
set exp i0*i1+i2
set arg_lists {i0 {18 0 +} i1 {16 0 +} m {32 0 +} i2 {32 1 +} p {32 1 +} c_reg {1} rnd {0} acc {0} }
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


set id 376
set name conv_mac_muladd_5Zio
set corename simcore_mac
set op mac
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 5
set in0_signed 0
set in1_width 6
set in1_signed 0
set in2_width 5
set in2_signed 0
set ce_width 1
set ce_signed 0
set out_width 10
set exp i0*i1+i2
set arg_lists {i0 {5 0 +} i1 {6 0 +} m {10 0 +} i2 {5 0 +} p {10 0 +} c_reg {1} rnd {0} acc {0} }
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


set id 377
set name conv_mac_muladd_40iy
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
set in1_width 6
set in1_signed 0
set in2_width 4
set in2_signed 0
set ce_width 1
set ce_signed 0
set out_width 9
set exp i0*i1+i2
set arg_lists {i0 {4 0 +} i1 {6 0 +} m {9 0 +} i2 {4 0 +} p {9 0 +} c_reg {1} rnd {0} acc {0} }
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
    id 386 \
    name fm_in_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_in_buff_0_V \
    op interface \
    ports { fm_in_buff_0_V_address0 { O 10 vector } fm_in_buff_0_V_ce0 { O 1 bit } fm_in_buff_0_V_we0 { O 1 bit } fm_in_buff_0_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 387 \
    name fm_in_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_in_buff_1_V \
    op interface \
    ports { fm_in_buff_1_V_address0 { O 10 vector } fm_in_buff_1_V_ce0 { O 1 bit } fm_in_buff_1_V_we0 { O 1 bit } fm_in_buff_1_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 388 \
    name fm_in_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_in_buff_2_V \
    op interface \
    ports { fm_in_buff_2_V_address0 { O 10 vector } fm_in_buff_2_V_ce0 { O 1 bit } fm_in_buff_2_V_we0 { O 1 bit } fm_in_buff_2_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 389 \
    name fm_in_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename fm_in_buff_3_V \
    op interface \
    ports { fm_in_buff_3_V_address0 { O 10 vector } fm_in_buff_3_V_ce0 { O 1 bit } fm_in_buff_3_V_we0 { O 1 bit } fm_in_buff_3_V_d0 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_3_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
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
    id 391 \
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
    id 392 \
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
    id 393 \
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
    id 394 \
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
    id 395 \
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
    id 396 \
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
    id 397 \
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
    id 398 \
    name n \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_n \
    op interface \
    ports { n { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
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
    id 400 \
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
    id 401 \
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
    id 402 \
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


