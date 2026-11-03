#include "compute_output.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void compute_output::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void compute_output::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void compute_output::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void compute_output::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void compute_output::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void compute_output::thread_ap_block_state2_on_subcall_done() {
    ap_block_state2_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_load_input_fu_1606_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_load_weight_fu_1645_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_load_bias_fu_1928_ap_done.read()));
}

void compute_output::thread_ap_block_state4_on_subcall_done() {
    ap_block_state4_on_subcall_done = ((esl_seteq<1,1,1>(ap_const_logic_0, grp_load_input_fu_1606_ap_done.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_load_weight_fu_1645_ap_done.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_compute6_fu_1405_ap_done.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_load_input_fu_1606_ap_done.read()) && 
  esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_load_weight_fu_1645_ap_done.read()) && 
  esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute6_fu_1405_ap_done.read()) && 
  esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)));
}

void compute_output::thread_ap_block_state5_on_subcall_done() {
    ap_block_state5_on_subcall_done = ((esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_compute6_fu_1405_ap_done.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute6_fu_1405_ap_done.read()) && 
  esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)));
}

void compute_output::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_state5_on_subcall_done.read(), ap_const_boolean_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void compute_output::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void compute_output::thread_ap_phi_mux_pingpong_0_phi_fu_1384_p4() {
    ap_phi_mux_pingpong_0_phi_fu_1384_p4 = pingpong_0_reg_1380.read();
}

void compute_output::thread_ap_phi_mux_pingpong_1_phi_fu_1396_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) {
            ap_phi_mux_pingpong_1_phi_fu_1396_p4 = ap_const_lv1_1;
        } else if (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) {
            ap_phi_mux_pingpong_1_phi_fu_1396_p4 = ap_const_lv1_0;
        } else {
            ap_phi_mux_pingpong_1_phi_fu_1396_p4 = "X";
        }
    } else {
        ap_phi_mux_pingpong_1_phi_fu_1396_p4 = "X";
    }
}

void compute_output::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_block_state5_on_subcall_done.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void compute_output::thread_bias_buff_0_V_address0() {
    bias_buff_0_V_address0 = grp_load_bias_fu_1928_bias_buff_0_V_address0.read();
}

void compute_output::thread_bias_buff_0_V_ce0() {
    bias_buff_0_V_ce0 = grp_load_bias_fu_1928_bias_buff_0_V_ce0.read();
}

void compute_output::thread_bias_buff_10_V_address0() {
    bias_buff_10_V_address0 = grp_load_bias_fu_1928_bias_buff_10_V_address0.read();
}

void compute_output::thread_bias_buff_10_V_ce0() {
    bias_buff_10_V_ce0 = grp_load_bias_fu_1928_bias_buff_10_V_ce0.read();
}

void compute_output::thread_bias_buff_11_V_address0() {
    bias_buff_11_V_address0 = grp_load_bias_fu_1928_bias_buff_11_V_address0.read();
}

void compute_output::thread_bias_buff_11_V_ce0() {
    bias_buff_11_V_ce0 = grp_load_bias_fu_1928_bias_buff_11_V_ce0.read();
}

void compute_output::thread_bias_buff_12_V_address0() {
    bias_buff_12_V_address0 = grp_load_bias_fu_1928_bias_buff_12_V_address0.read();
}

void compute_output::thread_bias_buff_12_V_ce0() {
    bias_buff_12_V_ce0 = grp_load_bias_fu_1928_bias_buff_12_V_ce0.read();
}

void compute_output::thread_bias_buff_13_V_address0() {
    bias_buff_13_V_address0 = grp_load_bias_fu_1928_bias_buff_13_V_address0.read();
}

void compute_output::thread_bias_buff_13_V_ce0() {
    bias_buff_13_V_ce0 = grp_load_bias_fu_1928_bias_buff_13_V_ce0.read();
}

void compute_output::thread_bias_buff_14_V_address0() {
    bias_buff_14_V_address0 = grp_load_bias_fu_1928_bias_buff_14_V_address0.read();
}

void compute_output::thread_bias_buff_14_V_ce0() {
    bias_buff_14_V_ce0 = grp_load_bias_fu_1928_bias_buff_14_V_ce0.read();
}

void compute_output::thread_bias_buff_15_V_address0() {
    bias_buff_15_V_address0 = grp_load_bias_fu_1928_bias_buff_15_V_address0.read();
}

void compute_output::thread_bias_buff_15_V_ce0() {
    bias_buff_15_V_ce0 = grp_load_bias_fu_1928_bias_buff_15_V_ce0.read();
}

void compute_output::thread_bias_buff_16_V_address0() {
    bias_buff_16_V_address0 = grp_load_bias_fu_1928_bias_buff_16_V_address0.read();
}

void compute_output::thread_bias_buff_16_V_ce0() {
    bias_buff_16_V_ce0 = grp_load_bias_fu_1928_bias_buff_16_V_ce0.read();
}

void compute_output::thread_bias_buff_17_V_address0() {
    bias_buff_17_V_address0 = grp_load_bias_fu_1928_bias_buff_17_V_address0.read();
}

void compute_output::thread_bias_buff_17_V_ce0() {
    bias_buff_17_V_ce0 = grp_load_bias_fu_1928_bias_buff_17_V_ce0.read();
}

void compute_output::thread_bias_buff_18_V_address0() {
    bias_buff_18_V_address0 = grp_load_bias_fu_1928_bias_buff_18_V_address0.read();
}

void compute_output::thread_bias_buff_18_V_ce0() {
    bias_buff_18_V_ce0 = grp_load_bias_fu_1928_bias_buff_18_V_ce0.read();
}

void compute_output::thread_bias_buff_19_V_address0() {
    bias_buff_19_V_address0 = grp_load_bias_fu_1928_bias_buff_19_V_address0.read();
}

void compute_output::thread_bias_buff_19_V_ce0() {
    bias_buff_19_V_ce0 = grp_load_bias_fu_1928_bias_buff_19_V_ce0.read();
}

void compute_output::thread_bias_buff_1_V_address0() {
    bias_buff_1_V_address0 = grp_load_bias_fu_1928_bias_buff_1_V_address0.read();
}

void compute_output::thread_bias_buff_1_V_ce0() {
    bias_buff_1_V_ce0 = grp_load_bias_fu_1928_bias_buff_1_V_ce0.read();
}

void compute_output::thread_bias_buff_20_V_address0() {
    bias_buff_20_V_address0 = grp_load_bias_fu_1928_bias_buff_20_V_address0.read();
}

void compute_output::thread_bias_buff_20_V_ce0() {
    bias_buff_20_V_ce0 = grp_load_bias_fu_1928_bias_buff_20_V_ce0.read();
}

void compute_output::thread_bias_buff_21_V_address0() {
    bias_buff_21_V_address0 = grp_load_bias_fu_1928_bias_buff_21_V_address0.read();
}

void compute_output::thread_bias_buff_21_V_ce0() {
    bias_buff_21_V_ce0 = grp_load_bias_fu_1928_bias_buff_21_V_ce0.read();
}

void compute_output::thread_bias_buff_22_V_address0() {
    bias_buff_22_V_address0 = grp_load_bias_fu_1928_bias_buff_22_V_address0.read();
}

void compute_output::thread_bias_buff_22_V_ce0() {
    bias_buff_22_V_ce0 = grp_load_bias_fu_1928_bias_buff_22_V_ce0.read();
}

void compute_output::thread_bias_buff_23_V_address0() {
    bias_buff_23_V_address0 = grp_load_bias_fu_1928_bias_buff_23_V_address0.read();
}

void compute_output::thread_bias_buff_23_V_ce0() {
    bias_buff_23_V_ce0 = grp_load_bias_fu_1928_bias_buff_23_V_ce0.read();
}

void compute_output::thread_bias_buff_24_V_address0() {
    bias_buff_24_V_address0 = grp_load_bias_fu_1928_bias_buff_24_V_address0.read();
}

void compute_output::thread_bias_buff_24_V_ce0() {
    bias_buff_24_V_ce0 = grp_load_bias_fu_1928_bias_buff_24_V_ce0.read();
}

void compute_output::thread_bias_buff_25_V_address0() {
    bias_buff_25_V_address0 = grp_load_bias_fu_1928_bias_buff_25_V_address0.read();
}

void compute_output::thread_bias_buff_25_V_ce0() {
    bias_buff_25_V_ce0 = grp_load_bias_fu_1928_bias_buff_25_V_ce0.read();
}

void compute_output::thread_bias_buff_26_V_address0() {
    bias_buff_26_V_address0 = grp_load_bias_fu_1928_bias_buff_26_V_address0.read();
}

void compute_output::thread_bias_buff_26_V_ce0() {
    bias_buff_26_V_ce0 = grp_load_bias_fu_1928_bias_buff_26_V_ce0.read();
}

void compute_output::thread_bias_buff_27_V_address0() {
    bias_buff_27_V_address0 = grp_load_bias_fu_1928_bias_buff_27_V_address0.read();
}

void compute_output::thread_bias_buff_27_V_ce0() {
    bias_buff_27_V_ce0 = grp_load_bias_fu_1928_bias_buff_27_V_ce0.read();
}

void compute_output::thread_bias_buff_28_V_address0() {
    bias_buff_28_V_address0 = grp_load_bias_fu_1928_bias_buff_28_V_address0.read();
}

void compute_output::thread_bias_buff_28_V_ce0() {
    bias_buff_28_V_ce0 = grp_load_bias_fu_1928_bias_buff_28_V_ce0.read();
}

void compute_output::thread_bias_buff_29_V_address0() {
    bias_buff_29_V_address0 = grp_load_bias_fu_1928_bias_buff_29_V_address0.read();
}

void compute_output::thread_bias_buff_29_V_ce0() {
    bias_buff_29_V_ce0 = grp_load_bias_fu_1928_bias_buff_29_V_ce0.read();
}

void compute_output::thread_bias_buff_2_V_address0() {
    bias_buff_2_V_address0 = grp_load_bias_fu_1928_bias_buff_2_V_address0.read();
}

void compute_output::thread_bias_buff_2_V_ce0() {
    bias_buff_2_V_ce0 = grp_load_bias_fu_1928_bias_buff_2_V_ce0.read();
}

void compute_output::thread_bias_buff_30_V_address0() {
    bias_buff_30_V_address0 = grp_load_bias_fu_1928_bias_buff_30_V_address0.read();
}

void compute_output::thread_bias_buff_30_V_ce0() {
    bias_buff_30_V_ce0 = grp_load_bias_fu_1928_bias_buff_30_V_ce0.read();
}

void compute_output::thread_bias_buff_31_V_address0() {
    bias_buff_31_V_address0 = grp_load_bias_fu_1928_bias_buff_31_V_address0.read();
}

void compute_output::thread_bias_buff_31_V_ce0() {
    bias_buff_31_V_ce0 = grp_load_bias_fu_1928_bias_buff_31_V_ce0.read();
}

void compute_output::thread_bias_buff_3_V_address0() {
    bias_buff_3_V_address0 = grp_load_bias_fu_1928_bias_buff_3_V_address0.read();
}

void compute_output::thread_bias_buff_3_V_ce0() {
    bias_buff_3_V_ce0 = grp_load_bias_fu_1928_bias_buff_3_V_ce0.read();
}

void compute_output::thread_bias_buff_4_V_address0() {
    bias_buff_4_V_address0 = grp_load_bias_fu_1928_bias_buff_4_V_address0.read();
}

void compute_output::thread_bias_buff_4_V_ce0() {
    bias_buff_4_V_ce0 = grp_load_bias_fu_1928_bias_buff_4_V_ce0.read();
}

void compute_output::thread_bias_buff_5_V_address0() {
    bias_buff_5_V_address0 = grp_load_bias_fu_1928_bias_buff_5_V_address0.read();
}

void compute_output::thread_bias_buff_5_V_ce0() {
    bias_buff_5_V_ce0 = grp_load_bias_fu_1928_bias_buff_5_V_ce0.read();
}

void compute_output::thread_bias_buff_6_V_address0() {
    bias_buff_6_V_address0 = grp_load_bias_fu_1928_bias_buff_6_V_address0.read();
}

void compute_output::thread_bias_buff_6_V_ce0() {
    bias_buff_6_V_ce0 = grp_load_bias_fu_1928_bias_buff_6_V_ce0.read();
}

void compute_output::thread_bias_buff_7_V_address0() {
    bias_buff_7_V_address0 = grp_load_bias_fu_1928_bias_buff_7_V_address0.read();
}

void compute_output::thread_bias_buff_7_V_ce0() {
    bias_buff_7_V_ce0 = grp_load_bias_fu_1928_bias_buff_7_V_ce0.read();
}

void compute_output::thread_bias_buff_8_V_address0() {
    bias_buff_8_V_address0 = grp_load_bias_fu_1928_bias_buff_8_V_address0.read();
}

void compute_output::thread_bias_buff_8_V_ce0() {
    bias_buff_8_V_ce0 = grp_load_bias_fu_1928_bias_buff_8_V_ce0.read();
}

void compute_output::thread_bias_buff_9_V_address0() {
    bias_buff_9_V_address0 = grp_load_bias_fu_1928_bias_buff_9_V_address0.read();
}

void compute_output::thread_bias_buff_9_V_ce0() {
    bias_buff_9_V_ce0 = grp_load_bias_fu_1928_bias_buff_9_V_ce0.read();
}

