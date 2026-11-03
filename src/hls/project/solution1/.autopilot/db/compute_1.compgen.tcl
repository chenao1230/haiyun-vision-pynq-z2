# This script segment is generated automatically by AutoPilot

set id 144
set name conv_mul_mul_16s_wdI
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
set out_width 32
set exp i0*i1
set arg_lists {i0 {16 1 +} i1 {16 1 +} p {32 1 +} acc {0} }
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
    id 177 \
    name fm_in_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_in_buff_0_V \
    op interface \
    ports { fm_in_buff_0_V_address0 { O 8 vector } fm_in_buff_0_V_ce0 { O 1 bit } fm_in_buff_0_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 178 \
    name fm_in_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_in_buff_1_V \
    op interface \
    ports { fm_in_buff_1_V_address0 { O 8 vector } fm_in_buff_1_V_ce0 { O 1 bit } fm_in_buff_1_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 179 \
    name fm_in_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_in_buff_2_V \
    op interface \
    ports { fm_in_buff_2_V_address0 { O 8 vector } fm_in_buff_2_V_ce0 { O 1 bit } fm_in_buff_2_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 180 \
    name fm_in_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename fm_in_buff_3_V \
    op interface \
    ports { fm_in_buff_3_V_address0 { O 8 vector } fm_in_buff_3_V_ce0 { O 1 bit } fm_in_buff_3_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_in_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 181 \
    name fm_out_buff_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_0_V \
    op interface \
    ports { fm_out_buff_0_V_address0 { O 8 vector } fm_out_buff_0_V_ce0 { O 1 bit } fm_out_buff_0_V_q0 { I 16 vector } fm_out_buff_0_V_address1 { O 8 vector } fm_out_buff_0_V_ce1 { O 1 bit } fm_out_buff_0_V_we1 { O 1 bit } fm_out_buff_0_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 182 \
    name fm_out_buff_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_1_V \
    op interface \
    ports { fm_out_buff_1_V_address0 { O 8 vector } fm_out_buff_1_V_ce0 { O 1 bit } fm_out_buff_1_V_q0 { I 16 vector } fm_out_buff_1_V_address1 { O 8 vector } fm_out_buff_1_V_ce1 { O 1 bit } fm_out_buff_1_V_we1 { O 1 bit } fm_out_buff_1_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name fm_out_buff_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_2_V \
    op interface \
    ports { fm_out_buff_2_V_address0 { O 8 vector } fm_out_buff_2_V_ce0 { O 1 bit } fm_out_buff_2_V_q0 { I 16 vector } fm_out_buff_2_V_address1 { O 8 vector } fm_out_buff_2_V_ce1 { O 1 bit } fm_out_buff_2_V_we1 { O 1 bit } fm_out_buff_2_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name fm_out_buff_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_3_V \
    op interface \
    ports { fm_out_buff_3_V_address0 { O 8 vector } fm_out_buff_3_V_ce0 { O 1 bit } fm_out_buff_3_V_q0 { I 16 vector } fm_out_buff_3_V_address1 { O 8 vector } fm_out_buff_3_V_ce1 { O 1 bit } fm_out_buff_3_V_we1 { O 1 bit } fm_out_buff_3_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name fm_out_buff_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_4_V \
    op interface \
    ports { fm_out_buff_4_V_address0 { O 8 vector } fm_out_buff_4_V_ce0 { O 1 bit } fm_out_buff_4_V_q0 { I 16 vector } fm_out_buff_4_V_address1 { O 8 vector } fm_out_buff_4_V_ce1 { O 1 bit } fm_out_buff_4_V_we1 { O 1 bit } fm_out_buff_4_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name fm_out_buff_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_5_V \
    op interface \
    ports { fm_out_buff_5_V_address0 { O 8 vector } fm_out_buff_5_V_ce0 { O 1 bit } fm_out_buff_5_V_q0 { I 16 vector } fm_out_buff_5_V_address1 { O 8 vector } fm_out_buff_5_V_ce1 { O 1 bit } fm_out_buff_5_V_we1 { O 1 bit } fm_out_buff_5_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name fm_out_buff_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_6_V \
    op interface \
    ports { fm_out_buff_6_V_address0 { O 8 vector } fm_out_buff_6_V_ce0 { O 1 bit } fm_out_buff_6_V_q0 { I 16 vector } fm_out_buff_6_V_address1 { O 8 vector } fm_out_buff_6_V_ce1 { O 1 bit } fm_out_buff_6_V_we1 { O 1 bit } fm_out_buff_6_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 188 \
    name fm_out_buff_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename fm_out_buff_7_V \
    op interface \
    ports { fm_out_buff_7_V_address0 { O 8 vector } fm_out_buff_7_V_ce0 { O 1 bit } fm_out_buff_7_V_q0 { I 16 vector } fm_out_buff_7_V_address1 { O 8 vector } fm_out_buff_7_V_ce1 { O 1 bit } fm_out_buff_7_V_we1 { O 1 bit } fm_out_buff_7_V_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'fm_out_buff_7_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name wt_buff_0_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_0_0_V_read \
    op interface \
    ports { wt_buff_0_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name wt_buff_0_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_0_1_V_read \
    op interface \
    ports { wt_buff_0_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name wt_buff_0_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_0_2_V_read \
    op interface \
    ports { wt_buff_0_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name wt_buff_0_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_0_3_V_read \
    op interface \
    ports { wt_buff_0_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name wt_buff_1_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_1_0_V_read \
    op interface \
    ports { wt_buff_1_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name wt_buff_1_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_1_1_V_read \
    op interface \
    ports { wt_buff_1_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name wt_buff_1_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_1_2_V_read \
    op interface \
    ports { wt_buff_1_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name wt_buff_1_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_1_3_V_read \
    op interface \
    ports { wt_buff_1_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name wt_buff_2_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_2_0_V_read \
    op interface \
    ports { wt_buff_2_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name wt_buff_2_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_2_1_V_read \
    op interface \
    ports { wt_buff_2_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name wt_buff_2_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_2_2_V_read \
    op interface \
    ports { wt_buff_2_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name wt_buff_2_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_2_3_V_read \
    op interface \
    ports { wt_buff_2_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name wt_buff_3_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_3_0_V_read \
    op interface \
    ports { wt_buff_3_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name wt_buff_3_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_3_1_V_read \
    op interface \
    ports { wt_buff_3_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name wt_buff_3_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_3_2_V_read \
    op interface \
    ports { wt_buff_3_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name wt_buff_3_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_3_3_V_read \
    op interface \
    ports { wt_buff_3_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name wt_buff_4_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_4_0_V_read \
    op interface \
    ports { wt_buff_4_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name wt_buff_4_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_4_1_V_read \
    op interface \
    ports { wt_buff_4_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name wt_buff_4_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_4_2_V_read \
    op interface \
    ports { wt_buff_4_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name wt_buff_4_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_4_3_V_read \
    op interface \
    ports { wt_buff_4_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name wt_buff_5_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_5_0_V_read \
    op interface \
    ports { wt_buff_5_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name wt_buff_5_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_5_1_V_read \
    op interface \
    ports { wt_buff_5_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name wt_buff_5_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_5_2_V_read \
    op interface \
    ports { wt_buff_5_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name wt_buff_5_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_5_3_V_read \
    op interface \
    ports { wt_buff_5_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name wt_buff_6_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_6_0_V_read \
    op interface \
    ports { wt_buff_6_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name wt_buff_6_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_6_1_V_read \
    op interface \
    ports { wt_buff_6_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name wt_buff_6_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_6_2_V_read \
    op interface \
    ports { wt_buff_6_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name wt_buff_6_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_6_3_V_read \
    op interface \
    ports { wt_buff_6_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name wt_buff_7_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_7_0_V_read \
    op interface \
    ports { wt_buff_7_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name wt_buff_7_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_7_1_V_read \
    op interface \
    ports { wt_buff_7_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name wt_buff_7_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_7_2_V_read \
    op interface \
    ports { wt_buff_7_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name wt_buff_7_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_wt_buff_7_3_V_read \
    op interface \
    ports { wt_buff_7_3_V_read { I 16 vector } } \
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


