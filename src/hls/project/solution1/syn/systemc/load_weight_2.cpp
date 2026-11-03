#include "load_weight.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void load_weight::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state4.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter12 = ap_enable_reg_pp0_iter11.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter13 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter13 = ap_enable_reg_pp0_iter12.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter14 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter14 = ap_enable_reg_pp0_iter13.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter15 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter15 = ap_enable_reg_pp0_iter14.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter16 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter16 = ap_enable_reg_pp0_iter15.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter17 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter17 = ap_enable_reg_pp0_iter16.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter18 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter18 = ap_enable_reg_pp0_iter17.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter19 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter19 = ap_enable_reg_pp0_iter18.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter20 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter20 = ap_enable_reg_pp0_iter19.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter21 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter21 = ap_enable_reg_pp0_iter20.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter21 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961.read()))) {
        indvar_flatten_reg_2332 = add_ln82_reg_2965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        indvar_flatten_reg_2332 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        k_0_reg_2356 = k_reg_2983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        k_0_reg_2356 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter9_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        mm_0_reg_2344 = select_ln91_2_reg_3001.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        mm_0_reg_2344 = ap_const_lv6_0;
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln203_13_reg_3114 = add_ln203_13_fu_2715_p2.read();
        add_ln203_13_reg_3114_pp0_iter20_reg = add_ln203_13_reg_3114.read();
        icmp_ln82_reg_2961_pp0_iter10_reg = icmp_ln82_reg_2961_pp0_iter9_reg.read();
        icmp_ln82_reg_2961_pp0_iter11_reg = icmp_ln82_reg_2961_pp0_iter10_reg.read();
        icmp_ln82_reg_2961_pp0_iter12_reg = icmp_ln82_reg_2961_pp0_iter11_reg.read();
        icmp_ln82_reg_2961_pp0_iter13_reg = icmp_ln82_reg_2961_pp0_iter12_reg.read();
        icmp_ln82_reg_2961_pp0_iter14_reg = icmp_ln82_reg_2961_pp0_iter13_reg.read();
        icmp_ln82_reg_2961_pp0_iter15_reg = icmp_ln82_reg_2961_pp0_iter14_reg.read();
        icmp_ln82_reg_2961_pp0_iter16_reg = icmp_ln82_reg_2961_pp0_iter15_reg.read();
        icmp_ln82_reg_2961_pp0_iter2_reg = icmp_ln82_reg_2961_pp0_iter1_reg.read();
        icmp_ln82_reg_2961_pp0_iter3_reg = icmp_ln82_reg_2961_pp0_iter2_reg.read();
        icmp_ln82_reg_2961_pp0_iter4_reg = icmp_ln82_reg_2961_pp0_iter3_reg.read();
        icmp_ln82_reg_2961_pp0_iter5_reg = icmp_ln82_reg_2961_pp0_iter4_reg.read();
        icmp_ln82_reg_2961_pp0_iter6_reg = icmp_ln82_reg_2961_pp0_iter5_reg.read();
        icmp_ln82_reg_2961_pp0_iter7_reg = icmp_ln82_reg_2961_pp0_iter6_reg.read();
        icmp_ln82_reg_2961_pp0_iter8_reg = icmp_ln82_reg_2961_pp0_iter7_reg.read();
        icmp_ln82_reg_2961_pp0_iter9_reg = icmp_ln82_reg_2961_pp0_iter8_reg.read();
        icmp_ln83_reg_2970_pp0_iter8_reg = icmp_ln83_reg_2970.read();
        icmp_ln94_reg_3022 = icmp_ln94_fu_2568_p2.read();
        icmp_ln94_reg_3022_pp0_iter10_reg = icmp_ln94_reg_3022.read();
        icmp_ln94_reg_3022_pp0_iter11_reg = icmp_ln94_reg_3022_pp0_iter10_reg.read();
        icmp_ln94_reg_3022_pp0_iter12_reg = icmp_ln94_reg_3022_pp0_iter11_reg.read();
        icmp_ln94_reg_3022_pp0_iter13_reg = icmp_ln94_reg_3022_pp0_iter12_reg.read();
        icmp_ln94_reg_3022_pp0_iter14_reg = icmp_ln94_reg_3022_pp0_iter13_reg.read();
        icmp_ln94_reg_3022_pp0_iter15_reg = icmp_ln94_reg_3022_pp0_iter14_reg.read();
        icmp_ln94_reg_3022_pp0_iter16_reg = icmp_ln94_reg_3022_pp0_iter15_reg.read();
        icmp_ln94_reg_3022_pp0_iter17_reg = icmp_ln94_reg_3022_pp0_iter16_reg.read();
        icmp_ln94_reg_3022_pp0_iter18_reg = icmp_ln94_reg_3022_pp0_iter17_reg.read();
        icmp_ln94_reg_3022_pp0_iter19_reg = icmp_ln94_reg_3022_pp0_iter18_reg.read();
        icmp_ln94_reg_3022_pp0_iter20_reg = icmp_ln94_reg_3022_pp0_iter19_reg.read();
        j_reg_3099_pp0_iter18_reg = j_reg_3099.read();
        or_ln91_1_reg_3012_pp0_iter10_reg = or_ln91_1_reg_3012.read();
        or_ln91_1_reg_3012_pp0_iter11_reg = or_ln91_1_reg_3012_pp0_iter10_reg.read();
        or_ln91_1_reg_3012_pp0_iter12_reg = or_ln91_1_reg_3012_pp0_iter11_reg.read();
        or_ln91_1_reg_3012_pp0_iter13_reg = or_ln91_1_reg_3012_pp0_iter12_reg.read();
        or_ln91_1_reg_3012_pp0_iter14_reg = or_ln91_1_reg_3012_pp0_iter13_reg.read();
        or_ln91_1_reg_3012_pp0_iter15_reg = or_ln91_1_reg_3012_pp0_iter14_reg.read();
        or_ln91_1_reg_3012_pp0_iter16_reg = or_ln91_1_reg_3012_pp0_iter15_reg.read();
        or_ln91_1_reg_3012_pp0_iter17_reg = or_ln91_1_reg_3012_pp0_iter16_reg.read();
        or_ln91_1_reg_3012_pp0_iter18_reg = or_ln91_1_reg_3012_pp0_iter17_reg.read();
        or_ln91_1_reg_3012_pp0_iter19_reg = or_ln91_1_reg_3012_pp0_iter18_reg.read();
        or_ln91_1_reg_3012_pp0_iter20_reg = or_ln91_1_reg_3012_pp0_iter19_reg.read();
        or_ln91_2_reg_3017_pp0_iter10_reg = or_ln91_2_reg_3017.read();
        or_ln91_2_reg_3017_pp0_iter11_reg = or_ln91_2_reg_3017_pp0_iter10_reg.read();
        or_ln91_2_reg_3017_pp0_iter12_reg = or_ln91_2_reg_3017_pp0_iter11_reg.read();
        or_ln91_2_reg_3017_pp0_iter13_reg = or_ln91_2_reg_3017_pp0_iter12_reg.read();
        or_ln91_2_reg_3017_pp0_iter14_reg = or_ln91_2_reg_3017_pp0_iter13_reg.read();
        or_ln91_2_reg_3017_pp0_iter15_reg = or_ln91_2_reg_3017_pp0_iter14_reg.read();
        or_ln91_2_reg_3017_pp0_iter16_reg = or_ln91_2_reg_3017_pp0_iter15_reg.read();
        or_ln91_2_reg_3017_pp0_iter17_reg = or_ln91_2_reg_3017_pp0_iter16_reg.read();
        or_ln91_2_reg_3017_pp0_iter18_reg = or_ln91_2_reg_3017_pp0_iter17_reg.read();
        or_ln91_2_reg_3017_pp0_iter19_reg = or_ln91_2_reg_3017_pp0_iter18_reg.read();
        or_ln91_2_reg_3017_pp0_iter20_reg = or_ln91_2_reg_3017_pp0_iter19_reg.read();
        or_ln91_reg_3007_pp0_iter10_reg = or_ln91_reg_3007.read();
        or_ln91_reg_3007_pp0_iter11_reg = or_ln91_reg_3007_pp0_iter10_reg.read();
        or_ln91_reg_3007_pp0_iter12_reg = or_ln91_reg_3007_pp0_iter11_reg.read();
        or_ln91_reg_3007_pp0_iter13_reg = or_ln91_reg_3007_pp0_iter12_reg.read();
        or_ln91_reg_3007_pp0_iter14_reg = or_ln91_reg_3007_pp0_iter13_reg.read();
        or_ln91_reg_3007_pp0_iter15_reg = or_ln91_reg_3007_pp0_iter14_reg.read();
        or_ln91_reg_3007_pp0_iter16_reg = or_ln91_reg_3007_pp0_iter15_reg.read();
        or_ln91_reg_3007_pp0_iter17_reg = or_ln91_reg_3007_pp0_iter16_reg.read();
        or_ln91_reg_3007_pp0_iter18_reg = or_ln91_reg_3007_pp0_iter17_reg.read();
        or_ln91_reg_3007_pp0_iter19_reg = or_ln91_reg_3007_pp0_iter18_reg.read();
        or_ln91_reg_3007_pp0_iter20_reg = or_ln91_reg_3007_pp0_iter19_reg.read();
        select_ln91_1_reg_2997_pp0_iter10_reg = select_ln91_1_reg_2997.read();
        select_ln91_1_reg_2997_pp0_iter11_reg = select_ln91_1_reg_2997_pp0_iter10_reg.read();
        select_ln91_1_reg_2997_pp0_iter12_reg = select_ln91_1_reg_2997_pp0_iter11_reg.read();
        select_ln91_1_reg_2997_pp0_iter13_reg = select_ln91_1_reg_2997_pp0_iter12_reg.read();
        select_ln91_1_reg_2997_pp0_iter14_reg = select_ln91_1_reg_2997_pp0_iter13_reg.read();
        select_ln91_1_reg_2997_pp0_iter15_reg = select_ln91_1_reg_2997_pp0_iter14_reg.read();
        select_ln91_1_reg_2997_pp0_iter16_reg = select_ln91_1_reg_2997_pp0_iter15_reg.read();
        select_ln91_1_reg_2997_pp0_iter17_reg = select_ln91_1_reg_2997_pp0_iter16_reg.read();
        select_ln91_1_reg_2997_pp0_iter18_reg = select_ln91_1_reg_2997_pp0_iter17_reg.read();
        select_ln91_1_reg_2997_pp0_iter19_reg = select_ln91_1_reg_2997_pp0_iter18_reg.read();
        select_ln91_1_reg_2997_pp0_iter20_reg = select_ln91_1_reg_2997_pp0_iter19_reg.read();
        tmp1_V_reg_3119 = m_axi_w1_V_RDATA.read();
        tmp2_V_reg_3155 = m_axi_w2_V_RDATA.read();
        tmp3_V_reg_3191 = m_axi_w3_V_RDATA.read();
        tmp4_V_reg_3227 = m_axi_w4_V_RDATA.read();
        tmp_42_reg_3104 = mul_ln87_fu_2670_p2.read().range(9, 6);
        tmp_43_reg_3109 = mul_ln87_fu_2670_p2.read().range(8, 6);
        trunc_ln7_reg_2993 = mul_ln86_fu_2474_p2.read().range(11, 10);
        trunc_ln7_reg_2993_pp0_iter10_reg = trunc_ln7_reg_2993_pp0_iter9_reg.read();
        trunc_ln7_reg_2993_pp0_iter11_reg = trunc_ln7_reg_2993_pp0_iter10_reg.read();
        trunc_ln7_reg_2993_pp0_iter12_reg = trunc_ln7_reg_2993_pp0_iter11_reg.read();
        trunc_ln7_reg_2993_pp0_iter13_reg = trunc_ln7_reg_2993_pp0_iter12_reg.read();
        trunc_ln7_reg_2993_pp0_iter14_reg = trunc_ln7_reg_2993_pp0_iter13_reg.read();
        trunc_ln7_reg_2993_pp0_iter15_reg = trunc_ln7_reg_2993_pp0_iter14_reg.read();
        trunc_ln7_reg_2993_pp0_iter16_reg = trunc_ln7_reg_2993_pp0_iter15_reg.read();
        trunc_ln7_reg_2993_pp0_iter17_reg = trunc_ln7_reg_2993_pp0_iter16_reg.read();
        trunc_ln7_reg_2993_pp0_iter18_reg = trunc_ln7_reg_2993_pp0_iter17_reg.read();
        trunc_ln7_reg_2993_pp0_iter19_reg = trunc_ln7_reg_2993_pp0_iter18_reg.read();
        trunc_ln7_reg_2993_pp0_iter20_reg = trunc_ln7_reg_2993_pp0_iter19_reg.read();
        trunc_ln7_reg_2993_pp0_iter9_reg = trunc_ln7_reg_2993.read();
        w2_V_addr_reg_3076 =  (sc_lv<32>) (sext_ln203_1_fu_2623_p1.read());
        w3_V_addr_reg_3082 =  (sc_lv<32>) (sext_ln203_2_fu_2638_p1.read());
        w4_V_addr_reg_3088 =  (sc_lv<32>) (sext_ln203_3_fu_2653_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln79_reg_2905 = grp_fu_2852_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        add_ln82_reg_2965 = add_ln82_fu_2439_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter10_reg.read()))) {
        add_ln91_1_reg_3051 = grp_fu_2866_p3.read();
        add_ln91_2_reg_3056 = grp_fu_2872_p3.read();
        add_ln91_3_reg_3061 = grp_fu_2878_p3.read();
        add_ln91_reg_3046 = grp_fu_2860_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter11_reg.read()))) {
        empty_35_reg_3072 = empty_35_fu_2612_p2.read();
        w1_V_addr_reg_3066 =  (sc_lv<32>) (sext_ln203_fu_2602_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln82_reg_2961 = icmp_ln82_fu_2433_p2.read();
        icmp_ln82_reg_2961_pp0_iter1_reg = icmp_ln82_reg_2961.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter6_reg.read()))) {
        icmp_ln83_reg_2970 = icmp_ln83_fu_2451_p2.read();
        select_ln91_reg_2976 = select_ln91_fu_2457_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter16_reg.read()))) {
        j_reg_3099 = grp_fu_2495_p2.read();
        urem_ln87_reg_3094 = grp_fu_2490_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter6_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        k_reg_2983 = k_fu_2465_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter8_reg.read()))) {
        or_ln91_1_reg_3012 = or_ln91_1_fu_2544_p2.read();
        or_ln91_2_reg_3017 = or_ln91_2_fu_2550_p2.read();
        or_ln91_reg_3007 = or_ln91_fu_2538_p2.read();
        select_ln91_1_reg_2997 = select_ln91_1_fu_2524_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter8_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        select_ln91_2_reg_3001 = select_ln91_2_fu_2531_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        sext_ln82_reg_2933 = sext_ln82_fu_2413_p1.read();
        zext_ln203_19_reg_2946 = zext_ln203_19_fu_2421_p1.read();
        zext_ln203_20_reg_2951 = zext_ln203_20_fu_2425_p1.read();
        zext_ln203_reg_2941 = zext_ln203_fu_2417_p1.read();
        zext_ln79_4_reg_2911 = zext_ln79_4_fu_2383_p1.read();
        zext_ln79_5_reg_2916 = zext_ln79_5_fu_2386_p1.read();
        zext_ln80_1_reg_2928 = zext_ln80_1_fu_2409_p1.read();
        zext_ln80_reg_2921 = zext_ln80_fu_2405_p1.read();
        zext_ln82_reg_2956 = zext_ln82_fu_2429_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln82_reg_2961_pp0_iter7_reg.read()))) {
        tmp_41_reg_2988 = mul_ln86_fu_2474_p2.read().range(13, 10);
    }
}

void load_weight::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 8 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter20.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln82_fu_2433_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter20.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln82_fu_2433_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

