#include "compute_output.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void compute_output::thread_wt_buff1_28_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_2_V_ce0 = grp_compute6_fu_1405_wt_buff_28_2_V_ce0.read();
    } else {
        wt_buff1_28_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_2_V_we0 = grp_load_weight_fu_1645_wt_buff_28_2_V_we0.read();
    } else {
        wt_buff1_28_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_3_V_address0 = grp_load_weight_fu_1645_wt_buff_28_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_3_V_address0 = grp_compute6_fu_1405_wt_buff_28_3_V_address0.read();
    } else {
        wt_buff1_28_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_28_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_28_3_V_ce0 = grp_compute6_fu_1405_wt_buff_28_3_V_ce0.read();
    } else {
        wt_buff1_28_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_28_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_28_3_V_we0 = grp_load_weight_fu_1645_wt_buff_28_3_V_we0.read();
    } else {
        wt_buff1_28_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_0_V_address0 = grp_load_weight_fu_1645_wt_buff_29_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_0_V_address0 = grp_compute6_fu_1405_wt_buff_29_0_V_address0.read();
    } else {
        wt_buff1_29_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_29_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_0_V_ce0 = grp_compute6_fu_1405_wt_buff_29_0_V_ce0.read();
    } else {
        wt_buff1_29_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_0_V_we0 = grp_load_weight_fu_1645_wt_buff_29_0_V_we0.read();
    } else {
        wt_buff1_29_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_1_V_address0 = grp_load_weight_fu_1645_wt_buff_29_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_1_V_address0 = grp_compute6_fu_1405_wt_buff_29_1_V_address0.read();
    } else {
        wt_buff1_29_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_29_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_1_V_ce0 = grp_compute6_fu_1405_wt_buff_29_1_V_ce0.read();
    } else {
        wt_buff1_29_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_1_V_we0 = grp_load_weight_fu_1645_wt_buff_29_1_V_we0.read();
    } else {
        wt_buff1_29_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_2_V_address0 = grp_load_weight_fu_1645_wt_buff_29_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_2_V_address0 = grp_compute6_fu_1405_wt_buff_29_2_V_address0.read();
    } else {
        wt_buff1_29_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_29_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_2_V_ce0 = grp_compute6_fu_1405_wt_buff_29_2_V_ce0.read();
    } else {
        wt_buff1_29_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_2_V_we0 = grp_load_weight_fu_1645_wt_buff_29_2_V_we0.read();
    } else {
        wt_buff1_29_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_3_V_address0 = grp_load_weight_fu_1645_wt_buff_29_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_3_V_address0 = grp_compute6_fu_1405_wt_buff_29_3_V_address0.read();
    } else {
        wt_buff1_29_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_29_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_29_3_V_ce0 = grp_compute6_fu_1405_wt_buff_29_3_V_ce0.read();
    } else {
        wt_buff1_29_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_29_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_29_3_V_we0 = grp_load_weight_fu_1645_wt_buff_29_3_V_we0.read();
    } else {
        wt_buff1_29_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_0_V_address0 = grp_load_weight_fu_1645_wt_buff_2_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_0_V_address0 = grp_compute6_fu_1405_wt_buff_2_0_V_address0.read();
    } else {
        wt_buff1_2_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_0_V_ce0 = grp_compute6_fu_1405_wt_buff_2_0_V_ce0.read();
    } else {
        wt_buff1_2_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_0_V_we0 = grp_load_weight_fu_1645_wt_buff_2_0_V_we0.read();
    } else {
        wt_buff1_2_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_1_V_address0 = grp_load_weight_fu_1645_wt_buff_2_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_1_V_address0 = grp_compute6_fu_1405_wt_buff_2_1_V_address0.read();
    } else {
        wt_buff1_2_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_1_V_ce0 = grp_compute6_fu_1405_wt_buff_2_1_V_ce0.read();
    } else {
        wt_buff1_2_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_1_V_we0 = grp_load_weight_fu_1645_wt_buff_2_1_V_we0.read();
    } else {
        wt_buff1_2_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_2_V_address0 = grp_load_weight_fu_1645_wt_buff_2_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_2_V_address0 = grp_compute6_fu_1405_wt_buff_2_2_V_address0.read();
    } else {
        wt_buff1_2_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_2_V_ce0 = grp_compute6_fu_1405_wt_buff_2_2_V_ce0.read();
    } else {
        wt_buff1_2_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_2_V_we0 = grp_load_weight_fu_1645_wt_buff_2_2_V_we0.read();
    } else {
        wt_buff1_2_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_3_V_address0 = grp_load_weight_fu_1645_wt_buff_2_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_3_V_address0 = grp_compute6_fu_1405_wt_buff_2_3_V_address0.read();
    } else {
        wt_buff1_2_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_2_3_V_ce0 = grp_compute6_fu_1405_wt_buff_2_3_V_ce0.read();
    } else {
        wt_buff1_2_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_2_3_V_we0 = grp_load_weight_fu_1645_wt_buff_2_3_V_we0.read();
    } else {
        wt_buff1_2_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_0_V_address0 = grp_load_weight_fu_1645_wt_buff_30_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_0_V_address0 = grp_compute6_fu_1405_wt_buff_30_0_V_address0.read();
    } else {
        wt_buff1_30_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_30_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_0_V_ce0 = grp_compute6_fu_1405_wt_buff_30_0_V_ce0.read();
    } else {
        wt_buff1_30_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_0_V_we0 = grp_load_weight_fu_1645_wt_buff_30_0_V_we0.read();
    } else {
        wt_buff1_30_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_1_V_address0 = grp_load_weight_fu_1645_wt_buff_30_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_1_V_address0 = grp_compute6_fu_1405_wt_buff_30_1_V_address0.read();
    } else {
        wt_buff1_30_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_30_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_1_V_ce0 = grp_compute6_fu_1405_wt_buff_30_1_V_ce0.read();
    } else {
        wt_buff1_30_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_1_V_we0 = grp_load_weight_fu_1645_wt_buff_30_1_V_we0.read();
    } else {
        wt_buff1_30_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_2_V_address0 = grp_load_weight_fu_1645_wt_buff_30_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_2_V_address0 = grp_compute6_fu_1405_wt_buff_30_2_V_address0.read();
    } else {
        wt_buff1_30_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_30_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_2_V_ce0 = grp_compute6_fu_1405_wt_buff_30_2_V_ce0.read();
    } else {
        wt_buff1_30_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_2_V_we0 = grp_load_weight_fu_1645_wt_buff_30_2_V_we0.read();
    } else {
        wt_buff1_30_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_3_V_address0 = grp_load_weight_fu_1645_wt_buff_30_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_3_V_address0 = grp_compute6_fu_1405_wt_buff_30_3_V_address0.read();
    } else {
        wt_buff1_30_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_30_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_30_3_V_ce0 = grp_compute6_fu_1405_wt_buff_30_3_V_ce0.read();
    } else {
        wt_buff1_30_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_30_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_30_3_V_we0 = grp_load_weight_fu_1645_wt_buff_30_3_V_we0.read();
    } else {
        wt_buff1_30_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_0_V_address0 = grp_load_weight_fu_1645_wt_buff_31_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_0_V_address0 = grp_compute6_fu_1405_wt_buff_31_0_V_address0.read();
    } else {
        wt_buff1_31_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_31_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_0_V_ce0 = grp_compute6_fu_1405_wt_buff_31_0_V_ce0.read();
    } else {
        wt_buff1_31_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_0_V_we0 = grp_load_weight_fu_1645_wt_buff_31_0_V_we0.read();
    } else {
        wt_buff1_31_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_1_V_address0 = grp_load_weight_fu_1645_wt_buff_31_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_1_V_address0 = grp_compute6_fu_1405_wt_buff_31_1_V_address0.read();
    } else {
        wt_buff1_31_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_31_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_1_V_ce0 = grp_compute6_fu_1405_wt_buff_31_1_V_ce0.read();
    } else {
        wt_buff1_31_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_1_V_we0 = grp_load_weight_fu_1645_wt_buff_31_1_V_we0.read();
    } else {
        wt_buff1_31_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_2_V_address0 = grp_load_weight_fu_1645_wt_buff_31_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_2_V_address0 = grp_compute6_fu_1405_wt_buff_31_2_V_address0.read();
    } else {
        wt_buff1_31_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_31_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_2_V_ce0 = grp_compute6_fu_1405_wt_buff_31_2_V_ce0.read();
    } else {
        wt_buff1_31_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_2_V_we0 = grp_load_weight_fu_1645_wt_buff_31_2_V_we0.read();
    } else {
        wt_buff1_31_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_3_V_address0 = grp_load_weight_fu_1645_wt_buff_31_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_3_V_address0 = grp_compute6_fu_1405_wt_buff_31_3_V_address0.read();
    } else {
        wt_buff1_31_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_31_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_31_3_V_ce0 = grp_compute6_fu_1405_wt_buff_31_3_V_ce0.read();
    } else {
        wt_buff1_31_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_31_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_31_3_V_we0 = grp_load_weight_fu_1645_wt_buff_31_3_V_we0.read();
    } else {
        wt_buff1_31_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_0_V_address0 = grp_load_weight_fu_1645_wt_buff_3_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_0_V_address0 = grp_compute6_fu_1405_wt_buff_3_0_V_address0.read();
    } else {
        wt_buff1_3_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_0_V_ce0 = grp_compute6_fu_1405_wt_buff_3_0_V_ce0.read();
    } else {
        wt_buff1_3_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_0_V_we0 = grp_load_weight_fu_1645_wt_buff_3_0_V_we0.read();
    } else {
        wt_buff1_3_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_1_V_address0 = grp_load_weight_fu_1645_wt_buff_3_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_1_V_address0 = grp_compute6_fu_1405_wt_buff_3_1_V_address0.read();
    } else {
        wt_buff1_3_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_1_V_ce0 = grp_compute6_fu_1405_wt_buff_3_1_V_ce0.read();
    } else {
        wt_buff1_3_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_1_V_we0 = grp_load_weight_fu_1645_wt_buff_3_1_V_we0.read();
    } else {
        wt_buff1_3_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_2_V_address0 = grp_load_weight_fu_1645_wt_buff_3_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_2_V_address0 = grp_compute6_fu_1405_wt_buff_3_2_V_address0.read();
    } else {
        wt_buff1_3_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_2_V_ce0 = grp_compute6_fu_1405_wt_buff_3_2_V_ce0.read();
    } else {
        wt_buff1_3_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_2_V_we0 = grp_load_weight_fu_1645_wt_buff_3_2_V_we0.read();
    } else {
        wt_buff1_3_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_3_V_address0 = grp_load_weight_fu_1645_wt_buff_3_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_3_V_address0 = grp_compute6_fu_1405_wt_buff_3_3_V_address0.read();
    } else {
        wt_buff1_3_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_3_3_V_ce0 = grp_compute6_fu_1405_wt_buff_3_3_V_ce0.read();
    } else {
        wt_buff1_3_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_3_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_3_3_V_we0 = grp_load_weight_fu_1645_wt_buff_3_3_V_we0.read();
    } else {
        wt_buff1_3_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_0_V_address0 = grp_load_weight_fu_1645_wt_buff_4_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_0_V_address0 = grp_compute6_fu_1405_wt_buff_4_0_V_address0.read();
    } else {
        wt_buff1_4_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_0_V_ce0 = grp_compute6_fu_1405_wt_buff_4_0_V_ce0.read();
    } else {
        wt_buff1_4_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_0_V_we0 = grp_load_weight_fu_1645_wt_buff_4_0_V_we0.read();
    } else {
        wt_buff1_4_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_1_V_address0 = grp_load_weight_fu_1645_wt_buff_4_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_1_V_address0 = grp_compute6_fu_1405_wt_buff_4_1_V_address0.read();
    } else {
        wt_buff1_4_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_1_V_ce0 = grp_compute6_fu_1405_wt_buff_4_1_V_ce0.read();
    } else {
        wt_buff1_4_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_1_V_we0 = grp_load_weight_fu_1645_wt_buff_4_1_V_we0.read();
    } else {
        wt_buff1_4_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_2_V_address0 = grp_load_weight_fu_1645_wt_buff_4_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_2_V_address0 = grp_compute6_fu_1405_wt_buff_4_2_V_address0.read();
    } else {
        wt_buff1_4_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_2_V_ce0 = grp_compute6_fu_1405_wt_buff_4_2_V_ce0.read();
    } else {
        wt_buff1_4_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_2_V_we0 = grp_load_weight_fu_1645_wt_buff_4_2_V_we0.read();
    } else {
        wt_buff1_4_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_3_V_address0 = grp_load_weight_fu_1645_wt_buff_4_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_3_V_address0 = grp_compute6_fu_1405_wt_buff_4_3_V_address0.read();
    } else {
        wt_buff1_4_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_4_3_V_ce0 = grp_compute6_fu_1405_wt_buff_4_3_V_ce0.read();
    } else {
        wt_buff1_4_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_4_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_4_3_V_we0 = grp_load_weight_fu_1645_wt_buff_4_3_V_we0.read();
    } else {
        wt_buff1_4_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_0_V_address0 = grp_load_weight_fu_1645_wt_buff_5_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_0_V_address0 = grp_compute6_fu_1405_wt_buff_5_0_V_address0.read();
    } else {
        wt_buff1_5_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_0_V_ce0 = grp_compute6_fu_1405_wt_buff_5_0_V_ce0.read();
    } else {
        wt_buff1_5_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_0_V_we0 = grp_load_weight_fu_1645_wt_buff_5_0_V_we0.read();
    } else {
        wt_buff1_5_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_1_V_address0 = grp_load_weight_fu_1645_wt_buff_5_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_1_V_address0 = grp_compute6_fu_1405_wt_buff_5_1_V_address0.read();
    } else {
        wt_buff1_5_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_1_V_ce0 = grp_compute6_fu_1405_wt_buff_5_1_V_ce0.read();
    } else {
        wt_buff1_5_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_1_V_we0 = grp_load_weight_fu_1645_wt_buff_5_1_V_we0.read();
    } else {
        wt_buff1_5_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_2_V_address0 = grp_load_weight_fu_1645_wt_buff_5_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_2_V_address0 = grp_compute6_fu_1405_wt_buff_5_2_V_address0.read();
    } else {
        wt_buff1_5_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_2_V_ce0 = grp_compute6_fu_1405_wt_buff_5_2_V_ce0.read();
    } else {
        wt_buff1_5_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_2_V_we0 = grp_load_weight_fu_1645_wt_buff_5_2_V_we0.read();
    } else {
        wt_buff1_5_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_3_V_address0 = grp_load_weight_fu_1645_wt_buff_5_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_3_V_address0 = grp_compute6_fu_1405_wt_buff_5_3_V_address0.read();
    } else {
        wt_buff1_5_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_5_3_V_ce0 = grp_compute6_fu_1405_wt_buff_5_3_V_ce0.read();
    } else {
        wt_buff1_5_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_5_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_5_3_V_we0 = grp_load_weight_fu_1645_wt_buff_5_3_V_we0.read();
    } else {
        wt_buff1_5_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_0_V_address0 = grp_load_weight_fu_1645_wt_buff_6_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_0_V_address0 = grp_compute6_fu_1405_wt_buff_6_0_V_address0.read();
    } else {
        wt_buff1_6_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_0_V_ce0 = grp_compute6_fu_1405_wt_buff_6_0_V_ce0.read();
    } else {
        wt_buff1_6_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_0_V_we0 = grp_load_weight_fu_1645_wt_buff_6_0_V_we0.read();
    } else {
        wt_buff1_6_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_1_V_address0 = grp_load_weight_fu_1645_wt_buff_6_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_1_V_address0 = grp_compute6_fu_1405_wt_buff_6_1_V_address0.read();
    } else {
        wt_buff1_6_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_1_V_ce0 = grp_compute6_fu_1405_wt_buff_6_1_V_ce0.read();
    } else {
        wt_buff1_6_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_1_V_we0 = grp_load_weight_fu_1645_wt_buff_6_1_V_we0.read();
    } else {
        wt_buff1_6_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_2_V_address0 = grp_load_weight_fu_1645_wt_buff_6_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_2_V_address0 = grp_compute6_fu_1405_wt_buff_6_2_V_address0.read();
    } else {
        wt_buff1_6_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_2_V_ce0 = grp_compute6_fu_1405_wt_buff_6_2_V_ce0.read();
    } else {
        wt_buff1_6_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_2_V_we0 = grp_load_weight_fu_1645_wt_buff_6_2_V_we0.read();
    } else {
        wt_buff1_6_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_3_V_address0 = grp_load_weight_fu_1645_wt_buff_6_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_3_V_address0 = grp_compute6_fu_1405_wt_buff_6_3_V_address0.read();
    } else {
        wt_buff1_6_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_6_3_V_ce0 = grp_compute6_fu_1405_wt_buff_6_3_V_ce0.read();
    } else {
        wt_buff1_6_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_6_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_6_3_V_we0 = grp_load_weight_fu_1645_wt_buff_6_3_V_we0.read();
    } else {
        wt_buff1_6_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_0_V_address0 = grp_load_weight_fu_1645_wt_buff_7_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_0_V_address0 = grp_compute6_fu_1405_wt_buff_7_0_V_address0.read();
    } else {
        wt_buff1_7_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_0_V_ce0 = grp_compute6_fu_1405_wt_buff_7_0_V_ce0.read();
    } else {
        wt_buff1_7_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_0_V_we0 = grp_load_weight_fu_1645_wt_buff_7_0_V_we0.read();
    } else {
        wt_buff1_7_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_1_V_address0 = grp_load_weight_fu_1645_wt_buff_7_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_1_V_address0 = grp_compute6_fu_1405_wt_buff_7_1_V_address0.read();
    } else {
        wt_buff1_7_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_1_V_ce0 = grp_compute6_fu_1405_wt_buff_7_1_V_ce0.read();
    } else {
        wt_buff1_7_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_1_V_we0 = grp_load_weight_fu_1645_wt_buff_7_1_V_we0.read();
    } else {
        wt_buff1_7_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_2_V_address0 = grp_load_weight_fu_1645_wt_buff_7_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_2_V_address0 = grp_compute6_fu_1405_wt_buff_7_2_V_address0.read();
    } else {
        wt_buff1_7_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_2_V_ce0 = grp_compute6_fu_1405_wt_buff_7_2_V_ce0.read();
    } else {
        wt_buff1_7_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_2_V_we0 = grp_load_weight_fu_1645_wt_buff_7_2_V_we0.read();
    } else {
        wt_buff1_7_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_3_V_address0 = grp_load_weight_fu_1645_wt_buff_7_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_3_V_address0 = grp_compute6_fu_1405_wt_buff_7_3_V_address0.read();
    } else {
        wt_buff1_7_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_7_3_V_ce0 = grp_compute6_fu_1405_wt_buff_7_3_V_ce0.read();
    } else {
        wt_buff1_7_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_7_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_7_3_V_we0 = grp_load_weight_fu_1645_wt_buff_7_3_V_we0.read();
    } else {
        wt_buff1_7_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_0_V_address0 = grp_load_weight_fu_1645_wt_buff_8_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_0_V_address0 = grp_compute6_fu_1405_wt_buff_8_0_V_address0.read();
    } else {
        wt_buff1_8_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_0_V_ce0 = grp_compute6_fu_1405_wt_buff_8_0_V_ce0.read();
    } else {
        wt_buff1_8_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_0_V_we0 = grp_load_weight_fu_1645_wt_buff_8_0_V_we0.read();
    } else {
        wt_buff1_8_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_1_V_address0 = grp_load_weight_fu_1645_wt_buff_8_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_1_V_address0 = grp_compute6_fu_1405_wt_buff_8_1_V_address0.read();
    } else {
        wt_buff1_8_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_1_V_ce0 = grp_compute6_fu_1405_wt_buff_8_1_V_ce0.read();
    } else {
        wt_buff1_8_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_1_V_we0 = grp_load_weight_fu_1645_wt_buff_8_1_V_we0.read();
    } else {
        wt_buff1_8_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_2_V_address0 = grp_load_weight_fu_1645_wt_buff_8_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_2_V_address0 = grp_compute6_fu_1405_wt_buff_8_2_V_address0.read();
    } else {
        wt_buff1_8_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_2_V_ce0 = grp_compute6_fu_1405_wt_buff_8_2_V_ce0.read();
    } else {
        wt_buff1_8_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_2_V_we0 = grp_load_weight_fu_1645_wt_buff_8_2_V_we0.read();
    } else {
        wt_buff1_8_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_3_V_address0 = grp_load_weight_fu_1645_wt_buff_8_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_3_V_address0 = grp_compute6_fu_1405_wt_buff_8_3_V_address0.read();
    } else {
        wt_buff1_8_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_8_3_V_ce0 = grp_compute6_fu_1405_wt_buff_8_3_V_ce0.read();
    } else {
        wt_buff1_8_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_8_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_8_3_V_we0 = grp_load_weight_fu_1645_wt_buff_8_3_V_we0.read();
    } else {
        wt_buff1_8_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_0_V_address0 = grp_load_weight_fu_1645_wt_buff_9_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_0_V_address0 = grp_compute6_fu_1405_wt_buff_9_0_V_address0.read();
    } else {
        wt_buff1_9_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_0_V_ce0 = grp_compute6_fu_1405_wt_buff_9_0_V_ce0.read();
    } else {
        wt_buff1_9_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_0_V_we0 = grp_load_weight_fu_1645_wt_buff_9_0_V_we0.read();
    } else {
        wt_buff1_9_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_1_V_address0 = grp_load_weight_fu_1645_wt_buff_9_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_1_V_address0 = grp_compute6_fu_1405_wt_buff_9_1_V_address0.read();
    } else {
        wt_buff1_9_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_1_V_ce0 = grp_compute6_fu_1405_wt_buff_9_1_V_ce0.read();
    } else {
        wt_buff1_9_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_1_V_we0 = grp_load_weight_fu_1645_wt_buff_9_1_V_we0.read();
    } else {
        wt_buff1_9_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_2_V_address0 = grp_load_weight_fu_1645_wt_buff_9_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_2_V_address0 = grp_compute6_fu_1405_wt_buff_9_2_V_address0.read();
    } else {
        wt_buff1_9_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_2_V_ce0 = grp_compute6_fu_1405_wt_buff_9_2_V_ce0.read();
    } else {
        wt_buff1_9_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_2_V_we0 = grp_load_weight_fu_1645_wt_buff_9_2_V_we0.read();
    } else {
        wt_buff1_9_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_3_V_address0 = grp_load_weight_fu_1645_wt_buff_9_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_3_V_address0 = grp_compute6_fu_1405_wt_buff_9_3_V_address0.read();
    } else {
        wt_buff1_9_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff1_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff1_9_3_V_ce0 = grp_compute6_fu_1405_wt_buff_9_3_V_ce0.read();
    } else {
        wt_buff1_9_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff1_9_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())))) {
        wt_buff1_9_3_V_we0 = grp_load_weight_fu_1645_wt_buff_9_3_V_we0.read();
    } else {
        wt_buff1_9_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_0_V_address0 = grp_load_weight_fu_1645_wt_buff_0_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_0_V_address0 = grp_compute6_fu_1405_wt_buff_0_0_V_address0.read();
    } else {
        wt_buff2_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_0_V_ce0 = grp_compute6_fu_1405_wt_buff_0_0_V_ce0.read();
    } else {
        wt_buff2_0_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_0_V_we0 = grp_load_weight_fu_1645_wt_buff_0_0_V_we0.read();
    } else {
        wt_buff2_0_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_1_V_address0 = grp_load_weight_fu_1645_wt_buff_0_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_1_V_address0 = grp_compute6_fu_1405_wt_buff_0_1_V_address0.read();
    } else {
        wt_buff2_0_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_1_V_ce0 = grp_compute6_fu_1405_wt_buff_0_1_V_ce0.read();
    } else {
        wt_buff2_0_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_1_V_we0 = grp_load_weight_fu_1645_wt_buff_0_1_V_we0.read();
    } else {
        wt_buff2_0_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_2_V_address0 = grp_load_weight_fu_1645_wt_buff_0_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_2_V_address0 = grp_compute6_fu_1405_wt_buff_0_2_V_address0.read();
    } else {
        wt_buff2_0_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_2_V_ce0 = grp_compute6_fu_1405_wt_buff_0_2_V_ce0.read();
    } else {
        wt_buff2_0_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_2_V_we0 = grp_load_weight_fu_1645_wt_buff_0_2_V_we0.read();
    } else {
        wt_buff2_0_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_3_V_address0 = grp_load_weight_fu_1645_wt_buff_0_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_3_V_address0 = grp_compute6_fu_1405_wt_buff_0_3_V_address0.read();
    } else {
        wt_buff2_0_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_0_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_0_3_V_ce0 = grp_compute6_fu_1405_wt_buff_0_3_V_ce0.read();
    } else {
        wt_buff2_0_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_0_3_V_we0 = grp_load_weight_fu_1645_wt_buff_0_3_V_we0.read();
    } else {
        wt_buff2_0_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_0_V_address0 = grp_load_weight_fu_1645_wt_buff_10_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_0_V_address0 = grp_compute6_fu_1405_wt_buff_10_0_V_address0.read();
    } else {
        wt_buff2_10_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_10_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_0_V_ce0 = grp_compute6_fu_1405_wt_buff_10_0_V_ce0.read();
    } else {
        wt_buff2_10_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_0_V_we0 = grp_load_weight_fu_1645_wt_buff_10_0_V_we0.read();
    } else {
        wt_buff2_10_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_1_V_address0 = grp_load_weight_fu_1645_wt_buff_10_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_1_V_address0 = grp_compute6_fu_1405_wt_buff_10_1_V_address0.read();
    } else {
        wt_buff2_10_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_10_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_1_V_ce0 = grp_compute6_fu_1405_wt_buff_10_1_V_ce0.read();
    } else {
        wt_buff2_10_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_1_V_we0 = grp_load_weight_fu_1645_wt_buff_10_1_V_we0.read();
    } else {
        wt_buff2_10_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_2_V_address0 = grp_load_weight_fu_1645_wt_buff_10_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_2_V_address0 = grp_compute6_fu_1405_wt_buff_10_2_V_address0.read();
    } else {
        wt_buff2_10_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_10_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_2_V_ce0 = grp_compute6_fu_1405_wt_buff_10_2_V_ce0.read();
    } else {
        wt_buff2_10_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_2_V_we0 = grp_load_weight_fu_1645_wt_buff_10_2_V_we0.read();
    } else {
        wt_buff2_10_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_3_V_address0 = grp_load_weight_fu_1645_wt_buff_10_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_3_V_address0 = grp_compute6_fu_1405_wt_buff_10_3_V_address0.read();
    } else {
        wt_buff2_10_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_10_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_10_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_10_3_V_ce0 = grp_compute6_fu_1405_wt_buff_10_3_V_ce0.read();
    } else {
        wt_buff2_10_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_10_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_10_3_V_we0 = grp_load_weight_fu_1645_wt_buff_10_3_V_we0.read();
    } else {
        wt_buff2_10_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_0_V_address0 = grp_load_weight_fu_1645_wt_buff_11_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_0_V_address0 = grp_compute6_fu_1405_wt_buff_11_0_V_address0.read();
    } else {
        wt_buff2_11_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_11_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_0_V_ce0 = grp_compute6_fu_1405_wt_buff_11_0_V_ce0.read();
    } else {
        wt_buff2_11_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_0_V_we0 = grp_load_weight_fu_1645_wt_buff_11_0_V_we0.read();
    } else {
        wt_buff2_11_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_1_V_address0 = grp_load_weight_fu_1645_wt_buff_11_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_1_V_address0 = grp_compute6_fu_1405_wt_buff_11_1_V_address0.read();
    } else {
        wt_buff2_11_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_11_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_1_V_ce0 = grp_compute6_fu_1405_wt_buff_11_1_V_ce0.read();
    } else {
        wt_buff2_11_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_1_V_we0 = grp_load_weight_fu_1645_wt_buff_11_1_V_we0.read();
    } else {
        wt_buff2_11_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_2_V_address0 = grp_load_weight_fu_1645_wt_buff_11_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_2_V_address0 = grp_compute6_fu_1405_wt_buff_11_2_V_address0.read();
    } else {
        wt_buff2_11_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_11_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_2_V_ce0 = grp_compute6_fu_1405_wt_buff_11_2_V_ce0.read();
    } else {
        wt_buff2_11_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_2_V_we0 = grp_load_weight_fu_1645_wt_buff_11_2_V_we0.read();
    } else {
        wt_buff2_11_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_3_V_address0 = grp_load_weight_fu_1645_wt_buff_11_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_3_V_address0 = grp_compute6_fu_1405_wt_buff_11_3_V_address0.read();
    } else {
        wt_buff2_11_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_11_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_11_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_11_3_V_ce0 = grp_compute6_fu_1405_wt_buff_11_3_V_ce0.read();
    } else {
        wt_buff2_11_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_11_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_11_3_V_we0 = grp_load_weight_fu_1645_wt_buff_11_3_V_we0.read();
    } else {
        wt_buff2_11_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_0_V_address0 = grp_load_weight_fu_1645_wt_buff_12_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_0_V_address0 = grp_compute6_fu_1405_wt_buff_12_0_V_address0.read();
    } else {
        wt_buff2_12_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_12_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_0_V_ce0 = grp_compute6_fu_1405_wt_buff_12_0_V_ce0.read();
    } else {
        wt_buff2_12_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_0_V_we0 = grp_load_weight_fu_1645_wt_buff_12_0_V_we0.read();
    } else {
        wt_buff2_12_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_1_V_address0 = grp_load_weight_fu_1645_wt_buff_12_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_1_V_address0 = grp_compute6_fu_1405_wt_buff_12_1_V_address0.read();
    } else {
        wt_buff2_12_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_12_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_1_V_ce0 = grp_compute6_fu_1405_wt_buff_12_1_V_ce0.read();
    } else {
        wt_buff2_12_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_1_V_we0 = grp_load_weight_fu_1645_wt_buff_12_1_V_we0.read();
    } else {
        wt_buff2_12_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_2_V_address0 = grp_load_weight_fu_1645_wt_buff_12_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_2_V_address0 = grp_compute6_fu_1405_wt_buff_12_2_V_address0.read();
    } else {
        wt_buff2_12_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_12_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_2_V_ce0 = grp_compute6_fu_1405_wt_buff_12_2_V_ce0.read();
    } else {
        wt_buff2_12_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_2_V_we0 = grp_load_weight_fu_1645_wt_buff_12_2_V_we0.read();
    } else {
        wt_buff2_12_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_3_V_address0 = grp_load_weight_fu_1645_wt_buff_12_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_3_V_address0 = grp_compute6_fu_1405_wt_buff_12_3_V_address0.read();
    } else {
        wt_buff2_12_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_12_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_12_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_12_3_V_ce0 = grp_compute6_fu_1405_wt_buff_12_3_V_ce0.read();
    } else {
        wt_buff2_12_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_12_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_12_3_V_we0 = grp_load_weight_fu_1645_wt_buff_12_3_V_we0.read();
    } else {
        wt_buff2_12_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_0_V_address0 = grp_load_weight_fu_1645_wt_buff_13_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_0_V_address0 = grp_compute6_fu_1405_wt_buff_13_0_V_address0.read();
    } else {
        wt_buff2_13_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_13_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_0_V_ce0 = grp_compute6_fu_1405_wt_buff_13_0_V_ce0.read();
    } else {
        wt_buff2_13_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_0_V_we0 = grp_load_weight_fu_1645_wt_buff_13_0_V_we0.read();
    } else {
        wt_buff2_13_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_1_V_address0 = grp_load_weight_fu_1645_wt_buff_13_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_1_V_address0 = grp_compute6_fu_1405_wt_buff_13_1_V_address0.read();
    } else {
        wt_buff2_13_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_13_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_1_V_ce0 = grp_compute6_fu_1405_wt_buff_13_1_V_ce0.read();
    } else {
        wt_buff2_13_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_1_V_we0 = grp_load_weight_fu_1645_wt_buff_13_1_V_we0.read();
    } else {
        wt_buff2_13_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_2_V_address0 = grp_load_weight_fu_1645_wt_buff_13_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_2_V_address0 = grp_compute6_fu_1405_wt_buff_13_2_V_address0.read();
    } else {
        wt_buff2_13_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_13_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_2_V_ce0 = grp_compute6_fu_1405_wt_buff_13_2_V_ce0.read();
    } else {
        wt_buff2_13_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_2_V_we0 = grp_load_weight_fu_1645_wt_buff_13_2_V_we0.read();
    } else {
        wt_buff2_13_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_3_V_address0 = grp_load_weight_fu_1645_wt_buff_13_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_3_V_address0 = grp_compute6_fu_1405_wt_buff_13_3_V_address0.read();
    } else {
        wt_buff2_13_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_13_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_13_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_13_3_V_ce0 = grp_compute6_fu_1405_wt_buff_13_3_V_ce0.read();
    } else {
        wt_buff2_13_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_13_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_13_3_V_we0 = grp_load_weight_fu_1645_wt_buff_13_3_V_we0.read();
    } else {
        wt_buff2_13_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_0_V_address0 = grp_load_weight_fu_1645_wt_buff_14_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_0_V_address0 = grp_compute6_fu_1405_wt_buff_14_0_V_address0.read();
    } else {
        wt_buff2_14_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_14_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_0_V_ce0 = grp_compute6_fu_1405_wt_buff_14_0_V_ce0.read();
    } else {
        wt_buff2_14_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_0_V_we0 = grp_load_weight_fu_1645_wt_buff_14_0_V_we0.read();
    } else {
        wt_buff2_14_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_1_V_address0 = grp_load_weight_fu_1645_wt_buff_14_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_1_V_address0 = grp_compute6_fu_1405_wt_buff_14_1_V_address0.read();
    } else {
        wt_buff2_14_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_14_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_1_V_ce0 = grp_compute6_fu_1405_wt_buff_14_1_V_ce0.read();
    } else {
        wt_buff2_14_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_1_V_we0 = grp_load_weight_fu_1645_wt_buff_14_1_V_we0.read();
    } else {
        wt_buff2_14_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_2_V_address0 = grp_load_weight_fu_1645_wt_buff_14_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_2_V_address0 = grp_compute6_fu_1405_wt_buff_14_2_V_address0.read();
    } else {
        wt_buff2_14_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_14_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_2_V_ce0 = grp_compute6_fu_1405_wt_buff_14_2_V_ce0.read();
    } else {
        wt_buff2_14_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_2_V_we0 = grp_load_weight_fu_1645_wt_buff_14_2_V_we0.read();
    } else {
        wt_buff2_14_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_3_V_address0 = grp_load_weight_fu_1645_wt_buff_14_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_3_V_address0 = grp_compute6_fu_1405_wt_buff_14_3_V_address0.read();
    } else {
        wt_buff2_14_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_14_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_14_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_14_3_V_ce0 = grp_compute6_fu_1405_wt_buff_14_3_V_ce0.read();
    } else {
        wt_buff2_14_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_14_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_14_3_V_we0 = grp_load_weight_fu_1645_wt_buff_14_3_V_we0.read();
    } else {
        wt_buff2_14_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_0_V_address0 = grp_load_weight_fu_1645_wt_buff_15_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_0_V_address0 = grp_compute6_fu_1405_wt_buff_15_0_V_address0.read();
    } else {
        wt_buff2_15_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_15_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_0_V_ce0 = grp_compute6_fu_1405_wt_buff_15_0_V_ce0.read();
    } else {
        wt_buff2_15_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_0_V_we0 = grp_load_weight_fu_1645_wt_buff_15_0_V_we0.read();
    } else {
        wt_buff2_15_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_1_V_address0 = grp_load_weight_fu_1645_wt_buff_15_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_1_V_address0 = grp_compute6_fu_1405_wt_buff_15_1_V_address0.read();
    } else {
        wt_buff2_15_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_15_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_1_V_ce0 = grp_compute6_fu_1405_wt_buff_15_1_V_ce0.read();
    } else {
        wt_buff2_15_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_1_V_we0 = grp_load_weight_fu_1645_wt_buff_15_1_V_we0.read();
    } else {
        wt_buff2_15_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_2_V_address0 = grp_load_weight_fu_1645_wt_buff_15_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_2_V_address0 = grp_compute6_fu_1405_wt_buff_15_2_V_address0.read();
    } else {
        wt_buff2_15_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_15_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_2_V_ce0 = grp_compute6_fu_1405_wt_buff_15_2_V_ce0.read();
    } else {
        wt_buff2_15_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_2_V_we0 = grp_load_weight_fu_1645_wt_buff_15_2_V_we0.read();
    } else {
        wt_buff2_15_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_3_V_address0 = grp_load_weight_fu_1645_wt_buff_15_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_3_V_address0 = grp_compute6_fu_1405_wt_buff_15_3_V_address0.read();
    } else {
        wt_buff2_15_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_15_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_15_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_15_3_V_ce0 = grp_compute6_fu_1405_wt_buff_15_3_V_ce0.read();
    } else {
        wt_buff2_15_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_15_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_15_3_V_we0 = grp_load_weight_fu_1645_wt_buff_15_3_V_we0.read();
    } else {
        wt_buff2_15_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_0_V_address0 = grp_load_weight_fu_1645_wt_buff_16_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_0_V_address0 = grp_compute6_fu_1405_wt_buff_16_0_V_address0.read();
    } else {
        wt_buff2_16_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_16_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_0_V_ce0 = grp_compute6_fu_1405_wt_buff_16_0_V_ce0.read();
    } else {
        wt_buff2_16_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_0_V_we0 = grp_load_weight_fu_1645_wt_buff_16_0_V_we0.read();
    } else {
        wt_buff2_16_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_1_V_address0 = grp_load_weight_fu_1645_wt_buff_16_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_1_V_address0 = grp_compute6_fu_1405_wt_buff_16_1_V_address0.read();
    } else {
        wt_buff2_16_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_16_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_1_V_ce0 = grp_compute6_fu_1405_wt_buff_16_1_V_ce0.read();
    } else {
        wt_buff2_16_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_1_V_we0 = grp_load_weight_fu_1645_wt_buff_16_1_V_we0.read();
    } else {
        wt_buff2_16_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_2_V_address0 = grp_load_weight_fu_1645_wt_buff_16_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_2_V_address0 = grp_compute6_fu_1405_wt_buff_16_2_V_address0.read();
    } else {
        wt_buff2_16_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_16_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_2_V_ce0 = grp_compute6_fu_1405_wt_buff_16_2_V_ce0.read();
    } else {
        wt_buff2_16_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_2_V_we0 = grp_load_weight_fu_1645_wt_buff_16_2_V_we0.read();
    } else {
        wt_buff2_16_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_3_V_address0 = grp_load_weight_fu_1645_wt_buff_16_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_3_V_address0 = grp_compute6_fu_1405_wt_buff_16_3_V_address0.read();
    } else {
        wt_buff2_16_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_16_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_16_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_16_3_V_ce0 = grp_compute6_fu_1405_wt_buff_16_3_V_ce0.read();
    } else {
        wt_buff2_16_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_16_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_16_3_V_we0 = grp_load_weight_fu_1645_wt_buff_16_3_V_we0.read();
    } else {
        wt_buff2_16_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_0_V_address0 = grp_load_weight_fu_1645_wt_buff_17_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_0_V_address0 = grp_compute6_fu_1405_wt_buff_17_0_V_address0.read();
    } else {
        wt_buff2_17_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_17_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_0_V_ce0 = grp_compute6_fu_1405_wt_buff_17_0_V_ce0.read();
    } else {
        wt_buff2_17_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_0_V_we0 = grp_load_weight_fu_1645_wt_buff_17_0_V_we0.read();
    } else {
        wt_buff2_17_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_1_V_address0 = grp_load_weight_fu_1645_wt_buff_17_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_1_V_address0 = grp_compute6_fu_1405_wt_buff_17_1_V_address0.read();
    } else {
        wt_buff2_17_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_17_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_1_V_ce0 = grp_compute6_fu_1405_wt_buff_17_1_V_ce0.read();
    } else {
        wt_buff2_17_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_1_V_we0 = grp_load_weight_fu_1645_wt_buff_17_1_V_we0.read();
    } else {
        wt_buff2_17_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_2_V_address0 = grp_load_weight_fu_1645_wt_buff_17_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_2_V_address0 = grp_compute6_fu_1405_wt_buff_17_2_V_address0.read();
    } else {
        wt_buff2_17_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_17_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_2_V_ce0 = grp_compute6_fu_1405_wt_buff_17_2_V_ce0.read();
    } else {
        wt_buff2_17_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_2_V_we0 = grp_load_weight_fu_1645_wt_buff_17_2_V_we0.read();
    } else {
        wt_buff2_17_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_3_V_address0 = grp_load_weight_fu_1645_wt_buff_17_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_3_V_address0 = grp_compute6_fu_1405_wt_buff_17_3_V_address0.read();
    } else {
        wt_buff2_17_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_17_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_17_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_17_3_V_ce0 = grp_compute6_fu_1405_wt_buff_17_3_V_ce0.read();
    } else {
        wt_buff2_17_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_17_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_17_3_V_we0 = grp_load_weight_fu_1645_wt_buff_17_3_V_we0.read();
    } else {
        wt_buff2_17_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_0_V_address0 = grp_load_weight_fu_1645_wt_buff_18_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_0_V_address0 = grp_compute6_fu_1405_wt_buff_18_0_V_address0.read();
    } else {
        wt_buff2_18_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_18_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_0_V_ce0 = grp_compute6_fu_1405_wt_buff_18_0_V_ce0.read();
    } else {
        wt_buff2_18_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_0_V_we0 = grp_load_weight_fu_1645_wt_buff_18_0_V_we0.read();
    } else {
        wt_buff2_18_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_1_V_address0 = grp_load_weight_fu_1645_wt_buff_18_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_1_V_address0 = grp_compute6_fu_1405_wt_buff_18_1_V_address0.read();
    } else {
        wt_buff2_18_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_18_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_1_V_ce0 = grp_compute6_fu_1405_wt_buff_18_1_V_ce0.read();
    } else {
        wt_buff2_18_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_1_V_we0 = grp_load_weight_fu_1645_wt_buff_18_1_V_we0.read();
    } else {
        wt_buff2_18_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_2_V_address0 = grp_load_weight_fu_1645_wt_buff_18_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_2_V_address0 = grp_compute6_fu_1405_wt_buff_18_2_V_address0.read();
    } else {
        wt_buff2_18_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_18_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_2_V_ce0 = grp_compute6_fu_1405_wt_buff_18_2_V_ce0.read();
    } else {
        wt_buff2_18_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_2_V_we0 = grp_load_weight_fu_1645_wt_buff_18_2_V_we0.read();
    } else {
        wt_buff2_18_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_3_V_address0 = grp_load_weight_fu_1645_wt_buff_18_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_3_V_address0 = grp_compute6_fu_1405_wt_buff_18_3_V_address0.read();
    } else {
        wt_buff2_18_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_18_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_18_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_18_3_V_ce0 = grp_compute6_fu_1405_wt_buff_18_3_V_ce0.read();
    } else {
        wt_buff2_18_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_18_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_18_3_V_we0 = grp_load_weight_fu_1645_wt_buff_18_3_V_we0.read();
    } else {
        wt_buff2_18_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_0_V_address0 = grp_load_weight_fu_1645_wt_buff_19_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_0_V_address0 = grp_compute6_fu_1405_wt_buff_19_0_V_address0.read();
    } else {
        wt_buff2_19_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_19_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_0_V_ce0 = grp_compute6_fu_1405_wt_buff_19_0_V_ce0.read();
    } else {
        wt_buff2_19_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_0_V_we0 = grp_load_weight_fu_1645_wt_buff_19_0_V_we0.read();
    } else {
        wt_buff2_19_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_1_V_address0 = grp_load_weight_fu_1645_wt_buff_19_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_1_V_address0 = grp_compute6_fu_1405_wt_buff_19_1_V_address0.read();
    } else {
        wt_buff2_19_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_19_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_1_V_ce0 = grp_compute6_fu_1405_wt_buff_19_1_V_ce0.read();
    } else {
        wt_buff2_19_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_1_V_we0 = grp_load_weight_fu_1645_wt_buff_19_1_V_we0.read();
    } else {
        wt_buff2_19_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_2_V_address0 = grp_load_weight_fu_1645_wt_buff_19_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_2_V_address0 = grp_compute6_fu_1405_wt_buff_19_2_V_address0.read();
    } else {
        wt_buff2_19_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_19_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_2_V_ce0 = grp_compute6_fu_1405_wt_buff_19_2_V_ce0.read();
    } else {
        wt_buff2_19_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_2_V_we0 = grp_load_weight_fu_1645_wt_buff_19_2_V_we0.read();
    } else {
        wt_buff2_19_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_3_V_address0 = grp_load_weight_fu_1645_wt_buff_19_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_3_V_address0 = grp_compute6_fu_1405_wt_buff_19_3_V_address0.read();
    } else {
        wt_buff2_19_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_19_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_19_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_19_3_V_ce0 = grp_compute6_fu_1405_wt_buff_19_3_V_ce0.read();
    } else {
        wt_buff2_19_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_19_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_19_3_V_we0 = grp_load_weight_fu_1645_wt_buff_19_3_V_we0.read();
    } else {
        wt_buff2_19_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_0_V_address0 = grp_load_weight_fu_1645_wt_buff_1_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_0_V_address0 = grp_compute6_fu_1405_wt_buff_1_0_V_address0.read();
    } else {
        wt_buff2_1_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_0_V_ce0 = grp_compute6_fu_1405_wt_buff_1_0_V_ce0.read();
    } else {
        wt_buff2_1_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_0_V_we0 = grp_load_weight_fu_1645_wt_buff_1_0_V_we0.read();
    } else {
        wt_buff2_1_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_1_V_address0 = grp_load_weight_fu_1645_wt_buff_1_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_1_V_address0 = grp_compute6_fu_1405_wt_buff_1_1_V_address0.read();
    } else {
        wt_buff2_1_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_1_V_ce0 = grp_compute6_fu_1405_wt_buff_1_1_V_ce0.read();
    } else {
        wt_buff2_1_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_1_V_we0 = grp_load_weight_fu_1645_wt_buff_1_1_V_we0.read();
    } else {
        wt_buff2_1_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_2_V_address0 = grp_load_weight_fu_1645_wt_buff_1_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_2_V_address0 = grp_compute6_fu_1405_wt_buff_1_2_V_address0.read();
    } else {
        wt_buff2_1_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_2_V_ce0 = grp_compute6_fu_1405_wt_buff_1_2_V_ce0.read();
    } else {
        wt_buff2_1_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_2_V_we0 = grp_load_weight_fu_1645_wt_buff_1_2_V_we0.read();
    } else {
        wt_buff2_1_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_3_V_address0 = grp_load_weight_fu_1645_wt_buff_1_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_3_V_address0 = grp_compute6_fu_1405_wt_buff_1_3_V_address0.read();
    } else {
        wt_buff2_1_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_1_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_1_3_V_ce0 = grp_compute6_fu_1405_wt_buff_1_3_V_ce0.read();
    } else {
        wt_buff2_1_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_1_3_V_we0 = grp_load_weight_fu_1645_wt_buff_1_3_V_we0.read();
    } else {
        wt_buff2_1_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_0_V_address0 = grp_load_weight_fu_1645_wt_buff_20_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_0_V_address0 = grp_compute6_fu_1405_wt_buff_20_0_V_address0.read();
    } else {
        wt_buff2_20_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_20_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_0_V_ce0 = grp_compute6_fu_1405_wt_buff_20_0_V_ce0.read();
    } else {
        wt_buff2_20_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_0_V_we0 = grp_load_weight_fu_1645_wt_buff_20_0_V_we0.read();
    } else {
        wt_buff2_20_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_1_V_address0 = grp_load_weight_fu_1645_wt_buff_20_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_1_V_address0 = grp_compute6_fu_1405_wt_buff_20_1_V_address0.read();
    } else {
        wt_buff2_20_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_20_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_1_V_ce0 = grp_compute6_fu_1405_wt_buff_20_1_V_ce0.read();
    } else {
        wt_buff2_20_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_1_V_we0 = grp_load_weight_fu_1645_wt_buff_20_1_V_we0.read();
    } else {
        wt_buff2_20_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_2_V_address0 = grp_load_weight_fu_1645_wt_buff_20_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_2_V_address0 = grp_compute6_fu_1405_wt_buff_20_2_V_address0.read();
    } else {
        wt_buff2_20_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_20_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_2_V_ce0 = grp_compute6_fu_1405_wt_buff_20_2_V_ce0.read();
    } else {
        wt_buff2_20_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_2_V_we0 = grp_load_weight_fu_1645_wt_buff_20_2_V_we0.read();
    } else {
        wt_buff2_20_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_3_V_address0 = grp_load_weight_fu_1645_wt_buff_20_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_3_V_address0 = grp_compute6_fu_1405_wt_buff_20_3_V_address0.read();
    } else {
        wt_buff2_20_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_20_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_20_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_20_3_V_ce0 = grp_compute6_fu_1405_wt_buff_20_3_V_ce0.read();
    } else {
        wt_buff2_20_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_20_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_20_3_V_we0 = grp_load_weight_fu_1645_wt_buff_20_3_V_we0.read();
    } else {
        wt_buff2_20_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_0_V_address0 = grp_load_weight_fu_1645_wt_buff_21_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_0_V_address0 = grp_compute6_fu_1405_wt_buff_21_0_V_address0.read();
    } else {
        wt_buff2_21_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_21_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_0_V_ce0 = grp_compute6_fu_1405_wt_buff_21_0_V_ce0.read();
    } else {
        wt_buff2_21_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_0_V_we0 = grp_load_weight_fu_1645_wt_buff_21_0_V_we0.read();
    } else {
        wt_buff2_21_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_1_V_address0 = grp_load_weight_fu_1645_wt_buff_21_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_1_V_address0 = grp_compute6_fu_1405_wt_buff_21_1_V_address0.read();
    } else {
        wt_buff2_21_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_21_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_1_V_ce0 = grp_compute6_fu_1405_wt_buff_21_1_V_ce0.read();
    } else {
        wt_buff2_21_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_1_V_we0 = grp_load_weight_fu_1645_wt_buff_21_1_V_we0.read();
    } else {
        wt_buff2_21_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_2_V_address0 = grp_load_weight_fu_1645_wt_buff_21_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_2_V_address0 = grp_compute6_fu_1405_wt_buff_21_2_V_address0.read();
    } else {
        wt_buff2_21_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_21_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_2_V_ce0 = grp_compute6_fu_1405_wt_buff_21_2_V_ce0.read();
    } else {
        wt_buff2_21_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_2_V_we0 = grp_load_weight_fu_1645_wt_buff_21_2_V_we0.read();
    } else {
        wt_buff2_21_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_3_V_address0 = grp_load_weight_fu_1645_wt_buff_21_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_3_V_address0 = grp_compute6_fu_1405_wt_buff_21_3_V_address0.read();
    } else {
        wt_buff2_21_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_21_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_21_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_21_3_V_ce0 = grp_compute6_fu_1405_wt_buff_21_3_V_ce0.read();
    } else {
        wt_buff2_21_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_21_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_21_3_V_we0 = grp_load_weight_fu_1645_wt_buff_21_3_V_we0.read();
    } else {
        wt_buff2_21_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_0_V_address0 = grp_load_weight_fu_1645_wt_buff_22_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_0_V_address0 = grp_compute6_fu_1405_wt_buff_22_0_V_address0.read();
    } else {
        wt_buff2_22_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_22_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_0_V_ce0 = grp_compute6_fu_1405_wt_buff_22_0_V_ce0.read();
    } else {
        wt_buff2_22_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_0_V_we0 = grp_load_weight_fu_1645_wt_buff_22_0_V_we0.read();
    } else {
        wt_buff2_22_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_1_V_address0 = grp_load_weight_fu_1645_wt_buff_22_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_1_V_address0 = grp_compute6_fu_1405_wt_buff_22_1_V_address0.read();
    } else {
        wt_buff2_22_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_22_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_1_V_ce0 = grp_compute6_fu_1405_wt_buff_22_1_V_ce0.read();
    } else {
        wt_buff2_22_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_1_V_we0 = grp_load_weight_fu_1645_wt_buff_22_1_V_we0.read();
    } else {
        wt_buff2_22_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_2_V_address0 = grp_load_weight_fu_1645_wt_buff_22_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_2_V_address0 = grp_compute6_fu_1405_wt_buff_22_2_V_address0.read();
    } else {
        wt_buff2_22_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_22_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_2_V_ce0 = grp_compute6_fu_1405_wt_buff_22_2_V_ce0.read();
    } else {
        wt_buff2_22_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_2_V_we0 = grp_load_weight_fu_1645_wt_buff_22_2_V_we0.read();
    } else {
        wt_buff2_22_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_3_V_address0 = grp_load_weight_fu_1645_wt_buff_22_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_3_V_address0 = grp_compute6_fu_1405_wt_buff_22_3_V_address0.read();
    } else {
        wt_buff2_22_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_22_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_22_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_22_3_V_ce0 = grp_compute6_fu_1405_wt_buff_22_3_V_ce0.read();
    } else {
        wt_buff2_22_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_22_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_22_3_V_we0 = grp_load_weight_fu_1645_wt_buff_22_3_V_we0.read();
    } else {
        wt_buff2_22_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_0_V_address0 = grp_load_weight_fu_1645_wt_buff_23_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_0_V_address0 = grp_compute6_fu_1405_wt_buff_23_0_V_address0.read();
    } else {
        wt_buff2_23_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_23_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_0_V_ce0 = grp_compute6_fu_1405_wt_buff_23_0_V_ce0.read();
    } else {
        wt_buff2_23_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_0_V_we0 = grp_load_weight_fu_1645_wt_buff_23_0_V_we0.read();
    } else {
        wt_buff2_23_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_1_V_address0 = grp_load_weight_fu_1645_wt_buff_23_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_1_V_address0 = grp_compute6_fu_1405_wt_buff_23_1_V_address0.read();
    } else {
        wt_buff2_23_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_23_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_1_V_ce0 = grp_compute6_fu_1405_wt_buff_23_1_V_ce0.read();
    } else {
        wt_buff2_23_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_1_V_we0 = grp_load_weight_fu_1645_wt_buff_23_1_V_we0.read();
    } else {
        wt_buff2_23_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_2_V_address0 = grp_load_weight_fu_1645_wt_buff_23_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_2_V_address0 = grp_compute6_fu_1405_wt_buff_23_2_V_address0.read();
    } else {
        wt_buff2_23_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_23_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_2_V_ce0 = grp_compute6_fu_1405_wt_buff_23_2_V_ce0.read();
    } else {
        wt_buff2_23_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_2_V_we0 = grp_load_weight_fu_1645_wt_buff_23_2_V_we0.read();
    } else {
        wt_buff2_23_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_3_V_address0 = grp_load_weight_fu_1645_wt_buff_23_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_3_V_address0 = grp_compute6_fu_1405_wt_buff_23_3_V_address0.read();
    } else {
        wt_buff2_23_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_23_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_23_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_23_3_V_ce0 = grp_compute6_fu_1405_wt_buff_23_3_V_ce0.read();
    } else {
        wt_buff2_23_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_23_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_23_3_V_we0 = grp_load_weight_fu_1645_wt_buff_23_3_V_we0.read();
    } else {
        wt_buff2_23_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_0_V_address0 = grp_load_weight_fu_1645_wt_buff_24_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_0_V_address0 = grp_compute6_fu_1405_wt_buff_24_0_V_address0.read();
    } else {
        wt_buff2_24_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_24_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_0_V_ce0 = grp_compute6_fu_1405_wt_buff_24_0_V_ce0.read();
    } else {
        wt_buff2_24_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_0_V_we0 = grp_load_weight_fu_1645_wt_buff_24_0_V_we0.read();
    } else {
        wt_buff2_24_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_1_V_address0 = grp_load_weight_fu_1645_wt_buff_24_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_1_V_address0 = grp_compute6_fu_1405_wt_buff_24_1_V_address0.read();
    } else {
        wt_buff2_24_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_24_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_1_V_ce0 = grp_compute6_fu_1405_wt_buff_24_1_V_ce0.read();
    } else {
        wt_buff2_24_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_1_V_we0 = grp_load_weight_fu_1645_wt_buff_24_1_V_we0.read();
    } else {
        wt_buff2_24_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_2_V_address0 = grp_load_weight_fu_1645_wt_buff_24_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_2_V_address0 = grp_compute6_fu_1405_wt_buff_24_2_V_address0.read();
    } else {
        wt_buff2_24_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_24_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_2_V_ce0 = grp_compute6_fu_1405_wt_buff_24_2_V_ce0.read();
    } else {
        wt_buff2_24_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_2_V_we0 = grp_load_weight_fu_1645_wt_buff_24_2_V_we0.read();
    } else {
        wt_buff2_24_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_3_V_address0 = grp_load_weight_fu_1645_wt_buff_24_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_3_V_address0 = grp_compute6_fu_1405_wt_buff_24_3_V_address0.read();
    } else {
        wt_buff2_24_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_24_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_24_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_24_3_V_ce0 = grp_compute6_fu_1405_wt_buff_24_3_V_ce0.read();
    } else {
        wt_buff2_24_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_24_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_24_3_V_we0 = grp_load_weight_fu_1645_wt_buff_24_3_V_we0.read();
    } else {
        wt_buff2_24_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_0_V_address0 = grp_load_weight_fu_1645_wt_buff_25_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_0_V_address0 = grp_compute6_fu_1405_wt_buff_25_0_V_address0.read();
    } else {
        wt_buff2_25_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_25_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_0_V_ce0 = grp_compute6_fu_1405_wt_buff_25_0_V_ce0.read();
    } else {
        wt_buff2_25_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_0_V_we0 = grp_load_weight_fu_1645_wt_buff_25_0_V_we0.read();
    } else {
        wt_buff2_25_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_1_V_address0 = grp_load_weight_fu_1645_wt_buff_25_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_1_V_address0 = grp_compute6_fu_1405_wt_buff_25_1_V_address0.read();
    } else {
        wt_buff2_25_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_25_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_1_V_ce0 = grp_compute6_fu_1405_wt_buff_25_1_V_ce0.read();
    } else {
        wt_buff2_25_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_1_V_we0 = grp_load_weight_fu_1645_wt_buff_25_1_V_we0.read();
    } else {
        wt_buff2_25_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_2_V_address0 = grp_load_weight_fu_1645_wt_buff_25_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_2_V_address0 = grp_compute6_fu_1405_wt_buff_25_2_V_address0.read();
    } else {
        wt_buff2_25_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_25_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_2_V_ce0 = grp_compute6_fu_1405_wt_buff_25_2_V_ce0.read();
    } else {
        wt_buff2_25_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_2_V_we0 = grp_load_weight_fu_1645_wt_buff_25_2_V_we0.read();
    } else {
        wt_buff2_25_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_3_V_address0 = grp_load_weight_fu_1645_wt_buff_25_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_3_V_address0 = grp_compute6_fu_1405_wt_buff_25_3_V_address0.read();
    } else {
        wt_buff2_25_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_25_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_25_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_25_3_V_ce0 = grp_compute6_fu_1405_wt_buff_25_3_V_ce0.read();
    } else {
        wt_buff2_25_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_25_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_25_3_V_we0 = grp_load_weight_fu_1645_wt_buff_25_3_V_we0.read();
    } else {
        wt_buff2_25_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_0_V_address0 = grp_load_weight_fu_1645_wt_buff_26_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_0_V_address0 = grp_compute6_fu_1405_wt_buff_26_0_V_address0.read();
    } else {
        wt_buff2_26_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_26_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_0_V_ce0 = grp_compute6_fu_1405_wt_buff_26_0_V_ce0.read();
    } else {
        wt_buff2_26_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_0_V_we0 = grp_load_weight_fu_1645_wt_buff_26_0_V_we0.read();
    } else {
        wt_buff2_26_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_1_V_address0 = grp_load_weight_fu_1645_wt_buff_26_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_1_V_address0 = grp_compute6_fu_1405_wt_buff_26_1_V_address0.read();
    } else {
        wt_buff2_26_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_26_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_1_V_ce0 = grp_compute6_fu_1405_wt_buff_26_1_V_ce0.read();
    } else {
        wt_buff2_26_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_1_V_we0 = grp_load_weight_fu_1645_wt_buff_26_1_V_we0.read();
    } else {
        wt_buff2_26_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_2_V_address0 = grp_load_weight_fu_1645_wt_buff_26_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_2_V_address0 = grp_compute6_fu_1405_wt_buff_26_2_V_address0.read();
    } else {
        wt_buff2_26_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_26_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_2_V_ce0 = grp_compute6_fu_1405_wt_buff_26_2_V_ce0.read();
    } else {
        wt_buff2_26_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_2_V_we0 = grp_load_weight_fu_1645_wt_buff_26_2_V_we0.read();
    } else {
        wt_buff2_26_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_3_V_address0 = grp_load_weight_fu_1645_wt_buff_26_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_3_V_address0 = grp_compute6_fu_1405_wt_buff_26_3_V_address0.read();
    } else {
        wt_buff2_26_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_26_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_26_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_26_3_V_ce0 = grp_compute6_fu_1405_wt_buff_26_3_V_ce0.read();
    } else {
        wt_buff2_26_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_26_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_26_3_V_we0 = grp_load_weight_fu_1645_wt_buff_26_3_V_we0.read();
    } else {
        wt_buff2_26_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_0_V_address0 = grp_load_weight_fu_1645_wt_buff_27_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_0_V_address0 = grp_compute6_fu_1405_wt_buff_27_0_V_address0.read();
    } else {
        wt_buff2_27_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_27_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_0_V_ce0 = grp_compute6_fu_1405_wt_buff_27_0_V_ce0.read();
    } else {
        wt_buff2_27_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_0_V_we0 = grp_load_weight_fu_1645_wt_buff_27_0_V_we0.read();
    } else {
        wt_buff2_27_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_1_V_address0 = grp_load_weight_fu_1645_wt_buff_27_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_1_V_address0 = grp_compute6_fu_1405_wt_buff_27_1_V_address0.read();
    } else {
        wt_buff2_27_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_27_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_1_V_ce0 = grp_compute6_fu_1405_wt_buff_27_1_V_ce0.read();
    } else {
        wt_buff2_27_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_1_V_we0 = grp_load_weight_fu_1645_wt_buff_27_1_V_we0.read();
    } else {
        wt_buff2_27_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_2_V_address0 = grp_load_weight_fu_1645_wt_buff_27_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_2_V_address0 = grp_compute6_fu_1405_wt_buff_27_2_V_address0.read();
    } else {
        wt_buff2_27_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_27_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_2_V_ce0 = grp_compute6_fu_1405_wt_buff_27_2_V_ce0.read();
    } else {
        wt_buff2_27_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_2_V_we0 = grp_load_weight_fu_1645_wt_buff_27_2_V_we0.read();
    } else {
        wt_buff2_27_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_3_V_address0 = grp_load_weight_fu_1645_wt_buff_27_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_3_V_address0 = grp_compute6_fu_1405_wt_buff_27_3_V_address0.read();
    } else {
        wt_buff2_27_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_27_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_27_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_27_3_V_ce0 = grp_compute6_fu_1405_wt_buff_27_3_V_ce0.read();
    } else {
        wt_buff2_27_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_27_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_27_3_V_we0 = grp_load_weight_fu_1645_wt_buff_27_3_V_we0.read();
    } else {
        wt_buff2_27_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_0_V_address0 = grp_load_weight_fu_1645_wt_buff_28_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_0_V_address0 = grp_compute6_fu_1405_wt_buff_28_0_V_address0.read();
    } else {
        wt_buff2_28_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_28_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_0_V_ce0 = grp_compute6_fu_1405_wt_buff_28_0_V_ce0.read();
    } else {
        wt_buff2_28_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_0_V_we0 = grp_load_weight_fu_1645_wt_buff_28_0_V_we0.read();
    } else {
        wt_buff2_28_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_1_V_address0 = grp_load_weight_fu_1645_wt_buff_28_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_1_V_address0 = grp_compute6_fu_1405_wt_buff_28_1_V_address0.read();
    } else {
        wt_buff2_28_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_28_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_1_V_ce0 = grp_compute6_fu_1405_wt_buff_28_1_V_ce0.read();
    } else {
        wt_buff2_28_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_1_V_we0 = grp_load_weight_fu_1645_wt_buff_28_1_V_we0.read();
    } else {
        wt_buff2_28_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_2_V_address0 = grp_load_weight_fu_1645_wt_buff_28_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_2_V_address0 = grp_compute6_fu_1405_wt_buff_28_2_V_address0.read();
    } else {
        wt_buff2_28_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_28_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_2_V_ce0 = grp_compute6_fu_1405_wt_buff_28_2_V_ce0.read();
    } else {
        wt_buff2_28_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_2_V_we0 = grp_load_weight_fu_1645_wt_buff_28_2_V_we0.read();
    } else {
        wt_buff2_28_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_3_V_address0 = grp_load_weight_fu_1645_wt_buff_28_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_3_V_address0 = grp_compute6_fu_1405_wt_buff_28_3_V_address0.read();
    } else {
        wt_buff2_28_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_28_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_28_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_28_3_V_ce0 = grp_compute6_fu_1405_wt_buff_28_3_V_ce0.read();
    } else {
        wt_buff2_28_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_28_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_28_3_V_we0 = grp_load_weight_fu_1645_wt_buff_28_3_V_we0.read();
    } else {
        wt_buff2_28_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_0_V_address0 = grp_load_weight_fu_1645_wt_buff_29_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_0_V_address0 = grp_compute6_fu_1405_wt_buff_29_0_V_address0.read();
    } else {
        wt_buff2_29_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_29_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_0_V_ce0 = grp_compute6_fu_1405_wt_buff_29_0_V_ce0.read();
    } else {
        wt_buff2_29_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_0_V_we0 = grp_load_weight_fu_1645_wt_buff_29_0_V_we0.read();
    } else {
        wt_buff2_29_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_1_V_address0 = grp_load_weight_fu_1645_wt_buff_29_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_1_V_address0 = grp_compute6_fu_1405_wt_buff_29_1_V_address0.read();
    } else {
        wt_buff2_29_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_29_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_1_V_ce0 = grp_compute6_fu_1405_wt_buff_29_1_V_ce0.read();
    } else {
        wt_buff2_29_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_1_V_we0 = grp_load_weight_fu_1645_wt_buff_29_1_V_we0.read();
    } else {
        wt_buff2_29_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_2_V_address0 = grp_load_weight_fu_1645_wt_buff_29_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_2_V_address0 = grp_compute6_fu_1405_wt_buff_29_2_V_address0.read();
    } else {
        wt_buff2_29_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_29_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_2_V_ce0 = grp_compute6_fu_1405_wt_buff_29_2_V_ce0.read();
    } else {
        wt_buff2_29_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_2_V_we0 = grp_load_weight_fu_1645_wt_buff_29_2_V_we0.read();
    } else {
        wt_buff2_29_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_3_V_address0 = grp_load_weight_fu_1645_wt_buff_29_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_3_V_address0 = grp_compute6_fu_1405_wt_buff_29_3_V_address0.read();
    } else {
        wt_buff2_29_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_29_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_29_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_29_3_V_ce0 = grp_compute6_fu_1405_wt_buff_29_3_V_ce0.read();
    } else {
        wt_buff2_29_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_29_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_29_3_V_we0 = grp_load_weight_fu_1645_wt_buff_29_3_V_we0.read();
    } else {
        wt_buff2_29_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_0_V_address0 = grp_load_weight_fu_1645_wt_buff_2_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_0_V_address0 = grp_compute6_fu_1405_wt_buff_2_0_V_address0.read();
    } else {
        wt_buff2_2_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_0_V_ce0 = grp_compute6_fu_1405_wt_buff_2_0_V_ce0.read();
    } else {
        wt_buff2_2_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_0_V_we0 = grp_load_weight_fu_1645_wt_buff_2_0_V_we0.read();
    } else {
        wt_buff2_2_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_1_V_address0 = grp_load_weight_fu_1645_wt_buff_2_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_1_V_address0 = grp_compute6_fu_1405_wt_buff_2_1_V_address0.read();
    } else {
        wt_buff2_2_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_1_V_ce0 = grp_compute6_fu_1405_wt_buff_2_1_V_ce0.read();
    } else {
        wt_buff2_2_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_1_V_we0 = grp_load_weight_fu_1645_wt_buff_2_1_V_we0.read();
    } else {
        wt_buff2_2_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_2_V_address0 = grp_load_weight_fu_1645_wt_buff_2_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_2_V_address0 = grp_compute6_fu_1405_wt_buff_2_2_V_address0.read();
    } else {
        wt_buff2_2_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_2_V_ce0 = grp_compute6_fu_1405_wt_buff_2_2_V_ce0.read();
    } else {
        wt_buff2_2_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_2_V_we0 = grp_load_weight_fu_1645_wt_buff_2_2_V_we0.read();
    } else {
        wt_buff2_2_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_3_V_address0 = grp_load_weight_fu_1645_wt_buff_2_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_3_V_address0 = grp_compute6_fu_1405_wt_buff_2_3_V_address0.read();
    } else {
        wt_buff2_2_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_2_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_2_3_V_ce0 = grp_compute6_fu_1405_wt_buff_2_3_V_ce0.read();
    } else {
        wt_buff2_2_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_2_3_V_we0 = grp_load_weight_fu_1645_wt_buff_2_3_V_we0.read();
    } else {
        wt_buff2_2_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_0_V_address0 = grp_load_weight_fu_1645_wt_buff_30_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_0_V_address0 = grp_compute6_fu_1405_wt_buff_30_0_V_address0.read();
    } else {
        wt_buff2_30_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_30_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_0_V_ce0 = grp_compute6_fu_1405_wt_buff_30_0_V_ce0.read();
    } else {
        wt_buff2_30_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_0_V_we0 = grp_load_weight_fu_1645_wt_buff_30_0_V_we0.read();
    } else {
        wt_buff2_30_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_1_V_address0 = grp_load_weight_fu_1645_wt_buff_30_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_1_V_address0 = grp_compute6_fu_1405_wt_buff_30_1_V_address0.read();
    } else {
        wt_buff2_30_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_30_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_1_V_ce0 = grp_compute6_fu_1405_wt_buff_30_1_V_ce0.read();
    } else {
        wt_buff2_30_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_1_V_we0 = grp_load_weight_fu_1645_wt_buff_30_1_V_we0.read();
    } else {
        wt_buff2_30_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_2_V_address0 = grp_load_weight_fu_1645_wt_buff_30_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_2_V_address0 = grp_compute6_fu_1405_wt_buff_30_2_V_address0.read();
    } else {
        wt_buff2_30_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_30_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_2_V_ce0 = grp_compute6_fu_1405_wt_buff_30_2_V_ce0.read();
    } else {
        wt_buff2_30_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_2_V_we0 = grp_load_weight_fu_1645_wt_buff_30_2_V_we0.read();
    } else {
        wt_buff2_30_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_3_V_address0 = grp_load_weight_fu_1645_wt_buff_30_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_3_V_address0 = grp_compute6_fu_1405_wt_buff_30_3_V_address0.read();
    } else {
        wt_buff2_30_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_30_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_30_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_30_3_V_ce0 = grp_compute6_fu_1405_wt_buff_30_3_V_ce0.read();
    } else {
        wt_buff2_30_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_30_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_30_3_V_we0 = grp_load_weight_fu_1645_wt_buff_30_3_V_we0.read();
    } else {
        wt_buff2_30_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_0_V_address0 = grp_load_weight_fu_1645_wt_buff_31_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_0_V_address0 = grp_compute6_fu_1405_wt_buff_31_0_V_address0.read();
    } else {
        wt_buff2_31_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_31_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_0_V_ce0 = grp_compute6_fu_1405_wt_buff_31_0_V_ce0.read();
    } else {
        wt_buff2_31_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_0_V_we0 = grp_load_weight_fu_1645_wt_buff_31_0_V_we0.read();
    } else {
        wt_buff2_31_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_1_V_address0 = grp_load_weight_fu_1645_wt_buff_31_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_1_V_address0 = grp_compute6_fu_1405_wt_buff_31_1_V_address0.read();
    } else {
        wt_buff2_31_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_31_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_1_V_ce0 = grp_compute6_fu_1405_wt_buff_31_1_V_ce0.read();
    } else {
        wt_buff2_31_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_1_V_we0 = grp_load_weight_fu_1645_wt_buff_31_1_V_we0.read();
    } else {
        wt_buff2_31_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_2_V_address0 = grp_load_weight_fu_1645_wt_buff_31_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_2_V_address0 = grp_compute6_fu_1405_wt_buff_31_2_V_address0.read();
    } else {
        wt_buff2_31_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_31_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_2_V_ce0 = grp_compute6_fu_1405_wt_buff_31_2_V_ce0.read();
    } else {
        wt_buff2_31_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_2_V_we0 = grp_load_weight_fu_1645_wt_buff_31_2_V_we0.read();
    } else {
        wt_buff2_31_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_3_V_address0 = grp_load_weight_fu_1645_wt_buff_31_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_3_V_address0 = grp_compute6_fu_1405_wt_buff_31_3_V_address0.read();
    } else {
        wt_buff2_31_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_31_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_31_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_31_3_V_ce0 = grp_compute6_fu_1405_wt_buff_31_3_V_ce0.read();
    } else {
        wt_buff2_31_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_31_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_31_3_V_we0 = grp_load_weight_fu_1645_wt_buff_31_3_V_we0.read();
    } else {
        wt_buff2_31_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_0_V_address0 = grp_load_weight_fu_1645_wt_buff_3_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_0_V_address0 = grp_compute6_fu_1405_wt_buff_3_0_V_address0.read();
    } else {
        wt_buff2_3_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_0_V_ce0 = grp_compute6_fu_1405_wt_buff_3_0_V_ce0.read();
    } else {
        wt_buff2_3_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_0_V_we0 = grp_load_weight_fu_1645_wt_buff_3_0_V_we0.read();
    } else {
        wt_buff2_3_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_1_V_address0 = grp_load_weight_fu_1645_wt_buff_3_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_1_V_address0 = grp_compute6_fu_1405_wt_buff_3_1_V_address0.read();
    } else {
        wt_buff2_3_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_1_V_ce0 = grp_compute6_fu_1405_wt_buff_3_1_V_ce0.read();
    } else {
        wt_buff2_3_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_1_V_we0 = grp_load_weight_fu_1645_wt_buff_3_1_V_we0.read();
    } else {
        wt_buff2_3_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_2_V_address0 = grp_load_weight_fu_1645_wt_buff_3_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_2_V_address0 = grp_compute6_fu_1405_wt_buff_3_2_V_address0.read();
    } else {
        wt_buff2_3_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_2_V_ce0 = grp_compute6_fu_1405_wt_buff_3_2_V_ce0.read();
    } else {
        wt_buff2_3_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_2_V_we0 = grp_load_weight_fu_1645_wt_buff_3_2_V_we0.read();
    } else {
        wt_buff2_3_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_3_V_address0 = grp_load_weight_fu_1645_wt_buff_3_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_3_V_address0 = grp_compute6_fu_1405_wt_buff_3_3_V_address0.read();
    } else {
        wt_buff2_3_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_3_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_3_3_V_ce0 = grp_compute6_fu_1405_wt_buff_3_3_V_ce0.read();
    } else {
        wt_buff2_3_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_3_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_3_3_V_we0 = grp_load_weight_fu_1645_wt_buff_3_3_V_we0.read();
    } else {
        wt_buff2_3_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_0_V_address0 = grp_load_weight_fu_1645_wt_buff_4_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_0_V_address0 = grp_compute6_fu_1405_wt_buff_4_0_V_address0.read();
    } else {
        wt_buff2_4_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_0_V_ce0 = grp_compute6_fu_1405_wt_buff_4_0_V_ce0.read();
    } else {
        wt_buff2_4_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_0_V_we0 = grp_load_weight_fu_1645_wt_buff_4_0_V_we0.read();
    } else {
        wt_buff2_4_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_1_V_address0 = grp_load_weight_fu_1645_wt_buff_4_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_1_V_address0 = grp_compute6_fu_1405_wt_buff_4_1_V_address0.read();
    } else {
        wt_buff2_4_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_1_V_ce0 = grp_compute6_fu_1405_wt_buff_4_1_V_ce0.read();
    } else {
        wt_buff2_4_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_1_V_we0 = grp_load_weight_fu_1645_wt_buff_4_1_V_we0.read();
    } else {
        wt_buff2_4_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_2_V_address0 = grp_load_weight_fu_1645_wt_buff_4_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_2_V_address0 = grp_compute6_fu_1405_wt_buff_4_2_V_address0.read();
    } else {
        wt_buff2_4_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_2_V_ce0 = grp_compute6_fu_1405_wt_buff_4_2_V_ce0.read();
    } else {
        wt_buff2_4_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_2_V_we0 = grp_load_weight_fu_1645_wt_buff_4_2_V_we0.read();
    } else {
        wt_buff2_4_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_3_V_address0 = grp_load_weight_fu_1645_wt_buff_4_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_3_V_address0 = grp_compute6_fu_1405_wt_buff_4_3_V_address0.read();
    } else {
        wt_buff2_4_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_4_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_4_3_V_ce0 = grp_compute6_fu_1405_wt_buff_4_3_V_ce0.read();
    } else {
        wt_buff2_4_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_4_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_4_3_V_we0 = grp_load_weight_fu_1645_wt_buff_4_3_V_we0.read();
    } else {
        wt_buff2_4_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_0_V_address0 = grp_load_weight_fu_1645_wt_buff_5_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_0_V_address0 = grp_compute6_fu_1405_wt_buff_5_0_V_address0.read();
    } else {
        wt_buff2_5_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_0_V_ce0 = grp_compute6_fu_1405_wt_buff_5_0_V_ce0.read();
    } else {
        wt_buff2_5_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_0_V_we0 = grp_load_weight_fu_1645_wt_buff_5_0_V_we0.read();
    } else {
        wt_buff2_5_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_1_V_address0 = grp_load_weight_fu_1645_wt_buff_5_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_1_V_address0 = grp_compute6_fu_1405_wt_buff_5_1_V_address0.read();
    } else {
        wt_buff2_5_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_1_V_ce0 = grp_compute6_fu_1405_wt_buff_5_1_V_ce0.read();
    } else {
        wt_buff2_5_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_1_V_we0 = grp_load_weight_fu_1645_wt_buff_5_1_V_we0.read();
    } else {
        wt_buff2_5_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_2_V_address0 = grp_load_weight_fu_1645_wt_buff_5_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_2_V_address0 = grp_compute6_fu_1405_wt_buff_5_2_V_address0.read();
    } else {
        wt_buff2_5_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_2_V_ce0 = grp_compute6_fu_1405_wt_buff_5_2_V_ce0.read();
    } else {
        wt_buff2_5_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_2_V_we0 = grp_load_weight_fu_1645_wt_buff_5_2_V_we0.read();
    } else {
        wt_buff2_5_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_3_V_address0 = grp_load_weight_fu_1645_wt_buff_5_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_3_V_address0 = grp_compute6_fu_1405_wt_buff_5_3_V_address0.read();
    } else {
        wt_buff2_5_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_5_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_5_3_V_ce0 = grp_compute6_fu_1405_wt_buff_5_3_V_ce0.read();
    } else {
        wt_buff2_5_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_5_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_5_3_V_we0 = grp_load_weight_fu_1645_wt_buff_5_3_V_we0.read();
    } else {
        wt_buff2_5_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_0_V_address0 = grp_load_weight_fu_1645_wt_buff_6_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_0_V_address0 = grp_compute6_fu_1405_wt_buff_6_0_V_address0.read();
    } else {
        wt_buff2_6_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_0_V_ce0 = grp_compute6_fu_1405_wt_buff_6_0_V_ce0.read();
    } else {
        wt_buff2_6_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_0_V_we0 = grp_load_weight_fu_1645_wt_buff_6_0_V_we0.read();
    } else {
        wt_buff2_6_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_1_V_address0 = grp_load_weight_fu_1645_wt_buff_6_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_1_V_address0 = grp_compute6_fu_1405_wt_buff_6_1_V_address0.read();
    } else {
        wt_buff2_6_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_1_V_ce0 = grp_compute6_fu_1405_wt_buff_6_1_V_ce0.read();
    } else {
        wt_buff2_6_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_1_V_we0 = grp_load_weight_fu_1645_wt_buff_6_1_V_we0.read();
    } else {
        wt_buff2_6_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_2_V_address0 = grp_load_weight_fu_1645_wt_buff_6_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_2_V_address0 = grp_compute6_fu_1405_wt_buff_6_2_V_address0.read();
    } else {
        wt_buff2_6_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_2_V_ce0 = grp_compute6_fu_1405_wt_buff_6_2_V_ce0.read();
    } else {
        wt_buff2_6_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_2_V_we0 = grp_load_weight_fu_1645_wt_buff_6_2_V_we0.read();
    } else {
        wt_buff2_6_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_3_V_address0 = grp_load_weight_fu_1645_wt_buff_6_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_3_V_address0 = grp_compute6_fu_1405_wt_buff_6_3_V_address0.read();
    } else {
        wt_buff2_6_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_6_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_6_3_V_ce0 = grp_compute6_fu_1405_wt_buff_6_3_V_ce0.read();
    } else {
        wt_buff2_6_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_6_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_6_3_V_we0 = grp_load_weight_fu_1645_wt_buff_6_3_V_we0.read();
    } else {
        wt_buff2_6_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_0_V_address0 = grp_load_weight_fu_1645_wt_buff_7_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_0_V_address0 = grp_compute6_fu_1405_wt_buff_7_0_V_address0.read();
    } else {
        wt_buff2_7_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_0_V_ce0 = grp_compute6_fu_1405_wt_buff_7_0_V_ce0.read();
    } else {
        wt_buff2_7_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_0_V_we0 = grp_load_weight_fu_1645_wt_buff_7_0_V_we0.read();
    } else {
        wt_buff2_7_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_1_V_address0 = grp_load_weight_fu_1645_wt_buff_7_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_1_V_address0 = grp_compute6_fu_1405_wt_buff_7_1_V_address0.read();
    } else {
        wt_buff2_7_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_1_V_ce0 = grp_compute6_fu_1405_wt_buff_7_1_V_ce0.read();
    } else {
        wt_buff2_7_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_1_V_we0 = grp_load_weight_fu_1645_wt_buff_7_1_V_we0.read();
    } else {
        wt_buff2_7_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_2_V_address0 = grp_load_weight_fu_1645_wt_buff_7_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_2_V_address0 = grp_compute6_fu_1405_wt_buff_7_2_V_address0.read();
    } else {
        wt_buff2_7_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_2_V_ce0 = grp_compute6_fu_1405_wt_buff_7_2_V_ce0.read();
    } else {
        wt_buff2_7_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_2_V_we0 = grp_load_weight_fu_1645_wt_buff_7_2_V_we0.read();
    } else {
        wt_buff2_7_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_3_V_address0 = grp_load_weight_fu_1645_wt_buff_7_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_3_V_address0 = grp_compute6_fu_1405_wt_buff_7_3_V_address0.read();
    } else {
        wt_buff2_7_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_7_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_7_3_V_ce0 = grp_compute6_fu_1405_wt_buff_7_3_V_ce0.read();
    } else {
        wt_buff2_7_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_7_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_7_3_V_we0 = grp_load_weight_fu_1645_wt_buff_7_3_V_we0.read();
    } else {
        wt_buff2_7_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_0_V_address0 = grp_load_weight_fu_1645_wt_buff_8_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_0_V_address0 = grp_compute6_fu_1405_wt_buff_8_0_V_address0.read();
    } else {
        wt_buff2_8_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_8_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_0_V_ce0 = grp_compute6_fu_1405_wt_buff_8_0_V_ce0.read();
    } else {
        wt_buff2_8_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_0_V_we0 = grp_load_weight_fu_1645_wt_buff_8_0_V_we0.read();
    } else {
        wt_buff2_8_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_1_V_address0 = grp_load_weight_fu_1645_wt_buff_8_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_1_V_address0 = grp_compute6_fu_1405_wt_buff_8_1_V_address0.read();
    } else {
        wt_buff2_8_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_8_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_1_V_ce0 = grp_compute6_fu_1405_wt_buff_8_1_V_ce0.read();
    } else {
        wt_buff2_8_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_1_V_we0 = grp_load_weight_fu_1645_wt_buff_8_1_V_we0.read();
    } else {
        wt_buff2_8_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_2_V_address0 = grp_load_weight_fu_1645_wt_buff_8_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_2_V_address0 = grp_compute6_fu_1405_wt_buff_8_2_V_address0.read();
    } else {
        wt_buff2_8_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_8_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_2_V_ce0 = grp_compute6_fu_1405_wt_buff_8_2_V_ce0.read();
    } else {
        wt_buff2_8_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_2_V_we0 = grp_load_weight_fu_1645_wt_buff_8_2_V_we0.read();
    } else {
        wt_buff2_8_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_3_V_address0 = grp_load_weight_fu_1645_wt_buff_8_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_3_V_address0 = grp_compute6_fu_1405_wt_buff_8_3_V_address0.read();
    } else {
        wt_buff2_8_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_8_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_8_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_8_3_V_ce0 = grp_compute6_fu_1405_wt_buff_8_3_V_ce0.read();
    } else {
        wt_buff2_8_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_8_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_8_3_V_we0 = grp_load_weight_fu_1645_wt_buff_8_3_V_we0.read();
    } else {
        wt_buff2_8_3_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_0_V_address0 = grp_load_weight_fu_1645_wt_buff_9_0_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_0_V_address0 = grp_compute6_fu_1405_wt_buff_9_0_V_address0.read();
    } else {
        wt_buff2_9_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_9_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_0_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_0_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_0_V_ce0 = grp_compute6_fu_1405_wt_buff_9_0_V_ce0.read();
    } else {
        wt_buff2_9_0_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_0_V_we0 = grp_load_weight_fu_1645_wt_buff_9_0_V_we0.read();
    } else {
        wt_buff2_9_0_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_1_V_address0 = grp_load_weight_fu_1645_wt_buff_9_1_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_1_V_address0 = grp_compute6_fu_1405_wt_buff_9_1_V_address0.read();
    } else {
        wt_buff2_9_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_9_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_1_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_1_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_1_V_ce0 = grp_compute6_fu_1405_wt_buff_9_1_V_ce0.read();
    } else {
        wt_buff2_9_1_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_1_V_we0 = grp_load_weight_fu_1645_wt_buff_9_1_V_we0.read();
    } else {
        wt_buff2_9_1_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_2_V_address0 = grp_load_weight_fu_1645_wt_buff_9_2_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_2_V_address0 = grp_compute6_fu_1405_wt_buff_9_2_V_address0.read();
    } else {
        wt_buff2_9_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_9_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_2_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_2_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_2_V_ce0 = grp_compute6_fu_1405_wt_buff_9_2_V_ce0.read();
    } else {
        wt_buff2_9_2_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_2_V_we0 = grp_load_weight_fu_1645_wt_buff_9_2_V_we0.read();
    } else {
        wt_buff2_9_2_V_we0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_3_V_address0 = grp_load_weight_fu_1645_wt_buff_9_3_V_address0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_3_V_address0 = grp_compute6_fu_1405_wt_buff_9_3_V_address0.read();
    } else {
        wt_buff2_9_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void compute_output::thread_wt_buff2_9_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_3_V_ce0 = grp_load_weight_fu_1645_wt_buff_9_3_V_ce0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read())) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, pingpong_0_reg_1380.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        wt_buff2_9_3_V_ce0 = grp_compute6_fu_1405_wt_buff_9_3_V_ce0.read();
    } else {
        wt_buff2_9_3_V_ce0 = ap_const_logic_0;
    }
}

void compute_output::thread_wt_buff2_9_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(pingpong_0_reg_1380.read(), ap_const_lv1_1))) {
        wt_buff2_9_3_V_we0 = grp_load_weight_fu_1645_wt_buff_9_3_V_we0.read();
    } else {
        wt_buff2_9_3_V_we0 = ap_const_logic_0;
    }
}

}

