#include "compute_output.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void compute_output::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_compute6_fu_1405_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln199_fu_2062_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln199_fu_2062_p2.read())))) {
            grp_compute6_fu_1405_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute6_fu_1405_ap_ready.read())) {
            grp_compute6_fu_1405_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_load_bias_fu_1928_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_load_bias_fu_1928_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load_bias_fu_1928_ap_ready.read())) {
            grp_load_bias_fu_1928_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_load_input_fu_1606_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
            grp_load_input_fu_1606_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load_input_fu_1606_ap_ready.read())) {
            grp_load_input_fu_1606_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_load_weight_fu_1645_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
            grp_load_weight_fu_1645_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load_weight_fu_1645_ap_ready.read())) {
            grp_load_weight_fu_1645_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_block_state4_on_subcall_done.read(), ap_const_boolean_0))) {
        pingpong_0_reg_1380 = ap_phi_mux_pingpong_1_phi_fu_1396_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_block_state2_on_subcall_done.read(), ap_const_boolean_0))) {
        pingpong_0_reg_1380 = ap_const_lv1_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_block_state4_on_subcall_done.read(), ap_const_boolean_0))) {
        ti_0_reg_1368 = ti_fu_2067_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_block_state2_on_subcall_done.read(), ap_const_boolean_0))) {
        ti_0_reg_1368 = ap_const_lv16_4;
    }
}

void compute_output::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_block_state2_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln199_fu_2062_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_block_state4_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_block_state5_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

