/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Button.h"

/* Button/ */
void Button(
  /* clicked/ */
  kcg_bool clicked,
  /* deactivate/ */
  kcg_bool deactivate,
  outC_Button *outC)
{
  /* activated/ */
  kcg_bool activated_partial;
  /* Button: */
  SSM_ST_Button Button_state_nxt_partial;
  /* Button: */
  kcg_bool Button_reset_nxt_partial;
  /* Button: */
  SSM_TR_Button Button_fired_partial;
  /* activated/ */
  kcg_bool _1_activated_partial;
  /* Button: */
  SSM_ST_Button _2_Button_state_nxt_partial;
  /* Button: */
  kcg_bool _3_Button_reset_nxt_partial;
  /* Button: */
  SSM_TR_Button _4_Button_fired_partial;
  /* Button: */
  SSM_ST_Button Button_state_act_partial;
  /* Button: */
  kcg_bool Button_reset_act_partial;
  /* Button: */
  SSM_TR_Button Button_fired_strong_partial;
  /* Button:notPressed:<1> */
  kcg_bool tr_1_guard_notPressed_Button;
  /* Button: */
  SSM_ST_Button _5_Button_state_act_partial;
  /* Button: */
  kcg_bool _6_Button_reset_act_partial;
  /* Button: */
  SSM_TR_Button _7_Button_fired_strong_partial;
  /* Button:pressed:<1> */
  kcg_bool tr_1_guard_pressed_Button;
  /* Button: */
  kcg_bool Button_reset_sel;
  /* Button: */
  kcg_bool Button_reset_prv;

  outC->Button_state_sel = outC->Button_state_nxt;
  /* Button: */
  switch (outC->Button_state_sel) {
    case SSM_st_pressed_Button :
      tr_1_guard_pressed_Button = deactivate;
      if (tr_1_guard_pressed_Button) {
        _5_Button_state_act_partial = SSM_st_notPressed_Button;
      }
      else {
        _5_Button_state_act_partial = SSM_st_pressed_Button;
      }
      outC->Button_state_act = _5_Button_state_act_partial;
      if (tr_1_guard_pressed_Button) {
        _7_Button_fired_strong_partial = SSM_TR_pressed_notPressed_1_pressed_Button;
      }
      else {
        _7_Button_fired_strong_partial = SSM_TR_no_trans_Button;
      }
      outC->Button_fired_strong = _7_Button_fired_strong_partial;
      break;
    case SSM_st_notPressed_Button :
      tr_1_guard_notPressed_Button = clicked;
      if (tr_1_guard_notPressed_Button) {
        Button_state_act_partial = SSM_st_pressed_Button;
      }
      else {
        Button_state_act_partial = SSM_st_notPressed_Button;
      }
      outC->Button_state_act = Button_state_act_partial;
      if (tr_1_guard_notPressed_Button) {
        Button_fired_strong_partial = SSM_TR_notPressed_pressed_1_notPressed_Button;
      }
      else {
        Button_fired_strong_partial = SSM_TR_no_trans_Button;
      }
      outC->Button_fired_strong = Button_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Button: */
  switch (outC->Button_state_act) {
    case SSM_st_pressed_Button :
      _4_Button_fired_partial = outC->Button_fired_strong;
      _3_Button_reset_nxt_partial = kcg_false;
      _2_Button_state_nxt_partial = SSM_st_pressed_Button;
      outC->_L1_pressed_Button = kcg_true;
      _1_activated_partial = outC->_L1_pressed_Button;
      outC->activated = _1_activated_partial;
      outC->Button_state_nxt = _2_Button_state_nxt_partial;
      break;
    case SSM_st_notPressed_Button :
      Button_fired_partial = outC->Button_fired_strong;
      Button_reset_nxt_partial = kcg_false;
      Button_state_nxt_partial = SSM_st_notPressed_Button;
      outC->_L2_notPressed_Button = kcg_false;
      activated_partial = outC->_L2_notPressed_Button;
      outC->activated = activated_partial;
      outC->Button_state_nxt = Button_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Button_reset_sel = outC->Button_reset_nxt;
  /* Button: */
  switch (outC->Button_state_act) {
    case SSM_st_pressed_Button :
      outC->Button_reset_nxt = _3_Button_reset_nxt_partial;
      outC->Button_fired = _4_Button_fired_partial;
      break;
    case SSM_st_notPressed_Button :
      outC->Button_reset_nxt = Button_reset_nxt_partial;
      outC->Button_fired = Button_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->Button_state_sel) {
    case SSM_st_pressed_Button :
      _6_Button_reset_act_partial = tr_1_guard_pressed_Button;
      break;
    case SSM_st_notPressed_Button :
      Button_reset_act_partial = tr_1_guard_notPressed_Button;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Button_reset_prv = outC->Button_reset_act;
  /* Button: */
  switch (outC->Button_state_sel) {
    case SSM_st_pressed_Button :
      outC->Button_reset_act = _6_Button_reset_act_partial;
      break;
    case SSM_st_notPressed_Button :
      outC->Button_reset_act = Button_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Button_init(outC_Button *outC)
{
  outC->Button_fired = SSM_TR_no_trans_Button;
  outC->Button_fired_strong = SSM_TR_no_trans_Button;
  outC->Button_state_act = SSM_st_notPressed_Button;
  outC->Button_state_sel = SSM_st_notPressed_Button;
  outC->_L1_pressed_Button = kcg_true;
  outC->_L2_notPressed_Button = kcg_true;
  outC->activated = kcg_true;
  outC->Button_reset_act = kcg_false;
  outC->Button_reset_nxt = kcg_false;
  outC->Button_state_nxt = SSM_st_notPressed_Button;
}
#endif /* KCG_USER_DEFINED_INIT */


void Button_reset(outC_Button *outC)
{
  outC->Button_reset_act = kcg_false;
  outC->Button_reset_nxt = kcg_false;
  outC->Button_state_nxt = SSM_st_notPressed_Button;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Button.c
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

