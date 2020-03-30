/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Door.h"

/* Door/ */
void Door(
  /* openRequest/ */
  kcg_bool openRequest,
  /* closeRequest/ */
  kcg_bool closeRequest,
  outC_Door *outC)
{
  /* doorStatus/ */
  status doorStatus_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_partial;
  /* doorStatus/ */
  status _1_doorStatus_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _4_SM1_fired_partial;
  /* doorStatus/ */
  status _5_doorStatus_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _8_SM1_fired_partial;
  /* SM1:Opening:<1> */
  kcg_bool tr_1_guard_Opening_SM1;
  /* SM1: */
  _3_SSM_TR_SM1 _9_SM1_fired_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_nxt_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _11_SM1_state_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _12_SM1_fired_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_nxt_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _14_SM1_state_nxt_partial;
  /* doorStatus/ */
  status _15_doorStatus_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _16_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _18_SM1_fired_partial;
  /* SM1:Closing:<2> */
  kcg_bool tr_2_guard_Closing_SM1;
  /* SM1: */
  _3_SSM_TR_SM1 _19_SM1_fired_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_nxt_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _21_SM1_state_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _22_SM1_fired_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_nxt_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _24_SM1_state_nxt_partial;
  /* doorStatus/ */
  status _25_doorStatus_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _28_SM1_fired_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:ToMove:<2> */
  kcg_bool tr_2_guard_ToMove_SM1;
  /* SM1:ToMove:<1> */
  kcg_bool tr_1_guard_ToMove_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _29_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _30_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _31_SM1_fired_strong_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _32_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _33_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _34_SM1_fired_strong_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _35_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _36_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _37_SM1_fired_strong_partial;
  /* SM1:Closing:<1> */
  kcg_bool tr_1_guard_Closing_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _38_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _39_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _40_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FullyClose_SM1 :
      _38_SM1_state_act_partial = SSM_st_FullyClose_SM1;
      outC->SM1_state_act = _38_SM1_state_act_partial;
      _40_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _40_SM1_fired_strong_partial;
      break;
    case SSM_st_Closing_SM1 :
      tr_1_guard_Closing_SM1 = openRequest;
      if (tr_1_guard_Closing_SM1) {
        _35_SM1_state_act_partial = SSM_st_Opening_SM1;
      }
      else {
        _35_SM1_state_act_partial = SSM_st_Closing_SM1;
      }
      outC->SM1_state_act = _35_SM1_state_act_partial;
      if (tr_1_guard_Closing_SM1) {
        _37_SM1_fired_strong_partial = SSM_TR_Closing_Opening_1_Closing_SM1;
      }
      else {
        _37_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _37_SM1_fired_strong_partial;
      break;
    case SSM_st_Opening_SM1 :
      _32_SM1_state_act_partial = SSM_st_Opening_SM1;
      outC->SM1_state_act = _32_SM1_state_act_partial;
      _34_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _34_SM1_fired_strong_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      _29_SM1_state_act_partial = SSM_st_FullyOpen_SM1;
      outC->SM1_state_act = _29_SM1_state_act_partial;
      _31_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _31_SM1_fired_strong_partial;
      break;
    case SSM_st_ToMove_SM1 :
      tr_2_guard_ToMove_SM1 = closeRequest & (!openRequest);
      tr_1_guard_ToMove_SM1 = openRequest;
      if (tr_1_guard_ToMove_SM1) {
        SM1_state_act_partial = SSM_st_Opening_SM1;
      }
      else if (tr_2_guard_ToMove_SM1) {
        SM1_state_act_partial = SSM_st_Closing_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_ToMove_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_ToMove_SM1) {
        SM1_fired_strong_partial = SSM_TR_ToMove_Opening_1_ToMove_SM1;
      }
      else if (tr_2_guard_ToMove_SM1) {
        SM1_fired_strong_partial = SSM_TR_ToMove_Closing_2_ToMove_SM1;
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
    case SSM_st_FullyClose_SM1 :
      _28_SM1_fired_partial = outC->SM1_fired_strong;
      _27_SM1_reset_nxt_partial = kcg_false;
      _26_SM1_state_nxt_partial = SSM_st_FullyClose_SM1;
      outC->_L12_FullyClose_SM1 = kcg_false;
      outC->_L13_FullyClose_SM1 = kcg_false;
      outC->_L11_FullyClose_SM1 = kcg_false;
      outC->_L10_FullyClose_SM1 = kcg_true;
      outC->_L14_FullyClose_SM1.opening = outC->_L12_FullyClose_SM1;
      outC->_L14_FullyClose_SM1.opened = outC->_L13_FullyClose_SM1;
      outC->_L14_FullyClose_SM1.closing = outC->_L11_FullyClose_SM1;
      outC->_L14_FullyClose_SM1.closed = outC->_L10_FullyClose_SM1;
      kcg_copy_status(&_25_doorStatus_partial, &outC->_L14_FullyClose_SM1);
      break;
    case SSM_st_Closing_SM1 :
      outC->Closing_weakb_clock_SM1 = outC->SM1_fired_strong != SSM_TR_no_trans_SM1;
      outC->_L43_Closing_SM1 = kcg_false;
      outC->_L54_Closing_SM1 = kcg_false;
      outC->_L46_Closing_SM1 = kcg_true;
      outC->_L51_Closing_SM1 = outC->_L44_Closing_SM1;
      outC->_L50_Closing_SM1 = kcg_lit_int32(0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_FullyClose_SM1 :
      _39_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _39_SM1_reset_act_partial;
      break;
    case SSM_st_Closing_SM1 :
      _36_SM1_reset_act_partial = tr_1_guard_Closing_SM1;
      outC->SM1_reset_act = _36_SM1_reset_act_partial;
      break;
    case SSM_st_Opening_SM1 :
      _33_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _33_SM1_reset_act_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      _30_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _30_SM1_reset_act_partial;
      break;
    case SSM_st_ToMove_SM1 :
      if (tr_1_guard_ToMove_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_ToMove_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_FullyClose_SM1 :
      kcg_copy_status(&outC->doorStatus, &_25_doorStatus_partial);
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_Closing_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      /* SM1:Closing:_L47= */
      if (outC->init) {
        outC->_L47_Closing_SM1 = outC->_L50_Closing_SM1;
      }
      else {
        outC->_L47_Closing_SM1 = outC->_L51_Closing_SM1;
      }
      outC->_L52_Closing_SM1 = kcg_lit_int32(1);
      outC->_L44_Closing_SM1 = outC->_L52_Closing_SM1 + outC->_L47_Closing_SM1;
      outC->_L53_Closing_SM1 = kcg_lit_int32(5);
      outC->_L45_Closing_SM1 = outC->_L53_Closing_SM1 == outC->_L44_Closing_SM1;
      outC->_L48_Closing_SM1.opening = outC->_L43_Closing_SM1;
      outC->_L48_Closing_SM1.opened = outC->_L54_Closing_SM1;
      outC->_L48_Closing_SM1.closing = outC->_L46_Closing_SM1;
      outC->_L48_Closing_SM1.closed = outC->_L45_Closing_SM1;
      kcg_copy_status(&_15_doorStatus_partial, &outC->_L48_Closing_SM1);
      /* SM1:Closing: */
      if (outC->Closing_weakb_clock_SM1) {
        _22_SM1_fired_partial = outC->SM1_fired_strong;
        _23_SM1_reset_nxt_partial = kcg_false;
        _24_SM1_state_nxt_partial = SSM_st_Closing_SM1;
        _16_SM1_state_nxt_partial = _24_SM1_state_nxt_partial;
        _17_SM1_reset_nxt_partial = _23_SM1_reset_nxt_partial;
        _18_SM1_fired_partial = _22_SM1_fired_partial;
      }
      else {
        tr_2_guard_Closing_SM1 = _15_doorStatus_partial.closed;
        if (tr_2_guard_Closing_SM1) {
          _19_SM1_fired_partial = SSM_TR_Closing_FullyClose_2_Closing_SM1;
        }
        else {
          _19_SM1_fired_partial = SSM_TR_no_trans_SM1;
        }
        _20_SM1_reset_nxt_partial = tr_2_guard_Closing_SM1;
        if (tr_2_guard_Closing_SM1) {
          _21_SM1_state_nxt_partial = SSM_st_FullyClose_SM1;
        }
        else {
          _21_SM1_state_nxt_partial = SSM_st_Closing_SM1;
        }
        _16_SM1_state_nxt_partial = _21_SM1_state_nxt_partial;
        _17_SM1_reset_nxt_partial = _20_SM1_reset_nxt_partial;
        _18_SM1_fired_partial = _19_SM1_fired_partial;
      }
      kcg_copy_status(&outC->doorStatus, &_15_doorStatus_partial);
      outC->SM1_state_nxt = _16_SM1_state_nxt_partial;
      break;
    case SSM_st_Opening_SM1 :
      outC->Opening_weakb_clock_SM1 = outC->SM1_fired_strong != SSM_TR_no_trans_SM1;
      outC->_L25_Opening_SM1 = kcg_true;
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
      outC->_L22_Opening_SM1 = kcg_false;
      outC->_L24_Opening_SM1 = kcg_false;
      outC->_L23_Opening_SM1.opening = outC->_L25_Opening_SM1;
      outC->_L23_Opening_SM1.opened = outC->_L7_Opening_SM1;
      outC->_L23_Opening_SM1.closing = outC->_L22_Opening_SM1;
      outC->_L23_Opening_SM1.closed = outC->_L24_Opening_SM1;
      kcg_copy_status(&_5_doorStatus_partial, &outC->_L23_Opening_SM1);
      /* SM1:Opening: */
      if (outC->Opening_weakb_clock_SM1) {
        _12_SM1_fired_partial = outC->SM1_fired_strong;
        _13_SM1_reset_nxt_partial = kcg_false;
        _14_SM1_state_nxt_partial = SSM_st_Opening_SM1;
        _6_SM1_state_nxt_partial = _14_SM1_state_nxt_partial;
        _7_SM1_reset_nxt_partial = _13_SM1_reset_nxt_partial;
        _8_SM1_fired_partial = _12_SM1_fired_partial;
      }
      else {
        tr_1_guard_Opening_SM1 = _5_doorStatus_partial.opened;
        if (tr_1_guard_Opening_SM1) {
          _9_SM1_fired_partial = SSM_TR_Opening_FullyOpen_1_Opening_SM1;
        }
        else {
          _9_SM1_fired_partial = SSM_TR_no_trans_SM1;
        }
        _10_SM1_reset_nxt_partial = tr_1_guard_Opening_SM1;
        if (tr_1_guard_Opening_SM1) {
          _11_SM1_state_nxt_partial = SSM_st_FullyOpen_SM1;
        }
        else {
          _11_SM1_state_nxt_partial = SSM_st_Opening_SM1;
        }
        _6_SM1_state_nxt_partial = _11_SM1_state_nxt_partial;
        _7_SM1_reset_nxt_partial = _10_SM1_reset_nxt_partial;
        _8_SM1_fired_partial = _9_SM1_fired_partial;
      }
      kcg_copy_status(&outC->doorStatus, &_5_doorStatus_partial);
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_FullyOpen_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_FullyOpen_SM1;
      outC->_L12_FullyOpen_SM1 = kcg_false;
      outC->_L13_FullyOpen_SM1 = kcg_true;
      outC->_L11_FullyOpen_SM1 = kcg_false;
      outC->_L10_FullyOpen_SM1 = kcg_false;
      outC->_L14_FullyOpen_SM1.opening = outC->_L12_FullyOpen_SM1;
      outC->_L14_FullyOpen_SM1.opened = outC->_L13_FullyOpen_SM1;
      outC->_L14_FullyOpen_SM1.closing = outC->_L11_FullyOpen_SM1;
      outC->_L14_FullyOpen_SM1.closed = outC->_L10_FullyOpen_SM1;
      kcg_copy_status(&_1_doorStatus_partial, &outC->_L14_FullyOpen_SM1);
      kcg_copy_status(&outC->doorStatus, &_1_doorStatus_partial);
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_ToMove_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_ToMove_SM1;
      outC->_L13_ToMove_SM1 = kcg_false;
      outC->_L12_ToMove_SM1 = kcg_false;
      outC->_L11_ToMove_SM1 = kcg_false;
      outC->_L7_ToMove_SM1 = kcg_false;
      outC->_L6_ToMove_SM1.opening = outC->_L7_ToMove_SM1;
      outC->_L6_ToMove_SM1.opened = outC->_L11_ToMove_SM1;
      outC->_L6_ToMove_SM1.closing = outC->_L12_ToMove_SM1;
      outC->_L6_ToMove_SM1.closed = outC->_L13_ToMove_SM1;
      kcg_copy_status(&doorStatus_partial, &outC->_L6_ToMove_SM1);
      kcg_copy_status(&outC->doorStatus, &doorStatus_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_FullyClose_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_Closing_SM1 :
      outC->SM1_reset_nxt = _17_SM1_reset_nxt_partial;
      outC->SM1_fired = _18_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_Opening_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_FullyOpen_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_ToMove_SM1 :
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
  outC->SM1_state_act = SSM_st_ToMove_SM1;
  outC->SM1_state_sel = SSM_st_ToMove_SM1;
  outC->_L14_FullyClose_SM1.opening = kcg_true;
  outC->_L14_FullyClose_SM1.opened = kcg_true;
  outC->_L14_FullyClose_SM1.closing = kcg_true;
  outC->_L14_FullyClose_SM1.closed = kcg_true;
  outC->_L13_FullyClose_SM1 = kcg_true;
  outC->_L12_FullyClose_SM1 = kcg_true;
  outC->_L11_FullyClose_SM1 = kcg_true;
  outC->_L10_FullyClose_SM1 = kcg_true;
  outC->Closing_weakb_clock_SM1 = kcg_true;
  outC->_L53_Closing_SM1 = kcg_lit_int32(0);
  outC->_L52_Closing_SM1 = kcg_lit_int32(0);
  outC->_L51_Closing_SM1 = kcg_lit_int32(0);
  outC->_L50_Closing_SM1 = kcg_lit_int32(0);
  outC->_L48_Closing_SM1.opening = kcg_true;
  outC->_L48_Closing_SM1.opened = kcg_true;
  outC->_L48_Closing_SM1.closing = kcg_true;
  outC->_L48_Closing_SM1.closed = kcg_true;
  outC->_L47_Closing_SM1 = kcg_lit_int32(0);
  outC->_L46_Closing_SM1 = kcg_true;
  outC->_L45_Closing_SM1 = kcg_true;
  outC->_L43_Closing_SM1 = kcg_true;
  outC->_L54_Closing_SM1 = kcg_true;
  outC->Opening_weakb_clock_SM1 = kcg_true;
  outC->_L4_Opening_SM1 = kcg_lit_int32(0);
  outC->_L6_Opening_SM1 = kcg_lit_int32(0);
  outC->_L7_Opening_SM1 = kcg_true;
  outC->_L9_Opening_SM1 = kcg_lit_int32(0);
  outC->_L11_Opening_SM1 = kcg_lit_int32(0);
  outC->_L12_Opening_SM1 = kcg_lit_int32(0);
  outC->_L25_Opening_SM1 = kcg_true;
  outC->_L24_Opening_SM1 = kcg_true;
  outC->_L23_Opening_SM1.opening = kcg_true;
  outC->_L23_Opening_SM1.opened = kcg_true;
  outC->_L23_Opening_SM1.closing = kcg_true;
  outC->_L23_Opening_SM1.closed = kcg_true;
  outC->_L22_Opening_SM1 = kcg_true;
  outC->_L14_FullyOpen_SM1.opening = kcg_true;
  outC->_L14_FullyOpen_SM1.opened = kcg_true;
  outC->_L14_FullyOpen_SM1.closing = kcg_true;
  outC->_L14_FullyOpen_SM1.closed = kcg_true;
  outC->_L13_FullyOpen_SM1 = kcg_true;
  outC->_L12_FullyOpen_SM1 = kcg_true;
  outC->_L11_FullyOpen_SM1 = kcg_true;
  outC->_L10_FullyOpen_SM1 = kcg_true;
  outC->_L6_ToMove_SM1.opening = kcg_true;
  outC->_L6_ToMove_SM1.opened = kcg_true;
  outC->_L6_ToMove_SM1.closing = kcg_true;
  outC->_L6_ToMove_SM1.closed = kcg_true;
  outC->_L7_ToMove_SM1 = kcg_true;
  outC->_L11_ToMove_SM1 = kcg_true;
  outC->_L12_ToMove_SM1 = kcg_true;
  outC->_L13_ToMove_SM1 = kcg_true;
  outC->_L44_Closing_SM1 = kcg_lit_int32(0);
  outC->_L5_Opening_SM1 = kcg_lit_int32(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->doorStatus.opening = kcg_true;
  outC->doorStatus.opened = kcg_true;
  outC->doorStatus.closing = kcg_true;
  outC->doorStatus.closed = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_ToMove_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void Door_reset(outC_Door *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_ToMove_SM1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Door.c
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