void compute_output::thread_fm_in_buff1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_0_V_address0 = grp_load_input_fu_1606_fm_in_buff_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_0_V_address0 = grp_compute6_fu_1405_fm_in_buff_0_V_address0.read();
    } else {
        fm_in_buff1_0_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_0_V_ce0 = grp_load_input_fu_1606_fm_in_buff_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_0_V_ce0 = grp_compute6_fu_1405_fm_in_buff_0_V_ce0.read();
    } else {
        fm_in_buff1_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_0_V_we0 = grp_load_input_fu_1606_fm_in_buff_0_V_we0.read();
    } else {
        fm_in_buff1_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_1_V_address0 = grp_load_input_fu_1606_fm_in_buff_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_1_V_address0 = grp_compute6_fu_1405_fm_in_buff_1_V_address0.read();
    } else {
        fm_in_buff1_1_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_1_V_ce0 = grp_load_input_fu_1606_fm_in_buff_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_1_V_ce0 = grp_compute6_fu_1405_fm_in_buff_1_V_ce0.read();
    } else {
        fm_in_buff1_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_1_V_we0 = grp_load_input_fu_1606_fm_in_buff_1_V_we0.read();
    } else {
        fm_in_buff1_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_2_V_address0 = grp_load_input_fu_1606_fm_in_buff_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_2_V_address0 = grp_compute6_fu_1405_fm_in_buff_2_V_address0.read();
    } else {
        fm_in_buff1_2_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_2_V_ce0 = grp_load_input_fu_1606_fm_in_buff_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_2_V_ce0 = grp_compute6_fu_1405_fm_in_buff_2_V_ce0.read();
    } else {
        fm_in_buff1_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_2_V_we0 = grp_load_input_fu_1606_fm_in_buff_2_V_we0.read();
    } else {
        fm_in_buff1_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_3_V_address0 = grp_load_input_fu_1606_fm_in_buff_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_3_V_address0 = grp_compute6_fu_1405_fm_in_buff_3_V_address0.read();
    } else {
        fm_in_buff1_3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_3_V_ce0 = grp_load_input_fu_1606_fm_in_buff_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff1_3_V_ce0 = grp_compute6_fu_1405_fm_in_buff_3_V_ce0.read();
    } else {
        fm_in_buff1_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        fm_in_buff1_3_V_we0 = grp_load_input_fu_1606_fm_in_buff_3_V_we0.read();
    } else {
        fm_in_buff1_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_0_V_address0 = grp_load_input_fu_1606_fm_in_buff_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_0_V_address0 = grp_compute6_fu_1405_fm_in_buff_0_V_address0.read();
    } else {
        fm_in_buff2_0_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_0_V_ce0 = grp_load_input_fu_1606_fm_in_buff_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_0_V_ce0 = grp_compute6_fu_1405_fm_in_buff_0_V_ce0.read();
    } else {
        fm_in_buff2_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_0_V_we0 = grp_load_input_fu_1606_fm_in_buff_0_V_we0.read();
    } else {
        fm_in_buff2_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_1_V_address0 = grp_load_input_fu_1606_fm_in_buff_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_1_V_address0 = grp_compute6_fu_1405_fm_in_buff_1_V_address0.read();
    } else {
        fm_in_buff2_1_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_1_V_ce0 = grp_load_input_fu_1606_fm_in_buff_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_1_V_ce0 = grp_compute6_fu_1405_fm_in_buff_1_V_ce0.read();
    } else {
        fm_in_buff2_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_1_V_we0 = grp_load_input_fu_1606_fm_in_buff_1_V_we0.read();
    } else {
        fm_in_buff2_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_2_V_address0 = grp_load_input_fu_1606_fm_in_buff_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_2_V_address0 = grp_compute6_fu_1405_fm_in_buff_2_V_address0.read();
    } else {
        fm_in_buff2_2_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_2_V_ce0 = grp_load_input_fu_1606_fm_in_buff_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_2_V_ce0 = grp_compute6_fu_1405_fm_in_buff_2_V_ce0.read();
    } else {
        fm_in_buff2_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_2_V_we0 = grp_load_input_fu_1606_fm_in_buff_2_V_we0.read();
    } else {
        fm_in_buff2_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_3_V_address0 = grp_load_input_fu_1606_fm_in_buff_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_3_V_address0 = grp_compute6_fu_1405_fm_in_buff_3_V_address0.read();
    } else {
        fm_in_buff2_3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void compute_output::thread_fm_in_buff2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_3_V_ce0 = grp_load_input_fu_1606_fm_in_buff_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_in_buff2_3_V_ce0 = grp_compute6_fu_1405_fm_in_buff_3_V_ce0.read();
    } else {
        fm_in_buff2_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_in_buff2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        fm_in_buff2_3_V_we0 = grp_load_input_fu_1606_fm_in_buff_3_V_we0.read();
    } else {
        fm_in_buff2_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_0_V_address0 = grp_load_bias_fu_1928_fm_out_buff_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_0_V_address0 = grp_compute6_fu_1405_fm_out_buff_0_V_address0.read();
    } else {
        fm_out_buff_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_0_V_address1() {
    fm_out_buff_0_V_address1 = grp_compute6_fu_1405_fm_out_buff_0_V_address1.read();
}

void compute_output::thread_fm_out_buff_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_0_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_0_V_ce0 = grp_compute6_fu_1405_fm_out_buff_0_V_ce0.read();
    } else {
        fm_out_buff_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_0_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_0_V_ce1 = grp_compute6_fu_1405_fm_out_buff_0_V_ce1.read();
    } else {
        fm_out_buff_0_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_0_V_d0() {
    fm_out_buff_0_V_d0 = grp_load_bias_fu_1928_fm_out_buff_0_V_d0.read();
}

void compute_output::thread_fm_out_buff_0_V_d1() {
    fm_out_buff_0_V_d1 = grp_compute6_fu_1405_fm_out_buff_0_V_d1.read();
}

void compute_output::thread_fm_out_buff_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_0_V_we0 = grp_load_bias_fu_1928_fm_out_buff_0_V_we0.read();
    } else {
        fm_out_buff_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_0_V_we1 = grp_compute6_fu_1405_fm_out_buff_0_V_we1.read();
    } else {
        fm_out_buff_0_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_10_V_address0 = grp_load_bias_fu_1928_fm_out_buff_10_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_10_V_address0 = grp_compute6_fu_1405_fm_out_buff_10_V_address0.read();
    } else {
        fm_out_buff_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_10_V_address1() {
    fm_out_buff_10_V_address1 = grp_compute6_fu_1405_fm_out_buff_10_V_address1.read();
}

void compute_output::thread_fm_out_buff_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_10_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_10_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_10_V_ce0 = grp_compute6_fu_1405_fm_out_buff_10_V_ce0.read();
    } else {
        fm_out_buff_10_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_10_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_10_V_ce1 = grp_compute6_fu_1405_fm_out_buff_10_V_ce1.read();
    } else {
        fm_out_buff_10_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_10_V_d0() {
    fm_out_buff_10_V_d0 = grp_load_bias_fu_1928_fm_out_buff_10_V_d0.read();
}

void compute_output::thread_fm_out_buff_10_V_d1() {
    fm_out_buff_10_V_d1 = grp_compute6_fu_1405_fm_out_buff_10_V_d1.read();
}

void compute_output::thread_fm_out_buff_10_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_10_V_we0 = grp_load_bias_fu_1928_fm_out_buff_10_V_we0.read();
    } else {
        fm_out_buff_10_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_10_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_10_V_we1 = grp_compute6_fu_1405_fm_out_buff_10_V_we1.read();
    } else {
        fm_out_buff_10_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_11_V_address0 = grp_load_bias_fu_1928_fm_out_buff_11_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_11_V_address0 = grp_compute6_fu_1405_fm_out_buff_11_V_address0.read();
    } else {
        fm_out_buff_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_11_V_address1() {
    fm_out_buff_11_V_address1 = grp_compute6_fu_1405_fm_out_buff_11_V_address1.read();
}

void compute_output::thread_fm_out_buff_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_11_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_11_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_11_V_ce0 = grp_compute6_fu_1405_fm_out_buff_11_V_ce0.read();
    } else {
        fm_out_buff_11_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_11_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_11_V_ce1 = grp_compute6_fu_1405_fm_out_buff_11_V_ce1.read();
    } else {
        fm_out_buff_11_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_11_V_d0() {
    fm_out_buff_11_V_d0 = grp_load_bias_fu_1928_fm_out_buff_11_V_d0.read();
}

void compute_output::thread_fm_out_buff_11_V_d1() {
    fm_out_buff_11_V_d1 = grp_compute6_fu_1405_fm_out_buff_11_V_d1.read();
}

void compute_output::thread_fm_out_buff_11_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_11_V_we0 = grp_load_bias_fu_1928_fm_out_buff_11_V_we0.read();
    } else {
        fm_out_buff_11_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_11_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_11_V_we1 = grp_compute6_fu_1405_fm_out_buff_11_V_we1.read();
    } else {
        fm_out_buff_11_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_12_V_address0 = grp_load_bias_fu_1928_fm_out_buff_12_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_12_V_address0 = grp_compute6_fu_1405_fm_out_buff_12_V_address0.read();
    } else {
        fm_out_buff_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_12_V_address1() {
    fm_out_buff_12_V_address1 = grp_compute6_fu_1405_fm_out_buff_12_V_address1.read();
}

void compute_output::thread_fm_out_buff_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_12_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_12_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_12_V_ce0 = grp_compute6_fu_1405_fm_out_buff_12_V_ce0.read();
    } else {
        fm_out_buff_12_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_12_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_12_V_ce1 = grp_compute6_fu_1405_fm_out_buff_12_V_ce1.read();
    } else {
        fm_out_buff_12_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_12_V_d0() {
    fm_out_buff_12_V_d0 = grp_load_bias_fu_1928_fm_out_buff_12_V_d0.read();
}

void compute_output::thread_fm_out_buff_12_V_d1() {
    fm_out_buff_12_V_d1 = grp_compute6_fu_1405_fm_out_buff_12_V_d1.read();
}

void compute_output::thread_fm_out_buff_12_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_12_V_we0 = grp_load_bias_fu_1928_fm_out_buff_12_V_we0.read();
    } else {
        fm_out_buff_12_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_12_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_12_V_we1 = grp_compute6_fu_1405_fm_out_buff_12_V_we1.read();
    } else {
        fm_out_buff_12_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_13_V_address0 = grp_load_bias_fu_1928_fm_out_buff_13_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_13_V_address0 = grp_compute6_fu_1405_fm_out_buff_13_V_address0.read();
    } else {
        fm_out_buff_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_13_V_address1() {
    fm_out_buff_13_V_address1 = grp_compute6_fu_1405_fm_out_buff_13_V_address1.read();
}

void compute_output::thread_fm_out_buff_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_13_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_13_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_13_V_ce0 = grp_compute6_fu_1405_fm_out_buff_13_V_ce0.read();
    } else {
        fm_out_buff_13_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_13_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_13_V_ce1 = grp_compute6_fu_1405_fm_out_buff_13_V_ce1.read();
    } else {
        fm_out_buff_13_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_13_V_d0() {
    fm_out_buff_13_V_d0 = grp_load_bias_fu_1928_fm_out_buff_13_V_d0.read();
}

void compute_output::thread_fm_out_buff_13_V_d1() {
    fm_out_buff_13_V_d1 = grp_compute6_fu_1405_fm_out_buff_13_V_d1.read();
}

void compute_output::thread_fm_out_buff_13_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_13_V_we0 = grp_load_bias_fu_1928_fm_out_buff_13_V_we0.read();
    } else {
        fm_out_buff_13_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_13_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_13_V_we1 = grp_compute6_fu_1405_fm_out_buff_13_V_we1.read();
    } else {
        fm_out_buff_13_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_14_V_address0 = grp_load_bias_fu_1928_fm_out_buff_14_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_14_V_address0 = grp_compute6_fu_1405_fm_out_buff_14_V_address0.read();
    } else {
        fm_out_buff_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_14_V_address1() {
    fm_out_buff_14_V_address1 = grp_compute6_fu_1405_fm_out_buff_14_V_address1.read();
}

void compute_output::thread_fm_out_buff_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_14_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_14_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_14_V_ce0 = grp_compute6_fu_1405_fm_out_buff_14_V_ce0.read();
    } else {
        fm_out_buff_14_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_14_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_14_V_ce1 = grp_compute6_fu_1405_fm_out_buff_14_V_ce1.read();
    } else {
        fm_out_buff_14_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_14_V_d0() {
    fm_out_buff_14_V_d0 = grp_load_bias_fu_1928_fm_out_buff_14_V_d0.read();
}

void compute_output::thread_fm_out_buff_14_V_d1() {
    fm_out_buff_14_V_d1 = grp_compute6_fu_1405_fm_out_buff_14_V_d1.read();
}

void compute_output::thread_fm_out_buff_14_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_14_V_we0 = grp_load_bias_fu_1928_fm_out_buff_14_V_we0.read();
    } else {
        fm_out_buff_14_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_14_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_14_V_we1 = grp_compute6_fu_1405_fm_out_buff_14_V_we1.read();
    } else {
        fm_out_buff_14_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_15_V_address0 = grp_load_bias_fu_1928_fm_out_buff_15_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_15_V_address0 = grp_compute6_fu_1405_fm_out_buff_15_V_address0.read();
    } else {
        fm_out_buff_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_15_V_address1() {
    fm_out_buff_15_V_address1 = grp_compute6_fu_1405_fm_out_buff_15_V_address1.read();
}

void compute_output::thread_fm_out_buff_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_15_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_15_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_15_V_ce0 = grp_compute6_fu_1405_fm_out_buff_15_V_ce0.read();
    } else {
        fm_out_buff_15_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_15_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_15_V_ce1 = grp_compute6_fu_1405_fm_out_buff_15_V_ce1.read();
    } else {
        fm_out_buff_15_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_15_V_d0() {
    fm_out_buff_15_V_d0 = grp_load_bias_fu_1928_fm_out_buff_15_V_d0.read();
}

void compute_output::thread_fm_out_buff_15_V_d1() {
    fm_out_buff_15_V_d1 = grp_compute6_fu_1405_fm_out_buff_15_V_d1.read();
}

void compute_output::thread_fm_out_buff_15_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_15_V_we0 = grp_load_bias_fu_1928_fm_out_buff_15_V_we0.read();
    } else {
        fm_out_buff_15_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_15_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_15_V_we1 = grp_compute6_fu_1405_fm_out_buff_15_V_we1.read();
    } else {
        fm_out_buff_15_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_16_V_address0 = grp_load_bias_fu_1928_fm_out_buff_16_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_16_V_address0 = grp_compute6_fu_1405_fm_out_buff_16_V_address0.read();
    } else {
        fm_out_buff_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_16_V_address1() {
    fm_out_buff_16_V_address1 = grp_compute6_fu_1405_fm_out_buff_16_V_address1.read();
}

void compute_output::thread_fm_out_buff_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_16_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_16_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_16_V_ce0 = grp_compute6_fu_1405_fm_out_buff_16_V_ce0.read();
    } else {
        fm_out_buff_16_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_16_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_16_V_ce1 = grp_compute6_fu_1405_fm_out_buff_16_V_ce1.read();
    } else {
        fm_out_buff_16_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_16_V_d0() {
    fm_out_buff_16_V_d0 = grp_load_bias_fu_1928_fm_out_buff_16_V_d0.read();
}

void compute_output::thread_fm_out_buff_16_V_d1() {
    fm_out_buff_16_V_d1 = grp_compute6_fu_1405_fm_out_buff_16_V_d1.read();
}

void compute_output::thread_fm_out_buff_16_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_16_V_we0 = grp_load_bias_fu_1928_fm_out_buff_16_V_we0.read();
    } else {
        fm_out_buff_16_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_16_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_16_V_we1 = grp_compute6_fu_1405_fm_out_buff_16_V_we1.read();
    } else {
        fm_out_buff_16_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_17_V_address0 = grp_load_bias_fu_1928_fm_out_buff_17_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_17_V_address0 = grp_compute6_fu_1405_fm_out_buff_17_V_address0.read();
    } else {
        fm_out_buff_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_17_V_address1() {
    fm_out_buff_17_V_address1 = grp_compute6_fu_1405_fm_out_buff_17_V_address1.read();
}

void compute_output::thread_fm_out_buff_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_17_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_17_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_17_V_ce0 = grp_compute6_fu_1405_fm_out_buff_17_V_ce0.read();
    } else {
        fm_out_buff_17_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_17_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_17_V_ce1 = grp_compute6_fu_1405_fm_out_buff_17_V_ce1.read();
    } else {
        fm_out_buff_17_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_17_V_d0() {
    fm_out_buff_17_V_d0 = grp_load_bias_fu_1928_fm_out_buff_17_V_d0.read();
}

void compute_output::thread_fm_out_buff_17_V_d1() {
    fm_out_buff_17_V_d1 = grp_compute6_fu_1405_fm_out_buff_17_V_d1.read();
}

void compute_output::thread_fm_out_buff_17_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_17_V_we0 = grp_load_bias_fu_1928_fm_out_buff_17_V_we0.read();
    } else {
        fm_out_buff_17_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_17_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_17_V_we1 = grp_compute6_fu_1405_fm_out_buff_17_V_we1.read();
    } else {
        fm_out_buff_17_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_18_V_address0 = grp_load_bias_fu_1928_fm_out_buff_18_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_18_V_address0 = grp_compute6_fu_1405_fm_out_buff_18_V_address0.read();
    } else {
        fm_out_buff_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_18_V_address1() {
    fm_out_buff_18_V_address1 = grp_compute6_fu_1405_fm_out_buff_18_V_address1.read();
}

void compute_output::thread_fm_out_buff_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_18_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_18_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_18_V_ce0 = grp_compute6_fu_1405_fm_out_buff_18_V_ce0.read();
    } else {
        fm_out_buff_18_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_18_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_18_V_ce1 = grp_compute6_fu_1405_fm_out_buff_18_V_ce1.read();
    } else {
        fm_out_buff_18_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_18_V_d0() {
    fm_out_buff_18_V_d0 = grp_load_bias_fu_1928_fm_out_buff_18_V_d0.read();
}

void compute_output::thread_fm_out_buff_18_V_d1() {
    fm_out_buff_18_V_d1 = grp_compute6_fu_1405_fm_out_buff_18_V_d1.read();
}

void compute_output::thread_fm_out_buff_18_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_18_V_we0 = grp_load_bias_fu_1928_fm_out_buff_18_V_we0.read();
    } else {
        fm_out_buff_18_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_18_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_18_V_we1 = grp_compute6_fu_1405_fm_out_buff_18_V_we1.read();
    } else {
        fm_out_buff_18_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_19_V_address0 = grp_load_bias_fu_1928_fm_out_buff_19_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_19_V_address0 = grp_compute6_fu_1405_fm_out_buff_19_V_address0.read();
    } else {
        fm_out_buff_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_19_V_address1() {
    fm_out_buff_19_V_address1 = grp_compute6_fu_1405_fm_out_buff_19_V_address1.read();
}

void compute_output::thread_fm_out_buff_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_19_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_19_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_19_V_ce0 = grp_compute6_fu_1405_fm_out_buff_19_V_ce0.read();
    } else {
        fm_out_buff_19_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_19_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_19_V_ce1 = grp_compute6_fu_1405_fm_out_buff_19_V_ce1.read();
    } else {
        fm_out_buff_19_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_19_V_d0() {
    fm_out_buff_19_V_d0 = grp_load_bias_fu_1928_fm_out_buff_19_V_d0.read();
}

void compute_output::thread_fm_out_buff_19_V_d1() {
    fm_out_buff_19_V_d1 = grp_compute6_fu_1405_fm_out_buff_19_V_d1.read();
}

void compute_output::thread_fm_out_buff_19_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_19_V_we0 = grp_load_bias_fu_1928_fm_out_buff_19_V_we0.read();
    } else {
        fm_out_buff_19_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_19_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_19_V_we1 = grp_compute6_fu_1405_fm_out_buff_19_V_we1.read();
    } else {
        fm_out_buff_19_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_1_V_address0 = grp_load_bias_fu_1928_fm_out_buff_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_1_V_address0 = grp_compute6_fu_1405_fm_out_buff_1_V_address0.read();
    } else {
        fm_out_buff_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_1_V_address1() {
    fm_out_buff_1_V_address1 = grp_compute6_fu_1405_fm_out_buff_1_V_address1.read();
}

void compute_output::thread_fm_out_buff_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_1_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_1_V_ce0 = grp_compute6_fu_1405_fm_out_buff_1_V_ce0.read();
    } else {
        fm_out_buff_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_1_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_1_V_ce1 = grp_compute6_fu_1405_fm_out_buff_1_V_ce1.read();
    } else {
        fm_out_buff_1_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_1_V_d0() {
    fm_out_buff_1_V_d0 = grp_load_bias_fu_1928_fm_out_buff_1_V_d0.read();
}

void compute_output::thread_fm_out_buff_1_V_d1() {
    fm_out_buff_1_V_d1 = grp_compute6_fu_1405_fm_out_buff_1_V_d1.read();
}

void compute_output::thread_fm_out_buff_1_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_1_V_we0 = grp_load_bias_fu_1928_fm_out_buff_1_V_we0.read();
    } else {
        fm_out_buff_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_1_V_we1 = grp_compute6_fu_1405_fm_out_buff_1_V_we1.read();
    } else {
        fm_out_buff_1_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_20_V_address0 = grp_load_bias_fu_1928_fm_out_buff_20_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_20_V_address0 = grp_compute6_fu_1405_fm_out_buff_20_V_address0.read();
    } else {
        fm_out_buff_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_20_V_address1() {
    fm_out_buff_20_V_address1 = grp_compute6_fu_1405_fm_out_buff_20_V_address1.read();
}

void compute_output::thread_fm_out_buff_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_20_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_20_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_20_V_ce0 = grp_compute6_fu_1405_fm_out_buff_20_V_ce0.read();
    } else {
        fm_out_buff_20_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_20_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_20_V_ce1 = grp_compute6_fu_1405_fm_out_buff_20_V_ce1.read();
    } else {
        fm_out_buff_20_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_20_V_d0() {
    fm_out_buff_20_V_d0 = grp_load_bias_fu_1928_fm_out_buff_20_V_d0.read();
}

void compute_output::thread_fm_out_buff_20_V_d1() {
    fm_out_buff_20_V_d1 = grp_compute6_fu_1405_fm_out_buff_20_V_d1.read();
}

void compute_output::thread_fm_out_buff_20_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_20_V_we0 = grp_load_bias_fu_1928_fm_out_buff_20_V_we0.read();
    } else {
        fm_out_buff_20_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_20_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_20_V_we1 = grp_compute6_fu_1405_fm_out_buff_20_V_we1.read();
    } else {
        fm_out_buff_20_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_21_V_address0 = grp_load_bias_fu_1928_fm_out_buff_21_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_21_V_address0 = grp_compute6_fu_1405_fm_out_buff_21_V_address0.read();
    } else {
        fm_out_buff_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_21_V_address1() {
    fm_out_buff_21_V_address1 = grp_compute6_fu_1405_fm_out_buff_21_V_address1.read();
}

void compute_output::thread_fm_out_buff_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_21_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_21_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_21_V_ce0 = grp_compute6_fu_1405_fm_out_buff_21_V_ce0.read();
    } else {
        fm_out_buff_21_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_21_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_21_V_ce1 = grp_compute6_fu_1405_fm_out_buff_21_V_ce1.read();
    } else {
        fm_out_buff_21_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_21_V_d0() {
    fm_out_buff_21_V_d0 = grp_load_bias_fu_1928_fm_out_buff_21_V_d0.read();
}

void compute_output::thread_fm_out_buff_21_V_d1() {
    fm_out_buff_21_V_d1 = grp_compute6_fu_1405_fm_out_buff_21_V_d1.read();
}

void compute_output::thread_fm_out_buff_21_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_21_V_we0 = grp_load_bias_fu_1928_fm_out_buff_21_V_we0.read();
    } else {
        fm_out_buff_21_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_21_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_21_V_we1 = grp_compute6_fu_1405_fm_out_buff_21_V_we1.read();
    } else {
        fm_out_buff_21_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_22_V_address0 = grp_load_bias_fu_1928_fm_out_buff_22_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_22_V_address0 = grp_compute6_fu_1405_fm_out_buff_22_V_address0.read();
    } else {
        fm_out_buff_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_22_V_address1() {
    fm_out_buff_22_V_address1 = grp_compute6_fu_1405_fm_out_buff_22_V_address1.read();
}

void compute_output::thread_fm_out_buff_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_22_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_22_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_22_V_ce0 = grp_compute6_fu_1405_fm_out_buff_22_V_ce0.read();
    } else {
        fm_out_buff_22_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_22_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_22_V_ce1 = grp_compute6_fu_1405_fm_out_buff_22_V_ce1.read();
    } else {
        fm_out_buff_22_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_22_V_d0() {
    fm_out_buff_22_V_d0 = grp_load_bias_fu_1928_fm_out_buff_22_V_d0.read();
}

void compute_output::thread_fm_out_buff_22_V_d1() {
    fm_out_buff_22_V_d1 = grp_compute6_fu_1405_fm_out_buff_22_V_d1.read();
}

void compute_output::thread_fm_out_buff_22_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_22_V_we0 = grp_load_bias_fu_1928_fm_out_buff_22_V_we0.read();
    } else {
        fm_out_buff_22_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_22_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_22_V_we1 = grp_compute6_fu_1405_fm_out_buff_22_V_we1.read();
    } else {
        fm_out_buff_22_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_23_V_address0 = grp_load_bias_fu_1928_fm_out_buff_23_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_23_V_address0 = grp_compute6_fu_1405_fm_out_buff_23_V_address0.read();
    } else {
        fm_out_buff_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_23_V_address1() {
    fm_out_buff_23_V_address1 = grp_compute6_fu_1405_fm_out_buff_23_V_address1.read();
}

void compute_output::thread_fm_out_buff_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_23_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_23_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_23_V_ce0 = grp_compute6_fu_1405_fm_out_buff_23_V_ce0.read();
    } else {
        fm_out_buff_23_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_23_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_23_V_ce1 = grp_compute6_fu_1405_fm_out_buff_23_V_ce1.read();
    } else {
        fm_out_buff_23_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_23_V_d0() {
    fm_out_buff_23_V_d0 = grp_load_bias_fu_1928_fm_out_buff_23_V_d0.read();
}

void compute_output::thread_fm_out_buff_23_V_d1() {
    fm_out_buff_23_V_d1 = grp_compute6_fu_1405_fm_out_buff_23_V_d1.read();
}

void compute_output::thread_fm_out_buff_23_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_23_V_we0 = grp_load_bias_fu_1928_fm_out_buff_23_V_we0.read();
    } else {
        fm_out_buff_23_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_23_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_23_V_we1 = grp_compute6_fu_1405_fm_out_buff_23_V_we1.read();
    } else {
        fm_out_buff_23_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_24_V_address0 = grp_load_bias_fu_1928_fm_out_buff_24_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_24_V_address0 = grp_compute6_fu_1405_fm_out_buff_24_V_address0.read();
    } else {
        fm_out_buff_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_24_V_address1() {
    fm_out_buff_24_V_address1 = grp_compute6_fu_1405_fm_out_buff_24_V_address1.read();
}

void compute_output::thread_fm_out_buff_24_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_24_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_24_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_24_V_ce0 = grp_compute6_fu_1405_fm_out_buff_24_V_ce0.read();
    } else {
        fm_out_buff_24_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_24_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_24_V_ce1 = grp_compute6_fu_1405_fm_out_buff_24_V_ce1.read();
    } else {
        fm_out_buff_24_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_24_V_d0() {
    fm_out_buff_24_V_d0 = grp_load_bias_fu_1928_fm_out_buff_24_V_d0.read();
}

void compute_output::thread_fm_out_buff_24_V_d1() {
    fm_out_buff_24_V_d1 = grp_compute6_fu_1405_fm_out_buff_24_V_d1.read();
}

void compute_output::thread_fm_out_buff_24_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_24_V_we0 = grp_load_bias_fu_1928_fm_out_buff_24_V_we0.read();
    } else {
        fm_out_buff_24_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_24_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_24_V_we1 = grp_compute6_fu_1405_fm_out_buff_24_V_we1.read();
    } else {
        fm_out_buff_24_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_25_V_address0 = grp_load_bias_fu_1928_fm_out_buff_25_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_25_V_address0 = grp_compute6_fu_1405_fm_out_buff_25_V_address0.read();
    } else {
        fm_out_buff_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_25_V_address1() {
    fm_out_buff_25_V_address1 = grp_compute6_fu_1405_fm_out_buff_25_V_address1.read();
}

void compute_output::thread_fm_out_buff_25_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_25_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_25_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_25_V_ce0 = grp_compute6_fu_1405_fm_out_buff_25_V_ce0.read();
    } else {
        fm_out_buff_25_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_25_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_25_V_ce1 = grp_compute6_fu_1405_fm_out_buff_25_V_ce1.read();
    } else {
        fm_out_buff_25_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_25_V_d0() {
    fm_out_buff_25_V_d0 = grp_load_bias_fu_1928_fm_out_buff_25_V_d0.read();
}

void compute_output::thread_fm_out_buff_25_V_d1() {
    fm_out_buff_25_V_d1 = grp_compute6_fu_1405_fm_out_buff_25_V_d1.read();
}

void compute_output::thread_fm_out_buff_25_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_25_V_we0 = grp_load_bias_fu_1928_fm_out_buff_25_V_we0.read();
    } else {
        fm_out_buff_25_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_25_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_25_V_we1 = grp_compute6_fu_1405_fm_out_buff_25_V_we1.read();
    } else {
        fm_out_buff_25_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_26_V_address0 = grp_load_bias_fu_1928_fm_out_buff_26_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_26_V_address0 = grp_compute6_fu_1405_fm_out_buff_26_V_address0.read();
    } else {
        fm_out_buff_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_26_V_address1() {
    fm_out_buff_26_V_address1 = grp_compute6_fu_1405_fm_out_buff_26_V_address1.read();
}

void compute_output::thread_fm_out_buff_26_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_26_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_26_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_26_V_ce0 = grp_compute6_fu_1405_fm_out_buff_26_V_ce0.read();
    } else {
        fm_out_buff_26_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_26_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_26_V_ce1 = grp_compute6_fu_1405_fm_out_buff_26_V_ce1.read();
    } else {
        fm_out_buff_26_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_26_V_d0() {
    fm_out_buff_26_V_d0 = grp_load_bias_fu_1928_fm_out_buff_26_V_d0.read();
}

void compute_output::thread_fm_out_buff_26_V_d1() {
    fm_out_buff_26_V_d1 = grp_compute6_fu_1405_fm_out_buff_26_V_d1.read();
}

void compute_output::thread_fm_out_buff_26_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_26_V_we0 = grp_load_bias_fu_1928_fm_out_buff_26_V_we0.read();
    } else {
        fm_out_buff_26_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_26_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_26_V_we1 = grp_compute6_fu_1405_fm_out_buff_26_V_we1.read();
    } else {
        fm_out_buff_26_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_27_V_address0 = grp_load_bias_fu_1928_fm_out_buff_27_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_27_V_address0 = grp_compute6_fu_1405_fm_out_buff_27_V_address0.read();
    } else {
        fm_out_buff_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_27_V_address1() {
    fm_out_buff_27_V_address1 = grp_compute6_fu_1405_fm_out_buff_27_V_address1.read();
}

void compute_output::thread_fm_out_buff_27_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_27_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_27_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_27_V_ce0 = grp_compute6_fu_1405_fm_out_buff_27_V_ce0.read();
    } else {
        fm_out_buff_27_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_27_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_27_V_ce1 = grp_compute6_fu_1405_fm_out_buff_27_V_ce1.read();
    } else {
        fm_out_buff_27_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_27_V_d0() {
    fm_out_buff_27_V_d0 = grp_load_bias_fu_1928_fm_out_buff_27_V_d0.read();
}

void compute_output::thread_fm_out_buff_27_V_d1() {
    fm_out_buff_27_V_d1 = grp_compute6_fu_1405_fm_out_buff_27_V_d1.read();
}

void compute_output::thread_fm_out_buff_27_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_27_V_we0 = grp_load_bias_fu_1928_fm_out_buff_27_V_we0.read();
    } else {
        fm_out_buff_27_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_27_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_27_V_we1 = grp_compute6_fu_1405_fm_out_buff_27_V_we1.read();
    } else {
        fm_out_buff_27_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_28_V_address0 = grp_load_bias_fu_1928_fm_out_buff_28_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_28_V_address0 = grp_compute6_fu_1405_fm_out_buff_28_V_address0.read();
    } else {
        fm_out_buff_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_28_V_address1() {
    fm_out_buff_28_V_address1 = grp_compute6_fu_1405_fm_out_buff_28_V_address1.read();
}

void compute_output::thread_fm_out_buff_28_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_28_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_28_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_28_V_ce0 = grp_compute6_fu_1405_fm_out_buff_28_V_ce0.read();
    } else {
        fm_out_buff_28_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_28_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_28_V_ce1 = grp_compute6_fu_1405_fm_out_buff_28_V_ce1.read();
    } else {
        fm_out_buff_28_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_28_V_d0() {
    fm_out_buff_28_V_d0 = grp_load_bias_fu_1928_fm_out_buff_28_V_d0.read();
}

void compute_output::thread_fm_out_buff_28_V_d1() {
    fm_out_buff_28_V_d1 = grp_compute6_fu_1405_fm_out_buff_28_V_d1.read();
}

void compute_output::thread_fm_out_buff_28_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_28_V_we0 = grp_load_bias_fu_1928_fm_out_buff_28_V_we0.read();
    } else {
        fm_out_buff_28_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_28_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_28_V_we1 = grp_compute6_fu_1405_fm_out_buff_28_V_we1.read();
    } else {
        fm_out_buff_28_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_29_V_address0 = grp_load_bias_fu_1928_fm_out_buff_29_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_29_V_address0 = grp_compute6_fu_1405_fm_out_buff_29_V_address0.read();
    } else {
        fm_out_buff_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_29_V_address1() {
    fm_out_buff_29_V_address1 = grp_compute6_fu_1405_fm_out_buff_29_V_address1.read();
}

void compute_output::thread_fm_out_buff_29_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_29_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_29_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_29_V_ce0 = grp_compute6_fu_1405_fm_out_buff_29_V_ce0.read();
    } else {
        fm_out_buff_29_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_29_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_29_V_ce1 = grp_compute6_fu_1405_fm_out_buff_29_V_ce1.read();
    } else {
        fm_out_buff_29_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_29_V_d0() {
    fm_out_buff_29_V_d0 = grp_load_bias_fu_1928_fm_out_buff_29_V_d0.read();
}

void compute_output::thread_fm_out_buff_29_V_d1() {
    fm_out_buff_29_V_d1 = grp_compute6_fu_1405_fm_out_buff_29_V_d1.read();
}

void compute_output::thread_fm_out_buff_29_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_29_V_we0 = grp_load_bias_fu_1928_fm_out_buff_29_V_we0.read();
    } else {
        fm_out_buff_29_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_29_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_29_V_we1 = grp_compute6_fu_1405_fm_out_buff_29_V_we1.read();
    } else {
        fm_out_buff_29_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_2_V_address0 = grp_load_bias_fu_1928_fm_out_buff_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_2_V_address0 = grp_compute6_fu_1405_fm_out_buff_2_V_address0.read();
    } else {
        fm_out_buff_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_2_V_address1() {
    fm_out_buff_2_V_address1 = grp_compute6_fu_1405_fm_out_buff_2_V_address1.read();
}

void compute_output::thread_fm_out_buff_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_2_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_2_V_ce0 = grp_compute6_fu_1405_fm_out_buff_2_V_ce0.read();
    } else {
        fm_out_buff_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_2_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_2_V_ce1 = grp_compute6_fu_1405_fm_out_buff_2_V_ce1.read();
    } else {
        fm_out_buff_2_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_2_V_d0() {
    fm_out_buff_2_V_d0 = grp_load_bias_fu_1928_fm_out_buff_2_V_d0.read();
}

void compute_output::thread_fm_out_buff_2_V_d1() {
    fm_out_buff_2_V_d1 = grp_compute6_fu_1405_fm_out_buff_2_V_d1.read();
}

void compute_output::thread_fm_out_buff_2_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_2_V_we0 = grp_load_bias_fu_1928_fm_out_buff_2_V_we0.read();
    } else {
        fm_out_buff_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_2_V_we1 = grp_compute6_fu_1405_fm_out_buff_2_V_we1.read();
    } else {
        fm_out_buff_2_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_30_V_address0 = grp_load_bias_fu_1928_fm_out_buff_30_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_30_V_address0 = grp_compute6_fu_1405_fm_out_buff_30_V_address0.read();
    } else {
        fm_out_buff_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_30_V_address1() {
    fm_out_buff_30_V_address1 = grp_compute6_fu_1405_fm_out_buff_30_V_address1.read();
}

void compute_output::thread_fm_out_buff_30_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_30_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_30_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_30_V_ce0 = grp_compute6_fu_1405_fm_out_buff_30_V_ce0.read();
    } else {
        fm_out_buff_30_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_30_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_30_V_ce1 = grp_compute6_fu_1405_fm_out_buff_30_V_ce1.read();
    } else {
        fm_out_buff_30_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_30_V_d0() {
    fm_out_buff_30_V_d0 = grp_load_bias_fu_1928_fm_out_buff_30_V_d0.read();
}

void compute_output::thread_fm_out_buff_30_V_d1() {
    fm_out_buff_30_V_d1 = grp_compute6_fu_1405_fm_out_buff_30_V_d1.read();
}

void compute_output::thread_fm_out_buff_30_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_30_V_we0 = grp_load_bias_fu_1928_fm_out_buff_30_V_we0.read();
    } else {
        fm_out_buff_30_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_30_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_30_V_we1 = grp_compute6_fu_1405_fm_out_buff_30_V_we1.read();
    } else {
        fm_out_buff_30_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_31_V_address0 = grp_load_bias_fu_1928_fm_out_buff_31_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_31_V_address0 = grp_compute6_fu_1405_fm_out_buff_31_V_address0.read();
    } else {
        fm_out_buff_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_31_V_address1() {
    fm_out_buff_31_V_address1 = grp_compute6_fu_1405_fm_out_buff_31_V_address1.read();
}

void compute_output::thread_fm_out_buff_31_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_31_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_31_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_31_V_ce0 = grp_compute6_fu_1405_fm_out_buff_31_V_ce0.read();
    } else {
        fm_out_buff_31_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_31_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_31_V_ce1 = grp_compute6_fu_1405_fm_out_buff_31_V_ce1.read();
    } else {
        fm_out_buff_31_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_31_V_d0() {
    fm_out_buff_31_V_d0 = grp_load_bias_fu_1928_fm_out_buff_31_V_d0.read();
}

void compute_output::thread_fm_out_buff_31_V_d1() {
    fm_out_buff_31_V_d1 = grp_compute6_fu_1405_fm_out_buff_31_V_d1.read();
}

void compute_output::thread_fm_out_buff_31_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_31_V_we0 = grp_load_bias_fu_1928_fm_out_buff_31_V_we0.read();
    } else {
        fm_out_buff_31_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_31_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_31_V_we1 = grp_compute6_fu_1405_fm_out_buff_31_V_we1.read();
    } else {
        fm_out_buff_31_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_3_V_address0 = grp_load_bias_fu_1928_fm_out_buff_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_3_V_address0 = grp_compute6_fu_1405_fm_out_buff_3_V_address0.read();
    } else {
        fm_out_buff_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_3_V_address1() {
    fm_out_buff_3_V_address1 = grp_compute6_fu_1405_fm_out_buff_3_V_address1.read();
}

void compute_output::thread_fm_out_buff_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_3_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_3_V_ce0 = grp_compute6_fu_1405_fm_out_buff_3_V_ce0.read();
    } else {
        fm_out_buff_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_3_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_3_V_ce1 = grp_compute6_fu_1405_fm_out_buff_3_V_ce1.read();
    } else {
        fm_out_buff_3_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_3_V_d0() {
    fm_out_buff_3_V_d0 = grp_load_bias_fu_1928_fm_out_buff_3_V_d0.read();
}

void compute_output::thread_fm_out_buff_3_V_d1() {
    fm_out_buff_3_V_d1 = grp_compute6_fu_1405_fm_out_buff_3_V_d1.read();
}

void compute_output::thread_fm_out_buff_3_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_3_V_we0 = grp_load_bias_fu_1928_fm_out_buff_3_V_we0.read();
    } else {
        fm_out_buff_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_3_V_we1 = grp_compute6_fu_1405_fm_out_buff_3_V_we1.read();
    } else {
        fm_out_buff_3_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_4_V_address0 = grp_load_bias_fu_1928_fm_out_buff_4_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_4_V_address0 = grp_compute6_fu_1405_fm_out_buff_4_V_address0.read();
    } else {
        fm_out_buff_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_4_V_address1() {
    fm_out_buff_4_V_address1 = grp_compute6_fu_1405_fm_out_buff_4_V_address1.read();
}

void compute_output::thread_fm_out_buff_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_4_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_4_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_4_V_ce0 = grp_compute6_fu_1405_fm_out_buff_4_V_ce0.read();
    } else {
        fm_out_buff_4_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_4_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_4_V_ce1 = grp_compute6_fu_1405_fm_out_buff_4_V_ce1.read();
    } else {
        fm_out_buff_4_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_4_V_d0() {
    fm_out_buff_4_V_d0 = grp_load_bias_fu_1928_fm_out_buff_4_V_d0.read();
}

void compute_output::thread_fm_out_buff_4_V_d1() {
    fm_out_buff_4_V_d1 = grp_compute6_fu_1405_fm_out_buff_4_V_d1.read();
}

void compute_output::thread_fm_out_buff_4_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_4_V_we0 = grp_load_bias_fu_1928_fm_out_buff_4_V_we0.read();
    } else {
        fm_out_buff_4_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_4_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_4_V_we1 = grp_compute6_fu_1405_fm_out_buff_4_V_we1.read();
    } else {
        fm_out_buff_4_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_5_V_address0 = grp_load_bias_fu_1928_fm_out_buff_5_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_5_V_address0 = grp_compute6_fu_1405_fm_out_buff_5_V_address0.read();
    } else {
        fm_out_buff_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_5_V_address1() {
    fm_out_buff_5_V_address1 = grp_compute6_fu_1405_fm_out_buff_5_V_address1.read();
}

void compute_output::thread_fm_out_buff_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_5_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_5_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_5_V_ce0 = grp_compute6_fu_1405_fm_out_buff_5_V_ce0.read();
    } else {
        fm_out_buff_5_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_5_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_5_V_ce1 = grp_compute6_fu_1405_fm_out_buff_5_V_ce1.read();
    } else {
        fm_out_buff_5_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_5_V_d0() {
    fm_out_buff_5_V_d0 = grp_load_bias_fu_1928_fm_out_buff_5_V_d0.read();
}

void compute_output::thread_fm_out_buff_5_V_d1() {
    fm_out_buff_5_V_d1 = grp_compute6_fu_1405_fm_out_buff_5_V_d1.read();
}

void compute_output::thread_fm_out_buff_5_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_5_V_we0 = grp_load_bias_fu_1928_fm_out_buff_5_V_we0.read();
    } else {
        fm_out_buff_5_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_5_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_5_V_we1 = grp_compute6_fu_1405_fm_out_buff_5_V_we1.read();
    } else {
        fm_out_buff_5_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_6_V_address0 = grp_load_bias_fu_1928_fm_out_buff_6_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_6_V_address0 = grp_compute6_fu_1405_fm_out_buff_6_V_address0.read();
    } else {
        fm_out_buff_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_6_V_address1() {
    fm_out_buff_6_V_address1 = grp_compute6_fu_1405_fm_out_buff_6_V_address1.read();
}

void compute_output::thread_fm_out_buff_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_6_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_6_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_6_V_ce0 = grp_compute6_fu_1405_fm_out_buff_6_V_ce0.read();
    } else {
        fm_out_buff_6_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_6_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_6_V_ce1 = grp_compute6_fu_1405_fm_out_buff_6_V_ce1.read();
    } else {
        fm_out_buff_6_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_6_V_d0() {
    fm_out_buff_6_V_d0 = grp_load_bias_fu_1928_fm_out_buff_6_V_d0.read();
}

void compute_output::thread_fm_out_buff_6_V_d1() {
    fm_out_buff_6_V_d1 = grp_compute6_fu_1405_fm_out_buff_6_V_d1.read();
}

void compute_output::thread_fm_out_buff_6_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_6_V_we0 = grp_load_bias_fu_1928_fm_out_buff_6_V_we0.read();
    } else {
        fm_out_buff_6_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_6_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_6_V_we1 = grp_compute6_fu_1405_fm_out_buff_6_V_we1.read();
    } else {
        fm_out_buff_6_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_7_V_address0 = grp_load_bias_fu_1928_fm_out_buff_7_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_7_V_address0 = grp_compute6_fu_1405_fm_out_buff_7_V_address0.read();
    } else {
        fm_out_buff_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_7_V_address1() {
    fm_out_buff_7_V_address1 = grp_compute6_fu_1405_fm_out_buff_7_V_address1.read();
}

void compute_output::thread_fm_out_buff_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_7_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_7_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_7_V_ce0 = grp_compute6_fu_1405_fm_out_buff_7_V_ce0.read();
    } else {
        fm_out_buff_7_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_7_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_7_V_ce1 = grp_compute6_fu_1405_fm_out_buff_7_V_ce1.read();
    } else {
        fm_out_buff_7_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_7_V_d0() {
    fm_out_buff_7_V_d0 = grp_load_bias_fu_1928_fm_out_buff_7_V_d0.read();
}

void compute_output::thread_fm_out_buff_7_V_d1() {
    fm_out_buff_7_V_d1 = grp_compute6_fu_1405_fm_out_buff_7_V_d1.read();
}

void compute_output::thread_fm_out_buff_7_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_7_V_we0 = grp_load_bias_fu_1928_fm_out_buff_7_V_we0.read();
    } else {
        fm_out_buff_7_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_7_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_7_V_we1 = grp_compute6_fu_1405_fm_out_buff_7_V_we1.read();
    } else {
        fm_out_buff_7_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_8_V_address0 = grp_load_bias_fu_1928_fm_out_buff_8_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_8_V_address0 = grp_compute6_fu_1405_fm_out_buff_8_V_address0.read();
    } else {
        fm_out_buff_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_8_V_address1() {
    fm_out_buff_8_V_address1 = grp_compute6_fu_1405_fm_out_buff_8_V_address1.read();
}

void compute_output::thread_fm_out_buff_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_8_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_8_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_8_V_ce0 = grp_compute6_fu_1405_fm_out_buff_8_V_ce0.read();
    } else {
        fm_out_buff_8_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_8_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_8_V_ce1 = grp_compute6_fu_1405_fm_out_buff_8_V_ce1.read();
    } else {
        fm_out_buff_8_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_8_V_d0() {
    fm_out_buff_8_V_d0 = grp_load_bias_fu_1928_fm_out_buff_8_V_d0.read();
}

void compute_output::thread_fm_out_buff_8_V_d1() {
    fm_out_buff_8_V_d1 = grp_compute6_fu_1405_fm_out_buff_8_V_d1.read();
}

void compute_output::thread_fm_out_buff_8_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_8_V_we0 = grp_load_bias_fu_1928_fm_out_buff_8_V_we0.read();
    } else {
        fm_out_buff_8_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_8_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_8_V_we1 = grp_compute6_fu_1405_fm_out_buff_8_V_we1.read();
    } else {
        fm_out_buff_8_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_9_V_address0 = grp_load_bias_fu_1928_fm_out_buff_9_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_9_V_address0 = grp_compute6_fu_1405_fm_out_buff_9_V_address0.read();
    } else {
        fm_out_buff_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void compute_output::thread_fm_out_buff_9_V_address1() {
    fm_out_buff_9_V_address1 = grp_compute6_fu_1405_fm_out_buff_9_V_address1.read();
}

void compute_output::thread_fm_out_buff_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_9_V_ce0 = grp_load_bias_fu_1928_fm_out_buff_9_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_9_V_ce0 = grp_compute6_fu_1405_fm_out_buff_9_V_ce0.read();
    } else {
        fm_out_buff_9_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_9_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_9_V_ce1 = grp_compute6_fu_1405_fm_out_buff_9_V_ce1.read();
    } else {
        fm_out_buff_9_V_ce1 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_9_V_d0() {
    fm_out_buff_9_V_d0 = grp_load_bias_fu_1928_fm_out_buff_9_V_d0.read();
}

void compute_output::thread_fm_out_buff_9_V_d1() {
    fm_out_buff_9_V_d1 = grp_compute6_fu_1405_fm_out_buff_9_V_d1.read();
}

void compute_output::thread_fm_out_buff_9_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fm_out_buff_9_V_we0 = grp_load_bias_fu_1928_fm_out_buff_9_V_we0.read();
    } else {
        fm_out_buff_9_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_fm_out_buff_9_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        fm_out_buff_9_V_we1 = grp_compute6_fu_1405_fm_out_buff_9_V_we1.read();
    } else {
        fm_out_buff_9_V_we1 = ap_const_logic_0;
    }
}

