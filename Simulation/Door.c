/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-12T16:20:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Door.h"

/* Door/ */
void Door(inC_Door *inC, outC_Door *outC)
{
  /* opening/ */
  kcg_bool opening_partial;
  /* closing/ */
  kcg_bool closing_partial;
  /* opened/ */
  kcg_bool opened_partial;
  /* closed/ */
  kcg_bool closed_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* opening/ */
  kcg_bool _1_opening_partial;
  /* closing/ */
  kcg_bool _2_closing_partial;
  /* opened/ */
  kcg_bool _3_opened_partial;
  /* closed/ */
  kcg_bool _4_closed_partial;
  /* SM1: */
  SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _7_SM1_fired_partial;
  /* opening/ */
  kcg_bool _8_opening_partial;
  /* closing/ */
  kcg_bool _9_closing_partial;
  /* opened/ */
  kcg_bool _10_opened_partial;
  /* closed/ */
  kcg_bool _11_closed_partial;
  /* SM1: */
  SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _14_SM1_fired_partial;
  /* SM1:Opening:<1> */
  kcg_bool tr_1_guard_Opening_SM1;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* SM1: */
  kcg_bool _16_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _17_SM1_state_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _18_SM1_fired_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _20_SM1_state_nxt_partial;
  /* opening/ */
  kcg_bool _21_opening_partial;
  /* closing/ */
  kcg_bool _22_closing_partial;
  /* opened/ */
  kcg_bool _23_opened_partial;
  /* closed/ */
  kcg_bool _24_closed_partial;
  /* SM1: */
  SSM_ST_SM1 _25_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _26_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _27_SM1_fired_partial;
  /* SM1:Closing:<2> */
  kcg_bool tr_2_guard_Closing_SM1;
  /* SM1: */
  SSM_TR_SM1 _28_SM1_fired_partial;
  /* SM1: */
  kcg_bool _29_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _30_SM1_state_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _31_SM1_fired_partial;
  /* SM1: */
  kcg_bool _32_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _33_SM1_state_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:FullyClose:<1> */
  kcg_bool tr_1_guard_FullyClose_SM1;
  /* SM1: */
  SSM_ST_SM1 _34_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _36_SM1_fired_strong_partial;
  /* SM1:FullyOpen:<1> */
  kcg_bool tr_1_guard_FullyOpen_SM1;
  /* SM1: */
  SSM_ST_SM1 _37_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _38_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _39_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _40_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _42_SM1_fired_strong_partial;
  /* SM1:Closing:<1> */
  kcg_bool tr_1_guard_Closing_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Closing_SM1 :
      tr_1_guard_Closing_SM1 = inC->openRequest;
      if (tr_1_guard_Closing_SM1) {
        _40_SM1_state_act_partial = SSM_st_Opening_SM1;
      }
      else {
        _40_SM1_state_act_partial = SSM_st_Closing_SM1;
      }
      outC->SM1_state_act = _40_SM1_state_act_partial;
      if (tr_1_guard_Closing_SM1) {
        _42_SM1_fired_strong_partial = SSM_TR_Closing_Opening_1_Closing_SM1;
      }
      else {
        _42_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _42_SM1_fired_strong_partial;
      break;
    case SSM_st_Opening_SM1 :
      _37_SM1_state_act_partial = SSM_st_Opening_SM1;
      outC->SM1_state_act = _37_SM1_state_act_partial;
      _39_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _39_SM1_fired_strong_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      tr_1_guard_FullyOpen_SM1 = inC->closeRequest;
      if (tr_1_guard_FullyOpen_SM1) {
        _34_SM1_state_act_partial = SSM_st_Closing_SM1;
      }
      else {
        _34_SM1_state_act_partial = SSM_st_FullyOpen_SM1;
      }
      outC->SM1_state_act = _34_SM1_state_act_partial;
      if (tr_1_guard_FullyOpen_SM1) {
        _36_SM1_fired_strong_partial = SSM_TR_FullyOpen_Closing_1_FullyOpen_SM1;
      }
      else {
        _36_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _36_SM1_fired_strong_partial;
      break;
    case SSM_st_FullyClose_SM1 :
      tr_1_guard_FullyClose_SM1 = inC->openRequest;
      if (tr_1_guard_FullyClose_SM1) {
        SM1_state_act_partial = SSM_st_Opening_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_FullyClose_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_FullyClose_SM1) {
        SM1_fired_strong_partial = SSM_TR_FullyClose_Opening_1_FullyClose_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Closing_SM1 :
      outC->Closing_weakb_clock_SM1 = outC->SM1_fired_strong != SSM_TR_no_trans_SM1;
      outC->_L3_Closing_SM1 = outC->_L2_Closing_SM1;
      outC->_L4_Closing_SM1 = kcg_lit_int32(0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Closing_SM1 :
      _41_SM1_reset_act_partial = tr_1_guard_Closing_SM1;
      outC->SM1_reset_act = _41_SM1_reset_act_partial;
      break;
    case SSM_st_Opening_SM1 :
      _38_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _38_SM1_reset_act_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      _35_SM1_reset_act_partial = tr_1_guard_FullyOpen_SM1;
      outC->SM1_reset_act = _35_SM1_reset_act_partial;
      break;
    case SSM_st_FullyClose_SM1 :
      SM1_reset_act_partial = tr_1_guard_FullyClose_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Closing_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      /* SM1:Closing:_L6= */
      if (outC->init) {
        outC->_L6_Closing_SM1 = outC->_L4_Closing_SM1;
      }
      else {
        outC->_L6_Closing_SM1 = outC->_L3_Closing_SM1;
      }
      outC->_L10_Closing_SM1 = kcg_lit_int32(1);
      outC->_L2_Closing_SM1 = outC->_L10_Closing_SM1 + outC->_L6_Closing_SM1;
      outC->_L1_Closing_SM1 = kcg_lit_int32(5);
      outC->_L5_Closing_SM1 = outC->_L1_Closing_SM1 == outC->_L2_Closing_SM1;
      _24_closed_partial = outC->_L5_Closing_SM1;
      /* SM1:Closing: */
      if (outC->Closing_weakb_clock_SM1) {
        _31_SM1_fired_partial = outC->SM1_fired_strong;
        _32_SM1_reset_nxt_partial = kcg_false;
        _33_SM1_state_nxt_partial = SSM_st_Closing_SM1;
        _25_SM1_state_nxt_partial = _33_SM1_state_nxt_partial;
        _26_SM1_reset_nxt_partial = _32_SM1_reset_nxt_partial;
        _27_SM1_fired_partial = _31_SM1_fired_partial;
      }
      else {
        tr_2_guard_Closing_SM1 = _24_closed_partial;
        if (tr_2_guard_Closing_SM1) {
          _28_SM1_fired_partial = SSM_TR_Closing_FullyClose_2_Closing_SM1;
        }
        else {
          _28_SM1_fired_partial = SSM_TR_no_trans_SM1;
        }
        _29_SM1_reset_nxt_partial = tr_2_guard_Closing_SM1;
        if (tr_2_guard_Closing_SM1) {
          _30_SM1_state_nxt_partial = SSM_st_FullyClose_SM1;
        }
        else {
          _30_SM1_state_nxt_partial = SSM_st_Closing_SM1;
        }
        _25_SM1_state_nxt_partial = _30_SM1_state_nxt_partial;
        _26_SM1_reset_nxt_partial = _29_SM1_reset_nxt_partial;
        _27_SM1_fired_partial = _28_SM1_fired_partial;
      }
      outC->_L7_Closing_SM1 = kcg_false;
      _23_opened_partial = outC->_L7_Closing_SM1;
      outC->_L8_Closing_SM1 = kcg_false;
      _21_opening_partial = outC->_L8_Closing_SM1;
      outC->_L9_Closing_SM1 = kcg_true;
      _22_closing_partial = outC->_L9_Closing_SM1;
      outC->opening = _21_opening_partial;
      outC->closing = _22_closing_partial;
      outC->opened = _23_opened_partial;
      outC->closed = _24_closed_partial;
      outC->SM1_state_nxt = _25_SM1_state_nxt_partial;
      break;
    case SSM_st_Opening_SM1 :
      outC->Opening_weakb_clock_SM1 = outC->SM1_fired_strong != SSM_TR_no_trans_SM1;
      outC->_L6_Opening_SM1 = outC->_L5_Opening_SM1;
      outC->_L12_Opening_SM1 = kcg_lit_int32(0);
      if (outC->SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM1:Opening:_L11= */
      if (outC->init1) {
        outC->_L11_Opening_SM1 = outC->_L12_Opening_SM1;
      }
      else {
        outC->_L11_Opening_SM1 = outC->_L6_Opening_SM1;
      }
      outC->_L4_Opening_SM1 = kcg_lit_int32(1);
      outC->_L5_Opening_SM1 = outC->_L4_Opening_SM1 + outC->_L11_Opening_SM1;
      outC->_L9_Opening_SM1 = kcg_lit_int32(5);
      outC->_L7_Opening_SM1 = outC->_L9_Opening_SM1 == outC->_L5_Opening_SM1;
      _10_opened_partial = outC->_L7_Opening_SM1;
      /* SM1:Opening: */
      if (outC->Opening_weakb_clock_SM1) {
        _18_SM1_fired_partial = outC->SM1_fired_strong;
        _19_SM1_reset_nxt_partial = kcg_false;
        _20_SM1_state_nxt_partial = SSM_st_Opening_SM1;
        _12_SM1_state_nxt_partial = _20_SM1_state_nxt_partial;
        _13_SM1_reset_nxt_partial = _19_SM1_reset_nxt_partial;
        _14_SM1_fired_partial = _18_SM1_fired_partial;
      }
      else {
        tr_1_guard_Opening_SM1 = _10_opened_partial;
        if (tr_1_guard_Opening_SM1) {
          _15_SM1_fired_partial = SSM_TR_Opening_FullyOpen_1_Opening_SM1;
        }
        else {
          _15_SM1_fired_partial = SSM_TR_no_trans_SM1;
        }
        _16_SM1_reset_nxt_partial = tr_1_guard_Opening_SM1;
        if (tr_1_guard_Opening_SM1) {
          _17_SM1_state_nxt_partial = SSM_st_FullyOpen_SM1;
        }
        else {
          _17_SM1_state_nxt_partial = SSM_st_Opening_SM1;
        }
        _12_SM1_state_nxt_partial = _17_SM1_state_nxt_partial;
        _13_SM1_reset_nxt_partial = _16_SM1_reset_nxt_partial;
        _14_SM1_fired_partial = _15_SM1_fired_partial;
      }
      outC->_L14_Opening_SM1 = kcg_false;
      _9_closing_partial = outC->_L14_Opening_SM1;
      outC->_L15_Opening_SM1 = kcg_false;
      _11_closed_partial = outC->_L15_Opening_SM1;
      outC->_L13_Opening_SM1 = kcg_true;
      _8_opening_partial = outC->_L13_Opening_SM1;
      outC->opening = _8_opening_partial;
      outC->closing = _9_closing_partial;
      outC->opened = _10_opened_partial;
      outC->closed = _11_closed_partial;
      outC->SM1_state_nxt = _12_SM1_state_nxt_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_FullyOpen_SM1;
      outC->_L4_FullyOpen_SM1 = kcg_false;
      _2_closing_partial = outC->_L4_FullyOpen_SM1;
      outC->_L3_FullyOpen_SM1 = kcg_true;
      _3_opened_partial = outC->_L3_FullyOpen_SM1;
      outC->_L1_FullyOpen_SM1 = kcg_false;
      _4_closed_partial = outC->_L1_FullyOpen_SM1;
      outC->_L2_FullyOpen_SM1 = kcg_false;
      _1_opening_partial = outC->_L2_FullyOpen_SM1;
      outC->opening = _1_opening_partial;
      outC->closing = _2_closing_partial;
      outC->opened = _3_opened_partial;
      outC->closed = _4_closed_partial;
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case SSM_st_FullyClose_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_FullyClose_SM1;
      outC->_L5_FullyClose_SM1 = kcg_false;
      opened_partial = outC->_L5_FullyClose_SM1;
      outC->_L4_FullyClose_SM1 = kcg_false;
      outC->_L3_FullyClose_SM1 = kcg_true;
      closed_partial = outC->_L3_FullyClose_SM1;
      opening_partial = outC->_L4_FullyClose_SM1;
      outC->_L2_FullyClose_SM1 = kcg_false;
      closing_partial = outC->_L2_FullyClose_SM1;
      outC->opening = opening_partial;
      outC->closing = closing_partial;
      outC->opened = opened_partial;
      outC->closed = closed_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Closing_SM1 :
      outC->SM1_reset_nxt = _26_SM1_reset_nxt_partial;
      outC->SM1_fired = _27_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_Opening_SM1 :
      outC->SM1_reset_nxt = _13_SM1_reset_nxt_partial;
      outC->SM1_fired = _14_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_FullyOpen_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case SSM_st_FullyClose_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Door_init(outC_Door *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_FullyClose_SM1;
  outC->SM1_state_sel = SSM_st_FullyClose_SM1;
  outC->Closing_weakb_clock_SM1 = kcg_true;
  outC->_L6_Closing_SM1 = kcg_lit_int32(0);
  outC->_L5_Closing_SM1 = kcg_true;
  outC->_L4_Closing_SM1 = kcg_lit_int32(0);
  outC->_L3_Closing_SM1 = kcg_lit_int32(0);
  outC->_L1_Closing_SM1 = kcg_lit_int32(0);
  outC->_L9_Closing_SM1 = kcg_true;
  outC->_L8_Closing_SM1 = kcg_true;
  outC->_L7_Closing_SM1 = kcg_true;
  outC->_L10_Closing_SM1 = kcg_lit_int32(0);
  outC->Opening_weakb_clock_SM1 = kcg_true;
  outC->_L4_Opening_SM1 = kcg_lit_int32(0);
  outC->_L6_Opening_SM1 = kcg_lit_int32(0);
  outC->_L7_Opening_SM1 = kcg_true;
  outC->_L9_Opening_SM1 = kcg_lit_int32(0);
  outC->_L11_Opening_SM1 = kcg_lit_int32(0);
  outC->_L12_Opening_SM1 = kcg_lit_int32(0);
  outC->_L13_Opening_SM1 = kcg_true;
  outC->_L14_Opening_SM1 = kcg_true;
  outC->_L15_Opening_SM1 = kcg_true;
  outC->_L4_FullyOpen_SM1 = kcg_true;
  outC->_L3_FullyOpen_SM1 = kcg_true;
  outC->_L2_FullyOpen_SM1 = kcg_true;
  outC->_L1_FullyOpen_SM1 = kcg_true;
  outC->_L4_FullyClose_SM1 = kcg_true;
  outC->_L3_FullyClose_SM1 = kcg_true;
  outC->_L2_FullyClose_SM1 = kcg_true;
  outC->_L5_FullyClose_SM1 = kcg_true;
  outC->_L2_Closing_SM1 = kcg_lit_int32(0);
  outC->_L5_Opening_SM1 = kcg_lit_int32(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->closed = kcg_true;
  outC->opened = kcg_true;
  outC->closing = kcg_true;
  outC->opening = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_FullyClose_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Door_reset(outC_Door *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_FullyClose_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Door.c
** Generation date: 2020-03-12T16:20:07
*************************************************************$ */