void compute_output::thread_grp_compute6_fu_1405_ap_start() {
    grp_compute6_fu_1405_ap_start = grp_compute6_fu_1405_ap_start_reg.read();
}

void compute_output::thread_grp_compute6_fu_1405_fm_in_buff_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_0_V_q0 = fm_in_buff1_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_0_V_q0 = fm_in_buff2_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_fm_in_buff_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_fm_in_buff_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_1_V_q0 = fm_in_buff1_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_1_V_q0 = fm_in_buff2_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_fm_in_buff_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_fm_in_buff_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_2_V_q0 = fm_in_buff1_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_2_V_q0 = fm_in_buff2_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_fm_in_buff_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_fm_in_buff_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_3_V_q0 = fm_in_buff1_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_fm_in_buff_3_V_q0 = fm_in_buff2_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_fm_in_buff_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_0_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_0_V_q0 = wt_buff1_0_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_0_V_q0 = wt_buff2_0_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_0_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_0_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_1_V_q0 = wt_buff1_0_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_1_V_q0 = wt_buff2_0_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_0_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_0_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_2_V_q0 = wt_buff1_0_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_2_V_q0 = wt_buff2_0_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_0_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_0_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_3_V_q0 = wt_buff1_0_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_0_3_V_q0 = wt_buff2_0_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_0_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_10_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_0_V_q0 = wt_buff1_10_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_0_V_q0 = wt_buff2_10_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_10_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_10_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_1_V_q0 = wt_buff1_10_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_1_V_q0 = wt_buff2_10_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_10_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_10_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_2_V_q0 = wt_buff1_10_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_2_V_q0 = wt_buff2_10_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_10_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_10_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_3_V_q0 = wt_buff1_10_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_10_3_V_q0 = wt_buff2_10_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_10_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_11_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_0_V_q0 = wt_buff1_11_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_0_V_q0 = wt_buff2_11_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_11_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_11_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_1_V_q0 = wt_buff1_11_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_1_V_q0 = wt_buff2_11_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_11_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_11_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_2_V_q0 = wt_buff1_11_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_2_V_q0 = wt_buff2_11_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_11_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_11_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_3_V_q0 = wt_buff1_11_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_11_3_V_q0 = wt_buff2_11_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_11_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_12_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_0_V_q0 = wt_buff1_12_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_0_V_q0 = wt_buff2_12_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_12_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_12_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_1_V_q0 = wt_buff1_12_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_1_V_q0 = wt_buff2_12_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_12_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_12_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_2_V_q0 = wt_buff1_12_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_2_V_q0 = wt_buff2_12_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_12_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_12_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_3_V_q0 = wt_buff1_12_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_12_3_V_q0 = wt_buff2_12_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_12_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_13_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_0_V_q0 = wt_buff1_13_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_0_V_q0 = wt_buff2_13_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_13_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_13_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_1_V_q0 = wt_buff1_13_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_1_V_q0 = wt_buff2_13_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_13_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_13_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_2_V_q0 = wt_buff1_13_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_2_V_q0 = wt_buff2_13_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_13_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_13_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_3_V_q0 = wt_buff1_13_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_13_3_V_q0 = wt_buff2_13_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_13_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_14_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_0_V_q0 = wt_buff1_14_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_0_V_q0 = wt_buff2_14_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_14_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_14_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_1_V_q0 = wt_buff1_14_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_1_V_q0 = wt_buff2_14_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_14_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_14_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_2_V_q0 = wt_buff1_14_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_2_V_q0 = wt_buff2_14_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_14_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_14_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_3_V_q0 = wt_buff1_14_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_14_3_V_q0 = wt_buff2_14_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_14_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_15_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_0_V_q0 = wt_buff1_15_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_0_V_q0 = wt_buff2_15_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_15_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_15_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_1_V_q0 = wt_buff1_15_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_1_V_q0 = wt_buff2_15_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_15_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_15_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_2_V_q0 = wt_buff1_15_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_2_V_q0 = wt_buff2_15_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_15_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_15_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_3_V_q0 = wt_buff1_15_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_15_3_V_q0 = wt_buff2_15_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_15_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_16_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_0_V_q0 = wt_buff1_16_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_0_V_q0 = wt_buff2_16_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_16_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_16_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_1_V_q0 = wt_buff1_16_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_1_V_q0 = wt_buff2_16_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_16_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_16_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_2_V_q0 = wt_buff1_16_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_2_V_q0 = wt_buff2_16_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_16_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_16_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_3_V_q0 = wt_buff1_16_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_16_3_V_q0 = wt_buff2_16_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_16_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_17_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_0_V_q0 = wt_buff1_17_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_0_V_q0 = wt_buff2_17_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_17_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_17_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_1_V_q0 = wt_buff1_17_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_1_V_q0 = wt_buff2_17_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_17_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_17_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_2_V_q0 = wt_buff1_17_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_2_V_q0 = wt_buff2_17_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_17_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_17_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_3_V_q0 = wt_buff1_17_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_17_3_V_q0 = wt_buff2_17_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_17_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_18_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_0_V_q0 = wt_buff1_18_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_0_V_q0 = wt_buff2_18_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_18_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_18_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_1_V_q0 = wt_buff1_18_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_1_V_q0 = wt_buff2_18_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_18_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_18_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_2_V_q0 = wt_buff1_18_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_2_V_q0 = wt_buff2_18_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_18_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_18_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_3_V_q0 = wt_buff1_18_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_18_3_V_q0 = wt_buff2_18_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_18_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_19_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_0_V_q0 = wt_buff1_19_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_0_V_q0 = wt_buff2_19_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_19_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_19_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_1_V_q0 = wt_buff1_19_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_1_V_q0 = wt_buff2_19_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_19_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_19_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_2_V_q0 = wt_buff1_19_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_2_V_q0 = wt_buff2_19_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_19_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_19_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_3_V_q0 = wt_buff1_19_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_19_3_V_q0 = wt_buff2_19_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_19_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_1_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_0_V_q0 = wt_buff1_1_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_0_V_q0 = wt_buff2_1_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_1_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_1_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_1_V_q0 = wt_buff1_1_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_1_V_q0 = wt_buff2_1_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_1_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_1_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_2_V_q0 = wt_buff1_1_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_2_V_q0 = wt_buff2_1_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_1_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_1_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_3_V_q0 = wt_buff1_1_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_1_3_V_q0 = wt_buff2_1_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_1_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_20_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_0_V_q0 = wt_buff1_20_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_0_V_q0 = wt_buff2_20_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_20_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_20_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_1_V_q0 = wt_buff1_20_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_1_V_q0 = wt_buff2_20_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_20_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_20_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_2_V_q0 = wt_buff1_20_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_2_V_q0 = wt_buff2_20_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_20_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_20_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_3_V_q0 = wt_buff1_20_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_20_3_V_q0 = wt_buff2_20_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_20_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_21_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_0_V_q0 = wt_buff1_21_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_0_V_q0 = wt_buff2_21_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_21_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_21_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_1_V_q0 = wt_buff1_21_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_1_V_q0 = wt_buff2_21_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_21_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_21_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_2_V_q0 = wt_buff1_21_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_2_V_q0 = wt_buff2_21_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_21_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_21_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_3_V_q0 = wt_buff1_21_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_21_3_V_q0 = wt_buff2_21_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_21_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_22_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_0_V_q0 = wt_buff1_22_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_0_V_q0 = wt_buff2_22_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_22_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_22_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_1_V_q0 = wt_buff1_22_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_1_V_q0 = wt_buff2_22_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_22_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_22_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_2_V_q0 = wt_buff1_22_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_2_V_q0 = wt_buff2_22_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_22_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_22_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_3_V_q0 = wt_buff1_22_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_22_3_V_q0 = wt_buff2_22_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_22_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_23_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_0_V_q0 = wt_buff1_23_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_0_V_q0 = wt_buff2_23_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_23_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_23_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_1_V_q0 = wt_buff1_23_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_1_V_q0 = wt_buff2_23_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_23_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_23_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_2_V_q0 = wt_buff1_23_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_2_V_q0 = wt_buff2_23_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_23_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_23_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_3_V_q0 = wt_buff1_23_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_23_3_V_q0 = wt_buff2_23_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_23_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_24_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_0_V_q0 = wt_buff1_24_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_0_V_q0 = wt_buff2_24_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_24_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_24_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_1_V_q0 = wt_buff1_24_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_1_V_q0 = wt_buff2_24_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_24_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_24_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_2_V_q0 = wt_buff1_24_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_2_V_q0 = wt_buff2_24_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_24_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_24_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_3_V_q0 = wt_buff1_24_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_24_3_V_q0 = wt_buff2_24_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_24_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_25_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_0_V_q0 = wt_buff1_25_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_0_V_q0 = wt_buff2_25_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_25_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_25_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_1_V_q0 = wt_buff1_25_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_1_V_q0 = wt_buff2_25_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_25_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_25_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_2_V_q0 = wt_buff1_25_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_2_V_q0 = wt_buff2_25_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_25_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_25_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_3_V_q0 = wt_buff1_25_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_25_3_V_q0 = wt_buff2_25_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_25_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_26_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_0_V_q0 = wt_buff1_26_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_0_V_q0 = wt_buff2_26_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_26_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_26_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_1_V_q0 = wt_buff1_26_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_1_V_q0 = wt_buff2_26_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_26_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_26_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_2_V_q0 = wt_buff1_26_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_2_V_q0 = wt_buff2_26_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_26_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_26_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_3_V_q0 = wt_buff1_26_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_26_3_V_q0 = wt_buff2_26_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_26_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_27_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_0_V_q0 = wt_buff1_27_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_0_V_q0 = wt_buff2_27_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_27_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_27_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_1_V_q0 = wt_buff1_27_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_1_V_q0 = wt_buff2_27_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_27_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_27_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_2_V_q0 = wt_buff1_27_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_2_V_q0 = wt_buff2_27_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_27_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_27_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_3_V_q0 = wt_buff1_27_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_27_3_V_q0 = wt_buff2_27_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_27_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_28_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_0_V_q0 = wt_buff1_28_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_0_V_q0 = wt_buff2_28_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_28_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_28_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_1_V_q0 = wt_buff1_28_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_1_V_q0 = wt_buff2_28_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_28_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_28_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_2_V_q0 = wt_buff1_28_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_2_V_q0 = wt_buff2_28_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_28_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_28_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_3_V_q0 = wt_buff1_28_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_28_3_V_q0 = wt_buff2_28_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_28_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_29_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_0_V_q0 = wt_buff1_29_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_0_V_q0 = wt_buff2_29_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_29_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_29_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_1_V_q0 = wt_buff1_29_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_1_V_q0 = wt_buff2_29_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_29_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_29_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_2_V_q0 = wt_buff1_29_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_2_V_q0 = wt_buff2_29_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_29_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_29_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_3_V_q0 = wt_buff1_29_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_29_3_V_q0 = wt_buff2_29_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_29_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_2_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_0_V_q0 = wt_buff1_2_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_0_V_q0 = wt_buff2_2_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_2_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_2_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_1_V_q0 = wt_buff1_2_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_1_V_q0 = wt_buff2_2_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_2_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_2_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_2_V_q0 = wt_buff1_2_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_2_V_q0 = wt_buff2_2_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_2_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_2_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_3_V_q0 = wt_buff1_2_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_2_3_V_q0 = wt_buff2_2_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_2_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_30_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_0_V_q0 = wt_buff1_30_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_0_V_q0 = wt_buff2_30_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_30_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_30_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_1_V_q0 = wt_buff1_30_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_1_V_q0 = wt_buff2_30_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_30_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_30_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_2_V_q0 = wt_buff1_30_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_2_V_q0 = wt_buff2_30_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_30_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_30_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_3_V_q0 = wt_buff1_30_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_30_3_V_q0 = wt_buff2_30_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_30_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_31_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_0_V_q0 = wt_buff1_31_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_0_V_q0 = wt_buff2_31_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_31_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_31_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_1_V_q0 = wt_buff1_31_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_1_V_q0 = wt_buff2_31_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_31_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_31_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_2_V_q0 = wt_buff1_31_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_2_V_q0 = wt_buff2_31_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_31_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_31_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_3_V_q0 = wt_buff1_31_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_31_3_V_q0 = wt_buff2_31_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_31_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_3_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_0_V_q0 = wt_buff1_3_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_0_V_q0 = wt_buff2_3_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_3_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_3_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_1_V_q0 = wt_buff1_3_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_1_V_q0 = wt_buff2_3_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_3_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_3_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_2_V_q0 = wt_buff1_3_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_2_V_q0 = wt_buff2_3_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_3_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_3_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_3_V_q0 = wt_buff1_3_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_3_3_V_q0 = wt_buff2_3_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_3_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_4_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_0_V_q0 = wt_buff1_4_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_0_V_q0 = wt_buff2_4_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_4_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_4_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_1_V_q0 = wt_buff1_4_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_1_V_q0 = wt_buff2_4_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_4_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_4_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_2_V_q0 = wt_buff1_4_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_2_V_q0 = wt_buff2_4_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_4_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_4_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_3_V_q0 = wt_buff1_4_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_4_3_V_q0 = wt_buff2_4_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_4_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_5_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_0_V_q0 = wt_buff1_5_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_0_V_q0 = wt_buff2_5_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_5_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_5_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_1_V_q0 = wt_buff1_5_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_1_V_q0 = wt_buff2_5_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_5_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_5_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_2_V_q0 = wt_buff1_5_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_2_V_q0 = wt_buff2_5_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_5_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_5_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_3_V_q0 = wt_buff1_5_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_5_3_V_q0 = wt_buff2_5_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_5_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_6_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_0_V_q0 = wt_buff1_6_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_0_V_q0 = wt_buff2_6_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_6_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_6_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_1_V_q0 = wt_buff1_6_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_1_V_q0 = wt_buff2_6_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_6_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_6_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_2_V_q0 = wt_buff1_6_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_2_V_q0 = wt_buff2_6_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_6_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_6_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_3_V_q0 = wt_buff1_6_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_6_3_V_q0 = wt_buff2_6_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_6_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_7_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_0_V_q0 = wt_buff1_7_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_0_V_q0 = wt_buff2_7_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_7_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_7_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_1_V_q0 = wt_buff1_7_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_1_V_q0 = wt_buff2_7_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_7_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_7_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_2_V_q0 = wt_buff1_7_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_2_V_q0 = wt_buff2_7_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_7_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_7_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_3_V_q0 = wt_buff1_7_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_7_3_V_q0 = wt_buff2_7_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_7_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_8_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_0_V_q0 = wt_buff1_8_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_0_V_q0 = wt_buff2_8_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_8_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_8_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_1_V_q0 = wt_buff1_8_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_1_V_q0 = wt_buff2_8_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_8_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_8_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_2_V_q0 = wt_buff1_8_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_2_V_q0 = wt_buff2_8_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_8_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_8_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_3_V_q0 = wt_buff1_8_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_8_3_V_q0 = wt_buff2_8_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_8_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_9_0_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_0_V_q0 = wt_buff1_9_0_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_0_V_q0 = wt_buff2_9_0_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_9_0_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_9_1_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_1_V_q0 = wt_buff1_9_1_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_1_V_q0 = wt_buff2_9_1_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_9_1_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_9_2_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_2_V_q0 = wt_buff1_9_2_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_2_V_q0 = wt_buff2_9_2_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_9_2_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_compute6_fu_1405_wt_buff_9_3_V_q0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_3_V_q0 = wt_buff1_9_3_V_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        grp_compute6_fu_1405_wt_buff_9_3_V_q0 = wt_buff2_9_3_V_q0.read();
    } else {
        grp_compute6_fu_1405_wt_buff_9_3_V_q0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_load_bias_fu_1928_ap_start() {
    grp_load_bias_fu_1928_ap_start = grp_load_bias_fu_1928_ap_start_reg.read();
}

void compute_output::thread_grp_load_input_fu_1606_ap_start() {
    grp_load_input_fu_1606_ap_start = grp_load_input_fu_1606_ap_start_reg.read();
}

void compute_output::thread_grp_load_input_fu_1606_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        grp_load_input_fu_1606_n = ti_0_reg_1368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_load_input_fu_1606_n = ap_const_lv16_0;
    } else {
        grp_load_input_fu_1606_n =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_grp_load_weight_fu_1645_ap_start() {
    grp_load_weight_fu_1645_ap_start = grp_load_weight_fu_1645_ap_start_reg.read();
}

void compute_output::thread_grp_load_weight_fu_1645_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        grp_load_weight_fu_1645_n = ti_0_reg_1368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_load_weight_fu_1645_n = ap_const_lv16_0;
    } else {
        grp_load_weight_fu_1645_n =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void compute_output::thread_icmp_ln199_fu_2062_p2() {
    icmp_ln199_fu_2062_p2 = (!ti_0_reg_1368.read().is_01() || !ch_in.read().is_01())? sc_lv<1>(): (sc_biguint<16>(ti_0_reg_1368.read()) < sc_biguint<16>(ch_in.read()));
}

void compute_output::thread_m_axi_in1_V_ARADDR() {
    m_axi_in1_V_ARADDR = grp_load_input_fu_1606_m_axi_in1_V_ARADDR.read();
}

void compute_output::thread_m_axi_in1_V_ARBURST() {
    m_axi_in1_V_ARBURST = grp_load_input_fu_1606_m_axi_in1_V_ARBURST.read();
}

void compute_output::thread_m_axi_in1_V_ARCACHE() {
    m_axi_in1_V_ARCACHE = grp_load_input_fu_1606_m_axi_in1_V_ARCACHE.read();
}

void compute_output::thread_m_axi_in1_V_ARID() {
    m_axi_in1_V_ARID = grp_load_input_fu_1606_m_axi_in1_V_ARID.read();
}

void compute_output::thread_m_axi_in1_V_ARLEN() {
    m_axi_in1_V_ARLEN = grp_load_input_fu_1606_m_axi_in1_V_ARLEN.read();
}

void compute_output::thread_m_axi_in1_V_ARLOCK() {
    m_axi_in1_V_ARLOCK = grp_load_input_fu_1606_m_axi_in1_V_ARLOCK.read();
}

void compute_output::thread_m_axi_in1_V_ARPROT() {
    m_axi_in1_V_ARPROT = grp_load_input_fu_1606_m_axi_in1_V_ARPROT.read();
}

void compute_output::thread_m_axi_in1_V_ARQOS() {
    m_axi_in1_V_ARQOS = grp_load_input_fu_1606_m_axi_in1_V_ARQOS.read();
}

void compute_output::thread_m_axi_in1_V_ARREGION() {
    m_axi_in1_V_ARREGION = grp_load_input_fu_1606_m_axi_in1_V_ARREGION.read();
}

void compute_output::thread_m_axi_in1_V_ARSIZE() {
    m_axi_in1_V_ARSIZE = grp_load_input_fu_1606_m_axi_in1_V_ARSIZE.read();
}

void compute_output::thread_m_axi_in1_V_ARUSER() {
    m_axi_in1_V_ARUSER = grp_load_input_fu_1606_m_axi_in1_V_ARUSER.read();
}

void compute_output::thread_m_axi_in1_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in1_V_ARVALID = grp_load_input_fu_1606_m_axi_in1_V_ARVALID.read();
    } else {
        m_axi_in1_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in1_V_AWADDR() {
    m_axi_in1_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in1_V_AWBURST() {
    m_axi_in1_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in1_V_AWCACHE() {
    m_axi_in1_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in1_V_AWID() {
    m_axi_in1_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in1_V_AWLEN() {
    m_axi_in1_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in1_V_AWLOCK() {
    m_axi_in1_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in1_V_AWPROT() {
    m_axi_in1_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in1_V_AWQOS() {
    m_axi_in1_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in1_V_AWREGION() {
    m_axi_in1_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in1_V_AWSIZE() {
    m_axi_in1_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in1_V_AWUSER() {
    m_axi_in1_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in1_V_AWVALID() {
    m_axi_in1_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in1_V_BREADY() {
    m_axi_in1_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_in1_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in1_V_RREADY = grp_load_input_fu_1606_m_axi_in1_V_RREADY.read();
    } else {
        m_axi_in1_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in1_V_WDATA() {
    m_axi_in1_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_in1_V_WID() {
    m_axi_in1_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in1_V_WLAST() {
    m_axi_in1_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_in1_V_WSTRB() {
    m_axi_in1_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in1_V_WUSER() {
    m_axi_in1_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in1_V_WVALID() {
    m_axi_in1_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in2_V_ARADDR() {
    m_axi_in2_V_ARADDR = grp_load_input_fu_1606_m_axi_in2_V_ARADDR.read();
}

void compute_output::thread_m_axi_in2_V_ARBURST() {
    m_axi_in2_V_ARBURST = grp_load_input_fu_1606_m_axi_in2_V_ARBURST.read();
}

void compute_output::thread_m_axi_in2_V_ARCACHE() {
    m_axi_in2_V_ARCACHE = grp_load_input_fu_1606_m_axi_in2_V_ARCACHE.read();
}

void compute_output::thread_m_axi_in2_V_ARID() {
    m_axi_in2_V_ARID = grp_load_input_fu_1606_m_axi_in2_V_ARID.read();
}

void compute_output::thread_m_axi_in2_V_ARLEN() {
    m_axi_in2_V_ARLEN = grp_load_input_fu_1606_m_axi_in2_V_ARLEN.read();
}

void compute_output::thread_m_axi_in2_V_ARLOCK() {
    m_axi_in2_V_ARLOCK = grp_load_input_fu_1606_m_axi_in2_V_ARLOCK.read();
}

void compute_output::thread_m_axi_in2_V_ARPROT() {
    m_axi_in2_V_ARPROT = grp_load_input_fu_1606_m_axi_in2_V_ARPROT.read();
}

void compute_output::thread_m_axi_in2_V_ARQOS() {
    m_axi_in2_V_ARQOS = grp_load_input_fu_1606_m_axi_in2_V_ARQOS.read();
}

void compute_output::thread_m_axi_in2_V_ARREGION() {
    m_axi_in2_V_ARREGION = grp_load_input_fu_1606_m_axi_in2_V_ARREGION.read();
}

void compute_output::thread_m_axi_in2_V_ARSIZE() {
    m_axi_in2_V_ARSIZE = grp_load_input_fu_1606_m_axi_in2_V_ARSIZE.read();
}

void compute_output::thread_m_axi_in2_V_ARUSER() {
    m_axi_in2_V_ARUSER = grp_load_input_fu_1606_m_axi_in2_V_ARUSER.read();
}

void compute_output::thread_m_axi_in2_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in2_V_ARVALID = grp_load_input_fu_1606_m_axi_in2_V_ARVALID.read();
    } else {
        m_axi_in2_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in2_V_AWADDR() {
    m_axi_in2_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in2_V_AWBURST() {
    m_axi_in2_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in2_V_AWCACHE() {
    m_axi_in2_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in2_V_AWID() {
    m_axi_in2_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in2_V_AWLEN() {
    m_axi_in2_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in2_V_AWLOCK() {
    m_axi_in2_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in2_V_AWPROT() {
    m_axi_in2_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in2_V_AWQOS() {
    m_axi_in2_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in2_V_AWREGION() {
    m_axi_in2_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in2_V_AWSIZE() {
    m_axi_in2_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in2_V_AWUSER() {
    m_axi_in2_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in2_V_AWVALID() {
    m_axi_in2_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in2_V_BREADY() {
    m_axi_in2_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_in2_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in2_V_RREADY = grp_load_input_fu_1606_m_axi_in2_V_RREADY.read();
    } else {
        m_axi_in2_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in2_V_WDATA() {
    m_axi_in2_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_in2_V_WID() {
    m_axi_in2_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in2_V_WLAST() {
    m_axi_in2_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_in2_V_WSTRB() {
    m_axi_in2_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in2_V_WUSER() {
    m_axi_in2_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in2_V_WVALID() {
    m_axi_in2_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in3_V_ARADDR() {
    m_axi_in3_V_ARADDR = grp_load_input_fu_1606_m_axi_in3_V_ARADDR.read();
}

void compute_output::thread_m_axi_in3_V_ARBURST() {
    m_axi_in3_V_ARBURST = grp_load_input_fu_1606_m_axi_in3_V_ARBURST.read();
}

void compute_output::thread_m_axi_in3_V_ARCACHE() {
    m_axi_in3_V_ARCACHE = grp_load_input_fu_1606_m_axi_in3_V_ARCACHE.read();
}

void compute_output::thread_m_axi_in3_V_ARID() {
    m_axi_in3_V_ARID = grp_load_input_fu_1606_m_axi_in3_V_ARID.read();
}

void compute_output::thread_m_axi_in3_V_ARLEN() {
    m_axi_in3_V_ARLEN = grp_load_input_fu_1606_m_axi_in3_V_ARLEN.read();
}

void compute_output::thread_m_axi_in3_V_ARLOCK() {
    m_axi_in3_V_ARLOCK = grp_load_input_fu_1606_m_axi_in3_V_ARLOCK.read();
}

void compute_output::thread_m_axi_in3_V_ARPROT() {
    m_axi_in3_V_ARPROT = grp_load_input_fu_1606_m_axi_in3_V_ARPROT.read();
}

void compute_output::thread_m_axi_in3_V_ARQOS() {
    m_axi_in3_V_ARQOS = grp_load_input_fu_1606_m_axi_in3_V_ARQOS.read();
}

void compute_output::thread_m_axi_in3_V_ARREGION() {
    m_axi_in3_V_ARREGION = grp_load_input_fu_1606_m_axi_in3_V_ARREGION.read();
}

void compute_output::thread_m_axi_in3_V_ARSIZE() {
    m_axi_in3_V_ARSIZE = grp_load_input_fu_1606_m_axi_in3_V_ARSIZE.read();
}

void compute_output::thread_m_axi_in3_V_ARUSER() {
    m_axi_in3_V_ARUSER = grp_load_input_fu_1606_m_axi_in3_V_ARUSER.read();
}

void compute_output::thread_m_axi_in3_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in3_V_ARVALID = grp_load_input_fu_1606_m_axi_in3_V_ARVALID.read();
    } else {
        m_axi_in3_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in3_V_AWADDR() {
    m_axi_in3_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in3_V_AWBURST() {
    m_axi_in3_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in3_V_AWCACHE() {
    m_axi_in3_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in3_V_AWID() {
    m_axi_in3_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in3_V_AWLEN() {
    m_axi_in3_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in3_V_AWLOCK() {
    m_axi_in3_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in3_V_AWPROT() {
    m_axi_in3_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in3_V_AWQOS() {
    m_axi_in3_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in3_V_AWREGION() {
    m_axi_in3_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in3_V_AWSIZE() {
    m_axi_in3_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in3_V_AWUSER() {
    m_axi_in3_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in3_V_AWVALID() {
    m_axi_in3_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in3_V_BREADY() {
    m_axi_in3_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_in3_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in3_V_RREADY = grp_load_input_fu_1606_m_axi_in3_V_RREADY.read();
    } else {
        m_axi_in3_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in3_V_WDATA() {
    m_axi_in3_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_in3_V_WID() {
    m_axi_in3_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in3_V_WLAST() {
    m_axi_in3_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_in3_V_WSTRB() {
    m_axi_in3_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in3_V_WUSER() {
    m_axi_in3_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in3_V_WVALID() {
    m_axi_in3_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in4_V_ARADDR() {
    m_axi_in4_V_ARADDR = grp_load_input_fu_1606_m_axi_in4_V_ARADDR.read();
}

void compute_output::thread_m_axi_in4_V_ARBURST() {
    m_axi_in4_V_ARBURST = grp_load_input_fu_1606_m_axi_in4_V_ARBURST.read();
}

void compute_output::thread_m_axi_in4_V_ARCACHE() {
    m_axi_in4_V_ARCACHE = grp_load_input_fu_1606_m_axi_in4_V_ARCACHE.read();
}

void compute_output::thread_m_axi_in4_V_ARID() {
    m_axi_in4_V_ARID = grp_load_input_fu_1606_m_axi_in4_V_ARID.read();
}

void compute_output::thread_m_axi_in4_V_ARLEN() {
    m_axi_in4_V_ARLEN = grp_load_input_fu_1606_m_axi_in4_V_ARLEN.read();
}

void compute_output::thread_m_axi_in4_V_ARLOCK() {
    m_axi_in4_V_ARLOCK = grp_load_input_fu_1606_m_axi_in4_V_ARLOCK.read();
}

void compute_output::thread_m_axi_in4_V_ARPROT() {
    m_axi_in4_V_ARPROT = grp_load_input_fu_1606_m_axi_in4_V_ARPROT.read();
}

void compute_output::thread_m_axi_in4_V_ARQOS() {
    m_axi_in4_V_ARQOS = grp_load_input_fu_1606_m_axi_in4_V_ARQOS.read();
}

void compute_output::thread_m_axi_in4_V_ARREGION() {
    m_axi_in4_V_ARREGION = grp_load_input_fu_1606_m_axi_in4_V_ARREGION.read();
}

void compute_output::thread_m_axi_in4_V_ARSIZE() {
    m_axi_in4_V_ARSIZE = grp_load_input_fu_1606_m_axi_in4_V_ARSIZE.read();
}

void compute_output::thread_m_axi_in4_V_ARUSER() {
    m_axi_in4_V_ARUSER = grp_load_input_fu_1606_m_axi_in4_V_ARUSER.read();
}

void compute_output::thread_m_axi_in4_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in4_V_ARVALID = grp_load_input_fu_1606_m_axi_in4_V_ARVALID.read();
    } else {
        m_axi_in4_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in4_V_AWADDR() {
    m_axi_in4_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in4_V_AWBURST() {
    m_axi_in4_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in4_V_AWCACHE() {
    m_axi_in4_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in4_V_AWID() {
    m_axi_in4_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in4_V_AWLEN() {
    m_axi_in4_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_in4_V_AWLOCK() {
    m_axi_in4_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in4_V_AWPROT() {
    m_axi_in4_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in4_V_AWQOS() {
    m_axi_in4_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in4_V_AWREGION() {
    m_axi_in4_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_in4_V_AWSIZE() {
    m_axi_in4_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_in4_V_AWUSER() {
    m_axi_in4_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in4_V_AWVALID() {
    m_axi_in4_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_in4_V_BREADY() {
    m_axi_in4_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_in4_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_in4_V_RREADY = grp_load_input_fu_1606_m_axi_in4_V_RREADY.read();
    } else {
        m_axi_in4_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_in4_V_WDATA() {
    m_axi_in4_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_in4_V_WID() {
    m_axi_in4_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in4_V_WLAST() {
    m_axi_in4_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_in4_V_WSTRB() {
    m_axi_in4_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_in4_V_WUSER() {
    m_axi_in4_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_in4_V_WVALID() {
    m_axi_in4_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w1_V_ARADDR() {
    m_axi_w1_V_ARADDR = grp_load_weight_fu_1645_m_axi_w1_V_ARADDR.read();
}

void compute_output::thread_m_axi_w1_V_ARBURST() {
    m_axi_w1_V_ARBURST = grp_load_weight_fu_1645_m_axi_w1_V_ARBURST.read();
}

void compute_output::thread_m_axi_w1_V_ARCACHE() {
    m_axi_w1_V_ARCACHE = grp_load_weight_fu_1645_m_axi_w1_V_ARCACHE.read();
}

void compute_output::thread_m_axi_w1_V_ARID() {
    m_axi_w1_V_ARID = grp_load_weight_fu_1645_m_axi_w1_V_ARID.read();
}

void compute_output::thread_m_axi_w1_V_ARLEN() {
    m_axi_w1_V_ARLEN = grp_load_weight_fu_1645_m_axi_w1_V_ARLEN.read();
}

void compute_output::thread_m_axi_w1_V_ARLOCK() {
    m_axi_w1_V_ARLOCK = grp_load_weight_fu_1645_m_axi_w1_V_ARLOCK.read();
}

void compute_output::thread_m_axi_w1_V_ARPROT() {
    m_axi_w1_V_ARPROT = grp_load_weight_fu_1645_m_axi_w1_V_ARPROT.read();
}

void compute_output::thread_m_axi_w1_V_ARQOS() {
    m_axi_w1_V_ARQOS = grp_load_weight_fu_1645_m_axi_w1_V_ARQOS.read();
}

void compute_output::thread_m_axi_w1_V_ARREGION() {
    m_axi_w1_V_ARREGION = grp_load_weight_fu_1645_m_axi_w1_V_ARREGION.read();
}

void compute_output::thread_m_axi_w1_V_ARSIZE() {
    m_axi_w1_V_ARSIZE = grp_load_weight_fu_1645_m_axi_w1_V_ARSIZE.read();
}

void compute_output::thread_m_axi_w1_V_ARUSER() {
    m_axi_w1_V_ARUSER = grp_load_weight_fu_1645_m_axi_w1_V_ARUSER.read();
}

void compute_output::thread_m_axi_w1_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w1_V_ARVALID = grp_load_weight_fu_1645_m_axi_w1_V_ARVALID.read();
    } else {
        m_axi_w1_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w1_V_AWADDR() {
    m_axi_w1_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w1_V_AWBURST() {
    m_axi_w1_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w1_V_AWCACHE() {
    m_axi_w1_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w1_V_AWID() {
    m_axi_w1_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w1_V_AWLEN() {
    m_axi_w1_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w1_V_AWLOCK() {
    m_axi_w1_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w1_V_AWPROT() {
    m_axi_w1_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w1_V_AWQOS() {
    m_axi_w1_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w1_V_AWREGION() {
    m_axi_w1_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w1_V_AWSIZE() {
    m_axi_w1_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w1_V_AWUSER() {
    m_axi_w1_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w1_V_AWVALID() {
    m_axi_w1_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w1_V_BREADY() {
    m_axi_w1_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_w1_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w1_V_RREADY = grp_load_weight_fu_1645_m_axi_w1_V_RREADY.read();
    } else {
        m_axi_w1_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w1_V_WDATA() {
    m_axi_w1_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_w1_V_WID() {
    m_axi_w1_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w1_V_WLAST() {
    m_axi_w1_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_w1_V_WSTRB() {
    m_axi_w1_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w1_V_WUSER() {
    m_axi_w1_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w1_V_WVALID() {
    m_axi_w1_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w2_V_ARADDR() {
    m_axi_w2_V_ARADDR = grp_load_weight_fu_1645_m_axi_w2_V_ARADDR.read();
}

void compute_output::thread_m_axi_w2_V_ARBURST() {
    m_axi_w2_V_ARBURST = grp_load_weight_fu_1645_m_axi_w2_V_ARBURST.read();
}

void compute_output::thread_m_axi_w2_V_ARCACHE() {
    m_axi_w2_V_ARCACHE = grp_load_weight_fu_1645_m_axi_w2_V_ARCACHE.read();
}

void compute_output::thread_m_axi_w2_V_ARID() {
    m_axi_w2_V_ARID = grp_load_weight_fu_1645_m_axi_w2_V_ARID.read();
}

void compute_output::thread_m_axi_w2_V_ARLEN() {
    m_axi_w2_V_ARLEN = grp_load_weight_fu_1645_m_axi_w2_V_ARLEN.read();
}

void compute_output::thread_m_axi_w2_V_ARLOCK() {
    m_axi_w2_V_ARLOCK = grp_load_weight_fu_1645_m_axi_w2_V_ARLOCK.read();
}

void compute_output::thread_m_axi_w2_V_ARPROT() {
    m_axi_w2_V_ARPROT = grp_load_weight_fu_1645_m_axi_w2_V_ARPROT.read();
}

void compute_output::thread_m_axi_w2_V_ARQOS() {
    m_axi_w2_V_ARQOS = grp_load_weight_fu_1645_m_axi_w2_V_ARQOS.read();
}

void compute_output::thread_m_axi_w2_V_ARREGION() {
    m_axi_w2_V_ARREGION = grp_load_weight_fu_1645_m_axi_w2_V_ARREGION.read();
}

void compute_output::thread_m_axi_w2_V_ARSIZE() {
    m_axi_w2_V_ARSIZE = grp_load_weight_fu_1645_m_axi_w2_V_ARSIZE.read();
}

void compute_output::thread_m_axi_w2_V_ARUSER() {
    m_axi_w2_V_ARUSER = grp_load_weight_fu_1645_m_axi_w2_V_ARUSER.read();
}

void compute_output::thread_m_axi_w2_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w2_V_ARVALID = grp_load_weight_fu_1645_m_axi_w2_V_ARVALID.read();
    } else {
        m_axi_w2_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w2_V_AWADDR() {
    m_axi_w2_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w2_V_AWBURST() {
    m_axi_w2_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w2_V_AWCACHE() {
    m_axi_w2_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w2_V_AWID() {
    m_axi_w2_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w2_V_AWLEN() {
    m_axi_w2_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w2_V_AWLOCK() {
    m_axi_w2_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w2_V_AWPROT() {
    m_axi_w2_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w2_V_AWQOS() {
    m_axi_w2_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w2_V_AWREGION() {
    m_axi_w2_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w2_V_AWSIZE() {
    m_axi_w2_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w2_V_AWUSER() {
    m_axi_w2_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w2_V_AWVALID() {
    m_axi_w2_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w2_V_BREADY() {
    m_axi_w2_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_w2_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w2_V_RREADY = grp_load_weight_fu_1645_m_axi_w2_V_RREADY.read();
    } else {
        m_axi_w2_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w2_V_WDATA() {
    m_axi_w2_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_w2_V_WID() {
    m_axi_w2_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w2_V_WLAST() {
    m_axi_w2_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_w2_V_WSTRB() {
    m_axi_w2_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w2_V_WUSER() {
    m_axi_w2_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w2_V_WVALID() {
    m_axi_w2_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w3_V_ARADDR() {
    m_axi_w3_V_ARADDR = grp_load_weight_fu_1645_m_axi_w3_V_ARADDR.read();
}

void compute_output::thread_m_axi_w3_V_ARBURST() {
    m_axi_w3_V_ARBURST = grp_load_weight_fu_1645_m_axi_w3_V_ARBURST.read();
}

void compute_output::thread_m_axi_w3_V_ARCACHE() {
    m_axi_w3_V_ARCACHE = grp_load_weight_fu_1645_m_axi_w3_V_ARCACHE.read();
}

void compute_output::thread_m_axi_w3_V_ARID() {
    m_axi_w3_V_ARID = grp_load_weight_fu_1645_m_axi_w3_V_ARID.read();
}

void compute_output::thread_m_axi_w3_V_ARLEN() {
    m_axi_w3_V_ARLEN = grp_load_weight_fu_1645_m_axi_w3_V_ARLEN.read();
}

void compute_output::thread_m_axi_w3_V_ARLOCK() {
    m_axi_w3_V_ARLOCK = grp_load_weight_fu_1645_m_axi_w3_V_ARLOCK.read();
}

void compute_output::thread_m_axi_w3_V_ARPROT() {
    m_axi_w3_V_ARPROT = grp_load_weight_fu_1645_m_axi_w3_V_ARPROT.read();
}

void compute_output::thread_m_axi_w3_V_ARQOS() {
    m_axi_w3_V_ARQOS = grp_load_weight_fu_1645_m_axi_w3_V_ARQOS.read();
}

void compute_output::thread_m_axi_w3_V_ARREGION() {
    m_axi_w3_V_ARREGION = grp_load_weight_fu_1645_m_axi_w3_V_ARREGION.read();
}

void compute_output::thread_m_axi_w3_V_ARSIZE() {
    m_axi_w3_V_ARSIZE = grp_load_weight_fu_1645_m_axi_w3_V_ARSIZE.read();
}

void compute_output::thread_m_axi_w3_V_ARUSER() {
    m_axi_w3_V_ARUSER = grp_load_weight_fu_1645_m_axi_w3_V_ARUSER.read();
}

void compute_output::thread_m_axi_w3_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w3_V_ARVALID = grp_load_weight_fu_1645_m_axi_w3_V_ARVALID.read();
    } else {
        m_axi_w3_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w3_V_AWADDR() {
    m_axi_w3_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w3_V_AWBURST() {
    m_axi_w3_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w3_V_AWCACHE() {
    m_axi_w3_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w3_V_AWID() {
    m_axi_w3_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w3_V_AWLEN() {
    m_axi_w3_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w3_V_AWLOCK() {
    m_axi_w3_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w3_V_AWPROT() {
    m_axi_w3_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w3_V_AWQOS() {
    m_axi_w3_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w3_V_AWREGION() {
    m_axi_w3_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w3_V_AWSIZE() {
    m_axi_w3_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w3_V_AWUSER() {
    m_axi_w3_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w3_V_AWVALID() {
    m_axi_w3_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w3_V_BREADY() {
    m_axi_w3_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_w3_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w3_V_RREADY = grp_load_weight_fu_1645_m_axi_w3_V_RREADY.read();
    } else {
        m_axi_w3_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w3_V_WDATA() {
    m_axi_w3_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_w3_V_WID() {
    m_axi_w3_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w3_V_WLAST() {
    m_axi_w3_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_w3_V_WSTRB() {
    m_axi_w3_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w3_V_WUSER() {
    m_axi_w3_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w3_V_WVALID() {
    m_axi_w3_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w4_V_ARADDR() {
    m_axi_w4_V_ARADDR = grp_load_weight_fu_1645_m_axi_w4_V_ARADDR.read();
}

void compute_output::thread_m_axi_w4_V_ARBURST() {
    m_axi_w4_V_ARBURST = grp_load_weight_fu_1645_m_axi_w4_V_ARBURST.read();
}

void compute_output::thread_m_axi_w4_V_ARCACHE() {
    m_axi_w4_V_ARCACHE = grp_load_weight_fu_1645_m_axi_w4_V_ARCACHE.read();
}

void compute_output::thread_m_axi_w4_V_ARID() {
    m_axi_w4_V_ARID = grp_load_weight_fu_1645_m_axi_w4_V_ARID.read();
}

void compute_output::thread_m_axi_w4_V_ARLEN() {
    m_axi_w4_V_ARLEN = grp_load_weight_fu_1645_m_axi_w4_V_ARLEN.read();
}

void compute_output::thread_m_axi_w4_V_ARLOCK() {
    m_axi_w4_V_ARLOCK = grp_load_weight_fu_1645_m_axi_w4_V_ARLOCK.read();
}

void compute_output::thread_m_axi_w4_V_ARPROT() {
    m_axi_w4_V_ARPROT = grp_load_weight_fu_1645_m_axi_w4_V_ARPROT.read();
}

void compute_output::thread_m_axi_w4_V_ARQOS() {
    m_axi_w4_V_ARQOS = grp_load_weight_fu_1645_m_axi_w4_V_ARQOS.read();
}

void compute_output::thread_m_axi_w4_V_ARREGION() {
    m_axi_w4_V_ARREGION = grp_load_weight_fu_1645_m_axi_w4_V_ARREGION.read();
}

void compute_output::thread_m_axi_w4_V_ARSIZE() {
    m_axi_w4_V_ARSIZE = grp_load_weight_fu_1645_m_axi_w4_V_ARSIZE.read();
}

void compute_output::thread_m_axi_w4_V_ARUSER() {
    m_axi_w4_V_ARUSER = grp_load_weight_fu_1645_m_axi_w4_V_ARUSER.read();
}

void compute_output::thread_m_axi_w4_V_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w4_V_ARVALID = grp_load_weight_fu_1645_m_axi_w4_V_ARVALID.read();
    } else {
        m_axi_w4_V_ARVALID = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w4_V_AWADDR() {
    m_axi_w4_V_AWADDR = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w4_V_AWBURST() {
    m_axi_w4_V_AWBURST = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w4_V_AWCACHE() {
    m_axi_w4_V_AWCACHE = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w4_V_AWID() {
    m_axi_w4_V_AWID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w4_V_AWLEN() {
    m_axi_w4_V_AWLEN = ap_const_lv32_0;
}

void compute_output::thread_m_axi_w4_V_AWLOCK() {
    m_axi_w4_V_AWLOCK = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w4_V_AWPROT() {
    m_axi_w4_V_AWPROT = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w4_V_AWQOS() {
    m_axi_w4_V_AWQOS = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w4_V_AWREGION() {
    m_axi_w4_V_AWREGION = ap_const_lv4_0;
}

void compute_output::thread_m_axi_w4_V_AWSIZE() {
    m_axi_w4_V_AWSIZE = ap_const_lv3_0;
}

void compute_output::thread_m_axi_w4_V_AWUSER() {
    m_axi_w4_V_AWUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w4_V_AWVALID() {
    m_axi_w4_V_AWVALID = ap_const_logic_0;
}

void compute_output::thread_m_axi_w4_V_BREADY() {
    m_axi_w4_V_BREADY = ap_const_logic_0;
}

void compute_output::thread_m_axi_w4_V_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln199_fu_2062_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_pingpong_0_phi_fu_1384_p4.read())))) {
        m_axi_w4_V_RREADY = grp_load_weight_fu_1645_m_axi_w4_V_RREADY.read();
    } else {
        m_axi_w4_V_RREADY = ap_const_logic_0;
    }
}

void compute_output::thread_m_axi_w4_V_WDATA() {
    m_axi_w4_V_WDATA = ap_const_lv16_0;
}

void compute_output::thread_m_axi_w4_V_WID() {
    m_axi_w4_V_WID = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w4_V_WLAST() {
    m_axi_w4_V_WLAST = ap_const_logic_0;
}

void compute_output::thread_m_axi_w4_V_WSTRB() {
    m_axi_w4_V_WSTRB = ap_const_lv2_0;
}

void compute_output::thread_m_axi_w4_V_WUSER() {
    m_axi_w4_V_WUSER = ap_const_lv1_0;
}

void compute_output::thread_m_axi_w4_V_WVALID() {
    m_axi_w4_V_WVALID = ap_const_logic_0;
}

void compute_output::thread_ti_fu_2067_p2() {
    ti_fu_2067_p2 = (!ti_0_reg_1368.read().is_01() || !ap_const_lv16_4.is_01())? sc_lv<16>(): (sc_biguint<16>(ti_0_reg_1368.read()) + sc_biguint<16>(ap_const_lv16_4));
}

void compute_output::thread_wt_buff1_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_0_V_address0 = grp_load_weight_fu_1645_wt_buff_0_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_0_V_address0 = grp_compute6_fu_1405_wt_buff_0_0_V_address0.read();
    } else {
        wt_buff1_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_0_V_ce0 = grp_compute6_fu_1405_wt_buff_0_0_V_ce0.read();
    } else {
        wt_buff1_0_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_0_V_we0 = grp_load_weight_fu_1645_wt_buff_0_0_V_we0.read();
    } else {
        wt_buff1_0_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_1_V_address0 = grp_load_weight_fu_1645_wt_buff_0_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_1_V_address0 = grp_compute6_fu_1405_wt_buff_0_1_V_address0.read();
    } else {
        wt_buff1_0_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_1_V_ce0 = grp_compute6_fu_1405_wt_buff_0_1_V_ce0.read();
    } else {
        wt_buff1_0_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_1_V_we0 = grp_load_weight_fu_1645_wt_buff_0_1_V_we0.read();
    } else {
        wt_buff1_0_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_2_V_address0 = grp_load_weight_fu_1645_wt_buff_0_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_2_V_address0 = grp_compute6_fu_1405_wt_buff_0_2_V_address0.read();
    } else {
        wt_buff1_0_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_2_V_ce0 = grp_compute6_fu_1405_wt_buff_0_2_V_ce0.read();
    } else {
        wt_buff1_0_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_2_V_we0 = grp_load_weight_fu_1645_wt_buff_0_2_V_we0.read();
    } else {
        wt_buff1_0_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_3_V_address0 = grp_load_weight_fu_1645_wt_buff_0_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_3_V_address0 = grp_compute6_fu_1405_wt_buff_0_3_V_address0.read();
    } else {
        wt_buff1_0_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_0_3_V_ce0 = grp_compute6_fu_1405_wt_buff_0_3_V_ce0.read();
    } else {
        wt_buff1_0_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_0_3_V_we0 = grp_load_weight_fu_1645_wt_buff_0_3_V_we0.read();
    } else {
        wt_buff1_0_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_0_V_address0 = grp_load_weight_fu_1645_wt_buff_10_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_0_V_address0 = grp_compute6_fu_1405_wt_buff_10_0_V_address0.read();
    } else {
        wt_buff1_10_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_0_V_ce0 = grp_compute6_fu_1405_wt_buff_10_0_V_ce0.read();
    } else {
        wt_buff1_10_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_0_V_we0 = grp_load_weight_fu_1645_wt_buff_10_0_V_we0.read();
    } else {
        wt_buff1_10_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_1_V_address0 = grp_load_weight_fu_1645_wt_buff_10_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_1_V_address0 = grp_compute6_fu_1405_wt_buff_10_1_V_address0.read();
    } else {
        wt_buff1_10_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_1_V_ce0 = grp_compute6_fu_1405_wt_buff_10_1_V_ce0.read();
    } else {
        wt_buff1_10_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_1_V_we0 = grp_load_weight_fu_1645_wt_buff_10_1_V_we0.read();
    } else {
        wt_buff1_10_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_2_V_address0 = grp_load_weight_fu_1645_wt_buff_10_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_2_V_address0 = grp_compute6_fu_1405_wt_buff_10_2_V_address0.read();
    } else {
        wt_buff1_10_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_2_V_ce0 = grp_compute6_fu_1405_wt_buff_10_2_V_ce0.read();
    } else {
        wt_buff1_10_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_2_V_we0 = grp_load_weight_fu_1645_wt_buff_10_2_V_we0.read();
    } else {
        wt_buff1_10_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_3_V_address0 = grp_load_weight_fu_1645_wt_buff_10_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_3_V_address0 = grp_compute6_fu_1405_wt_buff_10_3_V_address0.read();
    } else {
        wt_buff1_10_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_10_3_V_ce0 = grp_compute6_fu_1405_wt_buff_10_3_V_ce0.read();
    } else {
        wt_buff1_10_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_10_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_10_3_V_we0 = grp_load_weight_fu_1645_wt_buff_10_3_V_we0.read();
    } else {
        wt_buff1_10_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_0_V_address0 = grp_load_weight_fu_1645_wt_buff_11_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_0_V_address0 = grp_compute6_fu_1405_wt_buff_11_0_V_address0.read();
    } else {
        wt_buff1_11_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_0_V_ce0 = grp_compute6_fu_1405_wt_buff_11_0_V_ce0.read();
    } else {
        wt_buff1_11_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_0_V_we0 = grp_load_weight_fu_1645_wt_buff_11_0_V_we0.read();
    } else {
        wt_buff1_11_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_1_V_address0 = grp_load_weight_fu_1645_wt_buff_11_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_1_V_address0 = grp_compute6_fu_1405_wt_buff_11_1_V_address0.read();
    } else {
        wt_buff1_11_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_1_V_ce0 = grp_compute6_fu_1405_wt_buff_11_1_V_ce0.read();
    } else {
        wt_buff1_11_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_1_V_we0 = grp_load_weight_fu_1645_wt_buff_11_1_V_we0.read();
    } else {
        wt_buff1_11_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_2_V_address0 = grp_load_weight_fu_1645_wt_buff_11_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_2_V_address0 = grp_compute6_fu_1405_wt_buff_11_2_V_address0.read();
    } else {
        wt_buff1_11_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_2_V_ce0 = grp_compute6_fu_1405_wt_buff_11_2_V_ce0.read();
    } else {
        wt_buff1_11_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_2_V_we0 = grp_load_weight_fu_1645_wt_buff_11_2_V_we0.read();
    } else {
        wt_buff1_11_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_3_V_address0 = grp_load_weight_fu_1645_wt_buff_11_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_3_V_address0 = grp_compute6_fu_1405_wt_buff_11_3_V_address0.read();
    } else {
        wt_buff1_11_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_11_3_V_ce0 = grp_compute6_fu_1405_wt_buff_11_3_V_ce0.read();
    } else {
        wt_buff1_11_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_11_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_11_3_V_we0 = grp_load_weight_fu_1645_wt_buff_11_3_V_we0.read();
    } else {
        wt_buff1_11_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_0_V_address0 = grp_load_weight_fu_1645_wt_buff_12_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_0_V_address0 = grp_compute6_fu_1405_wt_buff_12_0_V_address0.read();
    } else {
        wt_buff1_12_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_0_V_ce0 = grp_compute6_fu_1405_wt_buff_12_0_V_ce0.read();
    } else {
        wt_buff1_12_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_0_V_we0 = grp_load_weight_fu_1645_wt_buff_12_0_V_we0.read();
    } else {
        wt_buff1_12_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_1_V_address0 = grp_load_weight_fu_1645_wt_buff_12_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_1_V_address0 = grp_compute6_fu_1405_wt_buff_12_1_V_address0.read();
    } else {
        wt_buff1_12_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_1_V_ce0 = grp_compute6_fu_1405_wt_buff_12_1_V_ce0.read();
    } else {
        wt_buff1_12_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_1_V_we0 = grp_load_weight_fu_1645_wt_buff_12_1_V_we0.read();
    } else {
        wt_buff1_12_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_2_V_address0 = grp_load_weight_fu_1645_wt_buff_12_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_2_V_address0 = grp_compute6_fu_1405_wt_buff_12_2_V_address0.read();
    } else {
        wt_buff1_12_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_2_V_ce0 = grp_compute6_fu_1405_wt_buff_12_2_V_ce0.read();
    } else {
        wt_buff1_12_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_2_V_we0 = grp_load_weight_fu_1645_wt_buff_12_2_V_we0.read();
    } else {
        wt_buff1_12_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_3_V_address0 = grp_load_weight_fu_1645_wt_buff_12_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_3_V_address0 = grp_compute6_fu_1405_wt_buff_12_3_V_address0.read();
    } else {
        wt_buff1_12_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_12_3_V_ce0 = grp_compute6_fu_1405_wt_buff_12_3_V_ce0.read();
    } else {
        wt_buff1_12_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_12_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_12_3_V_we0 = grp_load_weight_fu_1645_wt_buff_12_3_V_we0.read();
    } else {
        wt_buff1_12_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_0_V_address0 = grp_load_weight_fu_1645_wt_buff_13_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_0_V_address0 = grp_compute6_fu_1405_wt_buff_13_0_V_address0.read();
    } else {
        wt_buff1_13_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_0_V_ce0 = grp_compute6_fu_1405_wt_buff_13_0_V_ce0.read();
    } else {
        wt_buff1_13_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_0_V_we0 = grp_load_weight_fu_1645_wt_buff_13_0_V_we0.read();
    } else {
        wt_buff1_13_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_1_V_address0 = grp_load_weight_fu_1645_wt_buff_13_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_1_V_address0 = grp_compute6_fu_1405_wt_buff_13_1_V_address0.read();
    } else {
        wt_buff1_13_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_1_V_ce0 = grp_compute6_fu_1405_wt_buff_13_1_V_ce0.read();
    } else {
        wt_buff1_13_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_1_V_we0 = grp_load_weight_fu_1645_wt_buff_13_1_V_we0.read();
    } else {
        wt_buff1_13_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_2_V_address0 = grp_load_weight_fu_1645_wt_buff_13_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_2_V_address0 = grp_compute6_fu_1405_wt_buff_13_2_V_address0.read();
    } else {
        wt_buff1_13_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_2_V_ce0 = grp_compute6_fu_1405_wt_buff_13_2_V_ce0.read();
    } else {
        wt_buff1_13_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_2_V_we0 = grp_load_weight_fu_1645_wt_buff_13_2_V_we0.read();
    } else {
        wt_buff1_13_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_3_V_address0 = grp_load_weight_fu_1645_wt_buff_13_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_3_V_address0 = grp_compute6_fu_1405_wt_buff_13_3_V_address0.read();
    } else {
        wt_buff1_13_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_13_3_V_ce0 = grp_compute6_fu_1405_wt_buff_13_3_V_ce0.read();
    } else {
        wt_buff1_13_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_13_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_13_3_V_we0 = grp_load_weight_fu_1645_wt_buff_13_3_V_we0.read();
    } else {
        wt_buff1_13_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_0_V_address0 = grp_load_weight_fu_1645_wt_buff_14_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_0_V_address0 = grp_compute6_fu_1405_wt_buff_14_0_V_address0.read();
    } else {
        wt_buff1_14_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_0_V_ce0 = grp_compute6_fu_1405_wt_buff_14_0_V_ce0.read();
    } else {
        wt_buff1_14_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_0_V_we0 = grp_load_weight_fu_1645_wt_buff_14_0_V_we0.read();
    } else {
        wt_buff1_14_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_1_V_address0 = grp_load_weight_fu_1645_wt_buff_14_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_1_V_address0 = grp_compute6_fu_1405_wt_buff_14_1_V_address0.read();
    } else {
        wt_buff1_14_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_1_V_ce0 = grp_compute6_fu_1405_wt_buff_14_1_V_ce0.read();
    } else {
        wt_buff1_14_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_1_V_we0 = grp_load_weight_fu_1645_wt_buff_14_1_V_we0.read();
    } else {
        wt_buff1_14_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_2_V_address0 = grp_load_weight_fu_1645_wt_buff_14_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_2_V_address0 = grp_compute6_fu_1405_wt_buff_14_2_V_address0.read();
    } else {
        wt_buff1_14_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_2_V_ce0 = grp_compute6_fu_1405_wt_buff_14_2_V_ce0.read();
    } else {
        wt_buff1_14_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_2_V_we0 = grp_load_weight_fu_1645_wt_buff_14_2_V_we0.read();
    } else {
        wt_buff1_14_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_3_V_address0 = grp_load_weight_fu_1645_wt_buff_14_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_3_V_address0 = grp_compute6_fu_1405_wt_buff_14_3_V_address0.read();
    } else {
        wt_buff1_14_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_14_3_V_ce0 = grp_compute6_fu_1405_wt_buff_14_3_V_ce0.read();
    } else {
        wt_buff1_14_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_14_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_14_3_V_we0 = grp_load_weight_fu_1645_wt_buff_14_3_V_we0.read();
    } else {
        wt_buff1_14_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_0_V_address0 = grp_load_weight_fu_1645_wt_buff_15_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_0_V_address0 = grp_compute6_fu_1405_wt_buff_15_0_V_address0.read();
    } else {
        wt_buff1_15_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_0_V_ce0 = grp_compute6_fu_1405_wt_buff_15_0_V_ce0.read();
    } else {
        wt_buff1_15_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_0_V_we0 = grp_load_weight_fu_1645_wt_buff_15_0_V_we0.read();
    } else {
        wt_buff1_15_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_1_V_address0 = grp_load_weight_fu_1645_wt_buff_15_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_1_V_address0 = grp_compute6_fu_1405_wt_buff_15_1_V_address0.read();
    } else {
        wt_buff1_15_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_1_V_ce0 = grp_compute6_fu_1405_wt_buff_15_1_V_ce0.read();
    } else {
        wt_buff1_15_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_1_V_we0 = grp_load_weight_fu_1645_wt_buff_15_1_V_we0.read();
    } else {
        wt_buff1_15_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_2_V_address0 = grp_load_weight_fu_1645_wt_buff_15_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_2_V_address0 = grp_compute6_fu_1405_wt_buff_15_2_V_address0.read();
    } else {
        wt_buff1_15_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_2_V_ce0 = grp_compute6_fu_1405_wt_buff_15_2_V_ce0.read();
    } else {
        wt_buff1_15_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_2_V_we0 = grp_load_weight_fu_1645_wt_buff_15_2_V_we0.read();
    } else {
        wt_buff1_15_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_3_V_address0 = grp_load_weight_fu_1645_wt_buff_15_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_3_V_address0 = grp_compute6_fu_1405_wt_buff_15_3_V_address0.read();
    } else {
        wt_buff1_15_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_15_3_V_ce0 = grp_compute6_fu_1405_wt_buff_15_3_V_ce0.read();
    } else {
        wt_buff1_15_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_15_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_15_3_V_we0 = grp_load_weight_fu_1645_wt_buff_15_3_V_we0.read();
    } else {
        wt_buff1_15_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_0_V_address0 = grp_load_weight_fu_1645_wt_buff_16_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_0_V_address0 = grp_compute6_fu_1405_wt_buff_16_0_V_address0.read();
    } else {
        wt_buff1_16_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_16_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_0_V_ce0 = grp_compute6_fu_1405_wt_buff_16_0_V_ce0.read();
    } else {
        wt_buff1_16_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_0_V_we0 = grp_load_weight_fu_1645_wt_buff_16_0_V_we0.read();
    } else {
        wt_buff1_16_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_1_V_address0 = grp_load_weight_fu_1645_wt_buff_16_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_1_V_address0 = grp_compute6_fu_1405_wt_buff_16_1_V_address0.read();
    } else {
        wt_buff1_16_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_16_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_1_V_ce0 = grp_compute6_fu_1405_wt_buff_16_1_V_ce0.read();
    } else {
        wt_buff1_16_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_1_V_we0 = grp_load_weight_fu_1645_wt_buff_16_1_V_we0.read();
    } else {
        wt_buff1_16_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_2_V_address0 = grp_load_weight_fu_1645_wt_buff_16_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_2_V_address0 = grp_compute6_fu_1405_wt_buff_16_2_V_address0.read();
    } else {
        wt_buff1_16_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_16_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_2_V_ce0 = grp_compute6_fu_1405_wt_buff_16_2_V_ce0.read();
    } else {
        wt_buff1_16_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_2_V_we0 = grp_load_weight_fu_1645_wt_buff_16_2_V_we0.read();
    } else {
        wt_buff1_16_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_3_V_address0 = grp_load_weight_fu_1645_wt_buff_16_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_3_V_address0 = grp_compute6_fu_1405_wt_buff_16_3_V_address0.read();
    } else {
        wt_buff1_16_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_16_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_16_3_V_ce0 = grp_compute6_fu_1405_wt_buff_16_3_V_ce0.read();
    } else {
        wt_buff1_16_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_16_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_16_3_V_we0 = grp_load_weight_fu_1645_wt_buff_16_3_V_we0.read();
    } else {
        wt_buff1_16_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_0_V_address0 = grp_load_weight_fu_1645_wt_buff_17_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_0_V_address0 = grp_compute6_fu_1405_wt_buff_17_0_V_address0.read();
    } else {
        wt_buff1_17_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_17_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_0_V_ce0 = grp_compute6_fu_1405_wt_buff_17_0_V_ce0.read();
    } else {
        wt_buff1_17_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_0_V_we0 = grp_load_weight_fu_1645_wt_buff_17_0_V_we0.read();
    } else {
        wt_buff1_17_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_1_V_address0 = grp_load_weight_fu_1645_wt_buff_17_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_1_V_address0 = grp_compute6_fu_1405_wt_buff_17_1_V_address0.read();
    } else {
        wt_buff1_17_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_17_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_1_V_ce0 = grp_compute6_fu_1405_wt_buff_17_1_V_ce0.read();
    } else {
        wt_buff1_17_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_1_V_we0 = grp_load_weight_fu_1645_wt_buff_17_1_V_we0.read();
    } else {
        wt_buff1_17_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_2_V_address0 = grp_load_weight_fu_1645_wt_buff_17_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_2_V_address0 = grp_compute6_fu_1405_wt_buff_17_2_V_address0.read();
    } else {
        wt_buff1_17_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_17_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_2_V_ce0 = grp_compute6_fu_1405_wt_buff_17_2_V_ce0.read();
    } else {
        wt_buff1_17_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_2_V_we0 = grp_load_weight_fu_1645_wt_buff_17_2_V_we0.read();
    } else {
        wt_buff1_17_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_3_V_address0 = grp_load_weight_fu_1645_wt_buff_17_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_3_V_address0 = grp_compute6_fu_1405_wt_buff_17_3_V_address0.read();
    } else {
        wt_buff1_17_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_17_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_17_3_V_ce0 = grp_compute6_fu_1405_wt_buff_17_3_V_ce0.read();
    } else {
        wt_buff1_17_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_17_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_17_3_V_we0 = grp_load_weight_fu_1645_wt_buff_17_3_V_we0.read();
    } else {
        wt_buff1_17_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_0_V_address0 = grp_load_weight_fu_1645_wt_buff_18_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_0_V_address0 = grp_compute6_fu_1405_wt_buff_18_0_V_address0.read();
    } else {
        wt_buff1_18_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_18_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_0_V_ce0 = grp_compute6_fu_1405_wt_buff_18_0_V_ce0.read();
    } else {
        wt_buff1_18_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_0_V_we0 = grp_load_weight_fu_1645_wt_buff_18_0_V_we0.read();
    } else {
        wt_buff1_18_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_1_V_address0 = grp_load_weight_fu_1645_wt_buff_18_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_1_V_address0 = grp_compute6_fu_1405_wt_buff_18_1_V_address0.read();
    } else {
        wt_buff1_18_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_18_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_1_V_ce0 = grp_compute6_fu_1405_wt_buff_18_1_V_ce0.read();
    } else {
        wt_buff1_18_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_1_V_we0 = grp_load_weight_fu_1645_wt_buff_18_1_V_we0.read();
    } else {
        wt_buff1_18_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_2_V_address0 = grp_load_weight_fu_1645_wt_buff_18_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_2_V_address0 = grp_compute6_fu_1405_wt_buff_18_2_V_address0.read();
    } else {
        wt_buff1_18_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_18_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_2_V_ce0 = grp_compute6_fu_1405_wt_buff_18_2_V_ce0.read();
    } else {
        wt_buff1_18_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_2_V_we0 = grp_load_weight_fu_1645_wt_buff_18_2_V_we0.read();
    } else {
        wt_buff1_18_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_3_V_address0 = grp_load_weight_fu_1645_wt_buff_18_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_3_V_address0 = grp_compute6_fu_1405_wt_buff_18_3_V_address0.read();
    } else {
        wt_buff1_18_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_18_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_18_3_V_ce0 = grp_compute6_fu_1405_wt_buff_18_3_V_ce0.read();
    } else {
        wt_buff1_18_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_18_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_18_3_V_we0 = grp_load_weight_fu_1645_wt_buff_18_3_V_we0.read();
    } else {
        wt_buff1_18_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_0_V_address0 = grp_load_weight_fu_1645_wt_buff_19_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_0_V_address0 = grp_compute6_fu_1405_wt_buff_19_0_V_address0.read();
    } else {
        wt_buff1_19_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_19_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_0_V_ce0 = grp_compute6_fu_1405_wt_buff_19_0_V_ce0.read();
    } else {
        wt_buff1_19_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_0_V_we0 = grp_load_weight_fu_1645_wt_buff_19_0_V_we0.read();
    } else {
        wt_buff1_19_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_1_V_address0 = grp_load_weight_fu_1645_wt_buff_19_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_1_V_address0 = grp_compute6_fu_1405_wt_buff_19_1_V_address0.read();
    } else {
        wt_buff1_19_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_19_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_1_V_ce0 = grp_compute6_fu_1405_wt_buff_19_1_V_ce0.read();
    } else {
        wt_buff1_19_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_1_V_we0 = grp_load_weight_fu_1645_wt_buff_19_1_V_we0.read();
    } else {
        wt_buff1_19_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_2_V_address0 = grp_load_weight_fu_1645_wt_buff_19_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_2_V_address0 = grp_compute6_fu_1405_wt_buff_19_2_V_address0.read();
    } else {
        wt_buff1_19_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_19_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_2_V_ce0 = grp_compute6_fu_1405_wt_buff_19_2_V_ce0.read();
    } else {
        wt_buff1_19_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_2_V_we0 = grp_load_weight_fu_1645_wt_buff_19_2_V_we0.read();
    } else {
        wt_buff1_19_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_3_V_address0 = grp_load_weight_fu_1645_wt_buff_19_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_3_V_address0 = grp_compute6_fu_1405_wt_buff_19_3_V_address0.read();
    } else {
        wt_buff1_19_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_19_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_19_3_V_ce0 = grp_compute6_fu_1405_wt_buff_19_3_V_ce0.read();
    } else {
        wt_buff1_19_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_19_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_19_3_V_we0 = grp_load_weight_fu_1645_wt_buff_19_3_V_we0.read();
    } else {
        wt_buff1_19_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_0_V_address0 = grp_load_weight_fu_1645_wt_buff_1_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_0_V_address0 = grp_compute6_fu_1405_wt_buff_1_0_V_address0.read();
    } else {
        wt_buff1_1_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_0_V_ce0 = grp_compute6_fu_1405_wt_buff_1_0_V_ce0.read();
    } else {
        wt_buff1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_0_V_we0 = grp_load_weight_fu_1645_wt_buff_1_0_V_we0.read();
    } else {
        wt_buff1_1_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_1_V_address0 = grp_load_weight_fu_1645_wt_buff_1_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_1_V_address0 = grp_compute6_fu_1405_wt_buff_1_1_V_address0.read();
    } else {
        wt_buff1_1_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_1_V_ce0 = grp_compute6_fu_1405_wt_buff_1_1_V_ce0.read();
    } else {
        wt_buff1_1_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_1_V_we0 = grp_load_weight_fu_1645_wt_buff_1_1_V_we0.read();
    } else {
        wt_buff1_1_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_2_V_address0 = grp_load_weight_fu_1645_wt_buff_1_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_2_V_address0 = grp_compute6_fu_1405_wt_buff_1_2_V_address0.read();
    } else {
        wt_buff1_1_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_2_V_ce0 = grp_compute6_fu_1405_wt_buff_1_2_V_ce0.read();
    } else {
        wt_buff1_1_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_2_V_we0 = grp_load_weight_fu_1645_wt_buff_1_2_V_we0.read();
    } else {
        wt_buff1_1_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_3_V_address0 = grp_load_weight_fu_1645_wt_buff_1_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_3_V_address0 = grp_compute6_fu_1405_wt_buff_1_3_V_address0.read();
    } else {
        wt_buff1_1_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_1_3_V_ce0 = grp_compute6_fu_1405_wt_buff_1_3_V_ce0.read();
    } else {
        wt_buff1_1_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_1_3_V_we0 = grp_load_weight_fu_1645_wt_buff_1_3_V_we0.read();
    } else {
        wt_buff1_1_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_0_V_address0 = grp_load_weight_fu_1645_wt_buff_20_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_0_V_address0 = grp_compute6_fu_1405_wt_buff_20_0_V_address0.read();
    } else {
        wt_buff1_20_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_20_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_0_V_ce0 = grp_compute6_fu_1405_wt_buff_20_0_V_ce0.read();
    } else {
        wt_buff1_20_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_0_V_we0 = grp_load_weight_fu_1645_wt_buff_20_0_V_we0.read();
    } else {
        wt_buff1_20_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_1_V_address0 = grp_load_weight_fu_1645_wt_buff_20_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_1_V_address0 = grp_compute6_fu_1405_wt_buff_20_1_V_address0.read();
    } else {
        wt_buff1_20_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_20_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_1_V_ce0 = grp_compute6_fu_1405_wt_buff_20_1_V_ce0.read();
    } else {
        wt_buff1_20_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_1_V_we0 = grp_load_weight_fu_1645_wt_buff_20_1_V_we0.read();
    } else {
        wt_buff1_20_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_2_V_address0 = grp_load_weight_fu_1645_wt_buff_20_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_2_V_address0 = grp_compute6_fu_1405_wt_buff_20_2_V_address0.read();
    } else {
        wt_buff1_20_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_20_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_2_V_ce0 = grp_compute6_fu_1405_wt_buff_20_2_V_ce0.read();
    } else {
        wt_buff1_20_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_2_V_we0 = grp_load_weight_fu_1645_wt_buff_20_2_V_we0.read();
    } else {
        wt_buff1_20_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_3_V_address0 = grp_load_weight_fu_1645_wt_buff_20_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_3_V_address0 = grp_compute6_fu_1405_wt_buff_20_3_V_address0.read();
    } else {
        wt_buff1_20_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_20_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_20_3_V_ce0 = grp_compute6_fu_1405_wt_buff_20_3_V_ce0.read();
    } else {
        wt_buff1_20_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_20_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_20_3_V_we0 = grp_load_weight_fu_1645_wt_buff_20_3_V_we0.read();
    } else {
        wt_buff1_20_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_0_V_address0 = grp_load_weight_fu_1645_wt_buff_21_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_0_V_address0 = grp_compute6_fu_1405_wt_buff_21_0_V_address0.read();
    } else {
        wt_buff1_21_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_21_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_0_V_ce0 = grp_compute6_fu_1405_wt_buff_21_0_V_ce0.read();
    } else {
        wt_buff1_21_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_0_V_we0 = grp_load_weight_fu_1645_wt_buff_21_0_V_we0.read();
    } else {
        wt_buff1_21_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_1_V_address0 = grp_load_weight_fu_1645_wt_buff_21_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_1_V_address0 = grp_compute6_fu_1405_wt_buff_21_1_V_address0.read();
    } else {
        wt_buff1_21_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_21_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_1_V_ce0 = grp_compute6_fu_1405_wt_buff_21_1_V_ce0.read();
    } else {
        wt_buff1_21_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_1_V_we0 = grp_load_weight_fu_1645_wt_buff_21_1_V_we0.read();
    } else {
        wt_buff1_21_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_2_V_address0 = grp_load_weight_fu_1645_wt_buff_21_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_2_V_address0 = grp_compute6_fu_1405_wt_buff_21_2_V_address0.read();
    } else {
        wt_buff1_21_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_21_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_2_V_ce0 = grp_compute6_fu_1405_wt_buff_21_2_V_ce0.read();
    } else {
        wt_buff1_21_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_2_V_we0 = grp_load_weight_fu_1645_wt_buff_21_2_V_we0.read();
    } else {
        wt_buff1_21_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_3_V_address0 = grp_load_weight_fu_1645_wt_buff_21_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_3_V_address0 = grp_compute6_fu_1405_wt_buff_21_3_V_address0.read();
    } else {
        wt_buff1_21_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_21_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_21_3_V_ce0 = grp_compute6_fu_1405_wt_buff_21_3_V_ce0.read();
    } else {
        wt_buff1_21_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_21_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_21_3_V_we0 = grp_load_weight_fu_1645_wt_buff_21_3_V_we0.read();
    } else {
        wt_buff1_21_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_0_V_address0 = grp_load_weight_fu_1645_wt_buff_22_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_0_V_address0 = grp_compute6_fu_1405_wt_buff_22_0_V_address0.read();
    } else {
        wt_buff1_22_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_22_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_0_V_ce0 = grp_compute6_fu_1405_wt_buff_22_0_V_ce0.read();
    } else {
        wt_buff1_22_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_0_V_we0 = grp_load_weight_fu_1645_wt_buff_22_0_V_we0.read();
    } else {
        wt_buff1_22_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_1_V_address0 = grp_load_weight_fu_1645_wt_buff_22_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_1_V_address0 = grp_compute6_fu_1405_wt_buff_22_1_V_address0.read();
    } else {
        wt_buff1_22_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_22_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_1_V_ce0 = grp_compute6_fu_1405_wt_buff_22_1_V_ce0.read();
    } else {
        wt_buff1_22_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_1_V_we0 = grp_load_weight_fu_1645_wt_buff_22_1_V_we0.read();
    } else {
        wt_buff1_22_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_2_V_address0 = grp_load_weight_fu_1645_wt_buff_22_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_2_V_address0 = grp_compute6_fu_1405_wt_buff_22_2_V_address0.read();
    } else {
        wt_buff1_22_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_22_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_2_V_ce0 = grp_compute6_fu_1405_wt_buff_22_2_V_ce0.read();
    } else {
        wt_buff1_22_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_2_V_we0 = grp_load_weight_fu_1645_wt_buff_22_2_V_we0.read();
    } else {
        wt_buff1_22_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_3_V_address0 = grp_load_weight_fu_1645_wt_buff_22_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_3_V_address0 = grp_compute6_fu_1405_wt_buff_22_3_V_address0.read();
    } else {
        wt_buff1_22_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_22_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_22_3_V_ce0 = grp_compute6_fu_1405_wt_buff_22_3_V_ce0.read();
    } else {
        wt_buff1_22_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_22_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_22_3_V_we0 = grp_load_weight_fu_1645_wt_buff_22_3_V_we0.read();
    } else {
        wt_buff1_22_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_0_V_address0 = grp_load_weight_fu_1645_wt_buff_23_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_0_V_address0 = grp_compute6_fu_1405_wt_buff_23_0_V_address0.read();
    } else {
        wt_buff1_23_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_23_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_0_V_ce0 = grp_compute6_fu_1405_wt_buff_23_0_V_ce0.read();
    } else {
        wt_buff1_23_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_0_V_we0 = grp_load_weight_fu_1645_wt_buff_23_0_V_we0.read();
    } else {
        wt_buff1_23_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_1_V_address0 = grp_load_weight_fu_1645_wt_buff_23_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_1_V_address0 = grp_compute6_fu_1405_wt_buff_23_1_V_address0.read();
    } else {
        wt_buff1_23_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_23_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_1_V_ce0 = grp_compute6_fu_1405_wt_buff_23_1_V_ce0.read();
    } else {
        wt_buff1_23_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_1_V_we0 = grp_load_weight_fu_1645_wt_buff_23_1_V_we0.read();
    } else {
        wt_buff1_23_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_2_V_address0 = grp_load_weight_fu_1645_wt_buff_23_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_2_V_address0 = grp_compute6_fu_1405_wt_buff_23_2_V_address0.read();
    } else {
        wt_buff1_23_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_23_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_2_V_ce0 = grp_compute6_fu_1405_wt_buff_23_2_V_ce0.read();
    } else {
        wt_buff1_23_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_2_V_we0 = grp_load_weight_fu_1645_wt_buff_23_2_V_we0.read();
    } else {
        wt_buff1_23_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_3_V_address0 = grp_load_weight_fu_1645_wt_buff_23_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_3_V_address0 = grp_compute6_fu_1405_wt_buff_23_3_V_address0.read();
    } else {
        wt_buff1_23_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_23_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_23_3_V_ce0 = grp_compute6_fu_1405_wt_buff_23_3_V_ce0.read();
    } else {
        wt_buff1_23_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_23_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_23_3_V_we0 = grp_load_weight_fu_1645_wt_buff_23_3_V_we0.read();
    } else {
        wt_buff1_23_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_0_V_address0 = grp_load_weight_fu_1645_wt_buff_24_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_0_V_address0 = grp_compute6_fu_1405_wt_buff_24_0_V_address0.read();
    } else {
        wt_buff1_24_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_24_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_0_V_ce0 = grp_compute6_fu_1405_wt_buff_24_0_V_ce0.read();
    } else {
        wt_buff1_24_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_0_V_we0 = grp_load_weight_fu_1645_wt_buff_24_0_V_we0.read();
    } else {
        wt_buff1_24_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_1_V_address0 = grp_load_weight_fu_1645_wt_buff_24_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_1_V_address0 = grp_compute6_fu_1405_wt_buff_24_1_V_address0.read();
    } else {
        wt_buff1_24_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_24_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_1_V_ce0 = grp_compute6_fu_1405_wt_buff_24_1_V_ce0.read();
    } else {
        wt_buff1_24_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_1_V_we0 = grp_load_weight_fu_1645_wt_buff_24_1_V_we0.read();
    } else {
        wt_buff1_24_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_2_V_address0 = grp_load_weight_fu_1645_wt_buff_24_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_2_V_address0 = grp_compute6_fu_1405_wt_buff_24_2_V_address0.read();
    } else {
        wt_buff1_24_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_24_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_2_V_ce0 = grp_compute6_fu_1405_wt_buff_24_2_V_ce0.read();
    } else {
        wt_buff1_24_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_2_V_we0 = grp_load_weight_fu_1645_wt_buff_24_2_V_we0.read();
    } else {
        wt_buff1_24_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_3_V_address0 = grp_load_weight_fu_1645_wt_buff_24_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_3_V_address0 = grp_compute6_fu_1405_wt_buff_24_3_V_address0.read();
    } else {
        wt_buff1_24_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_24_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_24_3_V_ce0 = grp_compute6_fu_1405_wt_buff_24_3_V_ce0.read();
    } else {
        wt_buff1_24_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_24_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_24_3_V_we0 = grp_load_weight_fu_1645_wt_buff_24_3_V_we0.read();
    } else {
        wt_buff1_24_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_0_V_address0 = grp_load_weight_fu_1645_wt_buff_25_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_0_V_address0 = grp_compute6_fu_1405_wt_buff_25_0_V_address0.read();
    } else {
        wt_buff1_25_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_25_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_0_V_ce0 = grp_compute6_fu_1405_wt_buff_25_0_V_ce0.read();
    } else {
        wt_buff1_25_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_0_V_we0 = grp_load_weight_fu_1645_wt_buff_25_0_V_we0.read();
    } else {
        wt_buff1_25_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_1_V_address0 = grp_load_weight_fu_1645_wt_buff_25_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_1_V_address0 = grp_compute6_fu_1405_wt_buff_25_1_V_address0.read();
    } else {
        wt_buff1_25_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_25_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_1_V_ce0 = grp_compute6_fu_1405_wt_buff_25_1_V_ce0.read();
    } else {
        wt_buff1_25_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_1_V_we0 = grp_load_weight_fu_1645_wt_buff_25_1_V_we0.read();
    } else {
        wt_buff1_25_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_2_V_address0 = grp_load_weight_fu_1645_wt_buff_25_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_2_V_address0 = grp_compute6_fu_1405_wt_buff_25_2_V_address0.read();
    } else {
        wt_buff1_25_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_25_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_2_V_ce0 = grp_compute6_fu_1405_wt_buff_25_2_V_ce0.read();
    } else {
        wt_buff1_25_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_2_V_we0 = grp_load_weight_fu_1645_wt_buff_25_2_V_we0.read();
    } else {
        wt_buff1_25_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_3_V_address0 = grp_load_weight_fu_1645_wt_buff_25_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_3_V_address0 = grp_compute6_fu_1405_wt_buff_25_3_V_address0.read();
    } else {
        wt_buff1_25_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_25_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_25_3_V_ce0 = grp_compute6_fu_1405_wt_buff_25_3_V_ce0.read();
    } else {
        wt_buff1_25_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_25_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_25_3_V_we0 = grp_load_weight_fu_1645_wt_buff_25_3_V_we0.read();
    } else {
        wt_buff1_25_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_0_V_address0 = grp_load_weight_fu_1645_wt_buff_26_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_0_V_address0 = grp_compute6_fu_1405_wt_buff_26_0_V_address0.read();
    } else {
        wt_buff1_26_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_26_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_0_V_ce0 = grp_compute6_fu_1405_wt_buff_26_0_V_ce0.read();
    } else {
        wt_buff1_26_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_0_V_we0 = grp_load_weight_fu_1645_wt_buff_26_0_V_we0.read();
    } else {
        wt_buff1_26_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_1_V_address0 = grp_load_weight_fu_1645_wt_buff_26_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_1_V_address0 = grp_compute6_fu_1405_wt_buff_26_1_V_address0.read();
    } else {
        wt_buff1_26_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_26_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_1_V_ce0 = grp_compute6_fu_1405_wt_buff_26_1_V_ce0.read();
    } else {
        wt_buff1_26_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_1_V_we0 = grp_load_weight_fu_1645_wt_buff_26_1_V_we0.read();
    } else {
        wt_buff1_26_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_2_V_address0 = grp_load_weight_fu_1645_wt_buff_26_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_2_V_address0 = grp_compute6_fu_1405_wt_buff_26_2_V_address0.read();
    } else {
        wt_buff1_26_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_26_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_2_V_ce0 = grp_compute6_fu_1405_wt_buff_26_2_V_ce0.read();
    } else {
        wt_buff1_26_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_2_V_we0 = grp_load_weight_fu_1645_wt_buff_26_2_V_we0.read();
    } else {
        wt_buff1_26_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_3_V_address0 = grp_load_weight_fu_1645_wt_buff_26_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_3_V_address0 = grp_compute6_fu_1405_wt_buff_26_3_V_address0.read();
    } else {
        wt_buff1_26_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_26_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_26_3_V_ce0 = grp_compute6_fu_1405_wt_buff_26_3_V_ce0.read();
    } else {
        wt_buff1_26_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_26_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_26_3_V_we0 = grp_load_weight_fu_1645_wt_buff_26_3_V_we0.read();
    } else {
        wt_buff1_26_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_0_V_address0 = grp_load_weight_fu_1645_wt_buff_27_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_0_V_address0 = grp_compute6_fu_1405_wt_buff_27_0_V_address0.read();
    } else {
        wt_buff1_27_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_27_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_0_V_ce0 = grp_compute6_fu_1405_wt_buff_27_0_V_ce0.read();
    } else {
        wt_buff1_27_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_0_V_we0 = grp_load_weight_fu_1645_wt_buff_27_0_V_we0.read();
    } else {
        wt_buff1_27_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_1_V_address0 = grp_load_weight_fu_1645_wt_buff_27_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_1_V_address0 = grp_compute6_fu_1405_wt_buff_27_1_V_address0.read();
    } else {
        wt_buff1_27_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_27_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_1_V_ce0 = grp_compute6_fu_1405_wt_buff_27_1_V_ce0.read();
    } else {
        wt_buff1_27_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_1_V_we0 = grp_load_weight_fu_1645_wt_buff_27_1_V_we0.read();
    } else {
        wt_buff1_27_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_2_V_address0 = grp_load_weight_fu_1645_wt_buff_27_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_2_V_address0 = grp_compute6_fu_1405_wt_buff_27_2_V_address0.read();
    } else {
        wt_buff1_27_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_27_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_2_V_ce0 = grp_compute6_fu_1405_wt_buff_27_2_V_ce0.read();
    } else {
        wt_buff1_27_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_2_V_we0 = grp_load_weight_fu_1645_wt_buff_27_2_V_we0.read();
    } else {
        wt_buff1_27_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_3_V_address0 = grp_load_weight_fu_1645_wt_buff_27_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_3_V_address0 = grp_compute6_fu_1405_wt_buff_27_3_V_address0.read();
    } else {
        wt_buff1_27_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_27_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_27_3_V_ce0 = grp_compute6_fu_1405_wt_buff_27_3_V_ce0.read();
    } else {
        wt_buff1_27_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_27_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_27_3_V_we0 = grp_load_weight_fu_1645_wt_buff_27_3_V_we0.read();
    } else {
        wt_buff1_27_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_0_V_address0 = grp_load_weight_fu_1645_wt_buff_28_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_0_V_address0 = grp_compute6_fu_1405_wt_buff_28_0_V_address0.read();
    } else {
        wt_buff1_28_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_28_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_0_V_ce0 = grp_compute6_fu_1405_wt_buff_28_0_V_ce0.read();
    } else {
        wt_buff1_28_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_0_V_we0 = grp_load_weight_fu_1645_wt_buff_28_0_V_we0.read();
    } else {
        wt_buff1_28_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_1_V_address0 = grp_load_weight_fu_1645_wt_buff_28_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_1_V_address0 = grp_compute6_fu_1405_wt_buff_28_1_V_address0.read();
    } else {
        wt_buff1_28_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_28_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_1_V_ce0 = grp_compute6_fu_1405_wt_buff_28_1_V_ce0.read();
    } else {
        wt_buff1_28_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_1_V_we0 = grp_load_weight_fu_1645_wt_buff_28_1_V_we0.read();
    } else {
        wt_buff1_28_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_2_V_address0 = grp_load_weight_fu_1645_wt_buff_28_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_2_V_address0 = grp_compute6_fu_1405_wt_buff_28_2_V_address0.read();
    } else {
        wt_buff1_28_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

}

