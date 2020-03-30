/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bridge.h"

/* Bridge/ */
void Bridge(
  /* deployRequest/ */
  kcg_bool deployRequest,
  /* retractRequest/ */
  kcg_bool retractRequest,
  outC_Bridge *outC)
{
  /* bridgeStatus/ */
  status bridgeStatus_partial;
  /* SM2: */
  SSM_ST_SM2 SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 SM2_fired_partial;
  /* bridgeStatus/ */
  status _1_bridgeStatus_partial;
  /* SM2: */
  SSM_ST_SM2 _2_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _3_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _4_SM2_fired_partial;
  /* bridgeStatus/ */
  status _5_bridgeStatus_partial;
  /* SM2: */
  SSM_ST_SM2 _6_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _7_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _8_SM2_fired_partial;
  /* SM2:Opening:<1> */
  kcg_bool tr_1_guard_Opening_SM2;
  /* SM2: */
  SSM_TR_SM2 _9_SM2_fired_partial;
  /* SM2: */
  kcg_bool _10_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_ST_SM2 _11_SM2_state_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _12_SM2_fired_partial;
  /* SM2: */
  kcg_bool _13_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_ST_SM2 _14_SM2_state_nxt_partial;
  /* bridgeStatus/ */
  status _15_bridgeStatus_partial;
  /* SM2: */
  SSM_ST_SM2 _16_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _17_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _18_SM2_fired_partial;
  /* SM2:Closing:<2> */
  kcg_bool tr_2_guard_Closing_SM2;
  /* SM2: */
  SSM_TR_SM2 _19_SM2_fired_partial;
  /* SM2: */
  kcg_bool _20_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_ST_SM2 _21_SM2_state_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _22_SM2_fired_partial;
  /* SM2: */
  kcg_bool _23_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_ST_SM2 _24_SM2_state_nxt_partial;
  /* bridgeStatus/ */
  status _25_bridgeStatus_partial;
  /* SM2: */
  SSM_ST_SM2 _26_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _27_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _28_SM2_fired_partial;
  /* SM2: */
  SSM_ST_SM2 SM2_state_act_partial;
  /* SM2: */
  kcg_bool SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 SM2_fired_strong_partial;
  /* SM2:ToMove:<2> */
  kcg_bool tr_2_guard_ToMove_SM2;
  /* SM2:ToMove:<1> */
  kcg_bool tr_1_guard_ToMove_SM2;
  /* SM2: */
  SSM_ST_SM2 _29_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _30_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _31_SM2_fired_strong_partial;
  /* SM2: */
  SSM_ST_SM2 _32_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _33_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _34_SM2_fired_strong_partial;
  /* SM2: */
  SSM_ST_SM2 _35_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _36_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _37_SM2_fired_strong_partial;
  /* SM2:Closing:<1> */
  kcg_bool tr_1_guard_Closing_SM2;
  /* SM2: */
  SSM_ST_SM2 _38_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _39_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _40_SM2_fired_strong_partial;
  /* SM2: */
  kcg_bool SM2_reset_sel;
  /* SM2: */
  kcg_bool SM2_reset_prv;

  outC->SM2_state_sel = outC->SM2_state_nxt;
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_FullyClose_SM2 :
      _38_SM2_state_act_partial = SSM_st_FullyClose_SM2;
      outC->SM2_state_act = _38_SM2_state_act_partial;
      _40_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      outC->SM2_fired_strong = _40_SM2_fired_strong_partial;
      break;
    case SSM_st_Closing_SM2 :
      tr_1_guard_Closing_SM2 = deployRequest;
      if (tr_1_guard_Closing_SM2) {
        _35_SM2_state_act_partial = SSM_st_Opening_SM2;
      }
      else {
        _35_SM2_state_act_partial = SSM_st_Closing_SM2;
      }
      outC->SM2_state_act = _35_SM2_state_act_partial;
      if (tr_1_guard_Closing_SM2) {
        _37_SM2_fired_strong_partial = _4_SSM_TR_Closing_Opening_1_Closing_SM2;
      }
      else {
        _37_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _37_SM2_fired_strong_partial;
      break;
    case SSM_st_Opening_SM2 :
      _32_SM2_state_act_partial = SSM_st_Opening_SM2;
      outC->SM2_state_act = _32_SM2_state_act_partial;
      _34_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      outC->SM2_fired_strong = _34_SM2_fired_strong_partial;
      break;
    case SSM_st_FullyOpen_SM2 :
      _29_SM2_state_act_partial = SSM_st_FullyOpen_SM2;
      outC->SM2_state_act = _29_SM2_state_act_partial;
      _31_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      outC->SM2_fired_strong = _31_SM2_fired_strong_partial;
      break;
    case SSM_st_ToMove_SM2 :
      tr_2_guard_ToMove_SM2 = retractRequest & (!deployRequest);
      tr_1_guard_ToMove_SM2 = deployRequest;
      if (tr_1_guard_ToMove_SM2) {
        SM2_state_act_partial = SSM_st_Opening_SM2;
      }
      else if (tr_2_guard_ToMove_SM2) {
        SM2_state_act_partial = SSM_st_Closing_SM2;
      }
      else {
        SM2_state_act_partial = SSM_st_ToMove_SM2;
      }
      outC->SM2_state_act = SM2_state_act_partial;
      if (tr_1_guard_ToMove_SM2) {
        SM2_fired_strong_partial = _5_SSM_TR_ToMove_Opening_1_ToMove_SM2;
      }
      else if (tr_2_guard_ToMove_SM2) {
        SM2_fired_strong_partial = _6_SSM_TR_ToMove_Closing_2_ToMove_SM2;
      }
      else {
        SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = SM2_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_act) {
    case SSM_st_FullyClose_SM2 :
      _28_SM2_fired_partial = outC->SM2_fired_strong;
      _27_SM2_reset_nxt_partial = kcg_false;
      _26_SM2_state_nxt_partial = SSM_st_FullyClose_SM2;
      outC->_L12_FullyClose_SM2 = kcg_false;
      outC->_L13_FullyClose_SM2 = kcg_false;
      outC->_L11_FullyClose_SM2 = kcg_false;
      outC->_L10_FullyClose_SM2 = kcg_true;
      outC->_L14_FullyClose_SM2.opening = outC->_L12_FullyClose_SM2;
      outC->_L14_FullyClose_SM2.opened = outC->_L13_FullyClose_SM2;
      outC->_L14_FullyClose_SM2.closing = outC->_L11_FullyClose_SM2;
      outC->_L14_FullyClose_SM2.closed = outC->_L10_FullyClose_SM2;
      kcg_copy_status(&_25_bridgeStatus_partial, &outC->_L14_FullyClose_SM2);
      break;
    case SSM_st_Closing_SM2 :
      outC->Closing_weakb_clock_SM2 = outC->SM2_fired_strong != SSM_TR_no_trans_SM2;
      outC->_L43_Closing_SM2 = kcg_false;
      outC->_L54_Closing_SM2 = kcg_false;
      outC->_L46_Closing_SM2 = kcg_true;
      outC->_L51_Closing_SM2 = outC->_L44_Closing_SM2;
      outC->_L50_Closing_SM2 = kcg_lit_int32(0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM2_reset_prv = outC->SM2_reset_act;
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_FullyClose_SM2 :
      _39_SM2_reset_act_partial = kcg_false;
      outC->SM2_reset_act = _39_SM2_reset_act_partial;
      break;
    case SSM_st_Closing_SM2 :
      _36_SM2_reset_act_partial = tr_1_guard_Closing_SM2;
      outC->SM2_reset_act = _36_SM2_reset_act_partial;
      break;
    case SSM_st_Opening_SM2 :
      _33_SM2_reset_act_partial = kcg_false;
      outC->SM2_reset_act = _33_SM2_reset_act_partial;
      break;
    case SSM_st_FullyOpen_SM2 :
      _30_SM2_reset_act_partial = kcg_false;
      outC->SM2_reset_act = _30_SM2_reset_act_partial;
      break;
    case SSM_st_ToMove_SM2 :
      if (tr_1_guard_ToMove_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else {
        SM2_reset_act_partial = tr_2_guard_ToMove_SM2;
      }
      outC->SM2_reset_act = SM2_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_FullyClose_SM2 :
      kcg_copy_status(&outC->bridgeStatus, &_25_bridgeStatus_partial);
      outC->SM2_state_nxt = _26_SM2_state_nxt_partial;
      break;
    case SSM_st_Closing_SM2 :
      if (outC->SM2_reset_act) {
        outC->init = kcg_true;
      }
      /* SM2:Closing:_L47= */
      if (outC->init) {
        outC->_L47_Closing_SM2 = outC->_L50_Closing_SM2;
      }
      else {
        outC->_L47_Closing_SM2 = outC->_L51_Closing_SM2;
      }
      outC->_L52_Closing_SM2 = kcg_lit_int32(1);
      outC->_L44_Closing_SM2 = outC->_L52_Closing_SM2 + outC->_L47_Closing_SM2;
      outC->_L53_Closing_SM2 = kcg_lit_int32(5);
      outC->_L45_Closing_SM2 = outC->_L53_Closing_SM2 == outC->_L44_Closing_SM2;
      outC->_L48_Closing_SM2.opening = outC->_L43_Closing_SM2;
      outC->_L48_Closing_SM2.opened = outC->_L54_Closing_SM2;
      outC->_L48_Closing_SM2.closing = outC->_L46_Closing_SM2;
      outC->_L48_Closing_SM2.closed = outC->_L45_Closing_SM2;
      kcg_copy_status(&_15_bridgeStatus_partial, &outC->_L48_Closing_SM2);
      /* SM2:Closing: */
      if (outC->Closing_weakb_clock_SM2) {
        _22_SM2_fired_partial = outC->SM2_fired_strong;
        _23_SM2_reset_nxt_partial = kcg_false;
        _24_SM2_state_nxt_partial = SSM_st_Closing_SM2;
        _16_SM2_state_nxt_partial = _24_SM2_state_nxt_partial;
        _17_SM2_reset_nxt_partial = _23_SM2_reset_nxt_partial;
        _18_SM2_fired_partial = _22_SM2_fired_partial;
      }
      else {
        tr_2_guard_Closing_SM2 = _15_bridgeStatus_partial.closed;
        if (tr_2_guard_Closing_SM2) {
          _19_SM2_fired_partial = _7_SSM_TR_Closing_FullyClose_2_Closing_SM2;
        }
        else {
          _19_SM2_fired_partial = SSM_TR_no_trans_SM2;
        }
        _20_SM2_reset_nxt_partial = tr_2_guard_Closing_SM2;
        if (tr_2_guard_Closing_SM2) {
          _21_SM2_state_nxt_partial = SSM_st_FullyClose_SM2;
        }
        else {
          _21_SM2_state_nxt_partial = SSM_st_Closing_SM2;
        }
        _16_SM2_state_nxt_partial = _21_SM2_state_nxt_partial;
        _17_SM2_reset_nxt_partial = _20_SM2_reset_nxt_partial;
        _18_SM2_fired_partial = _19_SM2_fired_partial;
      }
      kcg_copy_status(&outC->bridgeStatus, &_15_bridgeStatus_partial);
      outC->SM2_state_nxt = _16_SM2_state_nxt_partial;
      break;
    case SSM_st_Opening_SM2 :
      outC->Opening_weakb_clock_SM2 = outC->SM2_fired_strong != SSM_TR_no_trans_SM2;
      outC->_L25_Opening_SM2 = kcg_true;
      outC->_L6_Opening_SM2 = outC->_L5_Opening_SM2;
      outC->_L12_Opening_SM2 = kcg_lit_int32(0);
      if (outC->SM2_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM2:Opening:_L11= */
      if (outC->init1) {
        outC->_L11_Opening_SM2 = outC->_L12_Opening_SM2;
      }
      else {
        outC->_L11_Opening_SM2 = outC->_L6_Opening_SM2;
      }
      outC->_L4_Opening_SM2 = kcg_lit_int32(1);
      outC->_L5_Opening_SM2 = outC->_L4_Opening_SM2 + outC->_L11_Opening_SM2;
      outC->_L9_Opening_SM2 = kcg_lit_int32(5);
      outC->_L7_Opening_SM2 = outC->_L9_Opening_SM2 == outC->_L5_Opening_SM2;
      outC->_L22_Opening_SM2 = kcg_false;
      outC->_L24_Opening_SM2 = kcg_false;
      outC->_L23_Opening_SM2.opening = outC->_L25_Opening_SM2;
      outC->_L23_Opening_SM2.opened = outC->_L7_Opening_SM2;
      outC->_L23_Opening_SM2.closing = outC->_L22_Opening_SM2;
      outC->_L23_Opening_SM2.closed = outC->_L24_Opening_SM2;
      kcg_copy_status(&_5_bridgeStatus_partial, &outC->_L23_Opening_SM2);
      /* SM2:Opening: */
      if (outC->Opening_weakb_clock_SM2) {
        _12_SM2_fired_partial = outC->SM2_fired_strong;
        _13_SM2_reset_nxt_partial = kcg_false;
        _14_SM2_state_nxt_partial = SSM_st_Opening_SM2;
        _6_SM2_state_nxt_partial = _14_SM2_state_nxt_partial;
        _7_SM2_reset_nxt_partial = _13_SM2_reset_nxt_partial;
        _8_SM2_fired_partial = _12_SM2_fired_partial;
      }
      else {
        tr_1_guard_Opening_SM2 = _5_bridgeStatus_partial.opened;
        if (tr_1_guard_Opening_SM2) {
          _9_SM2_fired_partial = _8_SSM_TR_Opening_FullyOpen_1_Opening_SM2;
        }
        else {
          _9_SM2_fired_partial = SSM_TR_no_trans_SM2;
        }
        _10_SM2_reset_nxt_partial = tr_1_guard_Opening_SM2;
        if (tr_1_guard_Opening_SM2) {
          _11_SM2_state_nxt_partial = SSM_st_FullyOpen_SM2;
        }
        else {
          _11_SM2_state_nxt_partial = SSM_st_Opening_SM2;
        }
        _6_SM2_state_nxt_partial = _11_SM2_state_nxt_partial;
        _7_SM2_reset_nxt_partial = _10_SM2_reset_nxt_partial;
        _8_SM2_fired_partial = _9_SM2_fired_partial;
      }
      kcg_copy_status(&outC->bridgeStatus, &_5_bridgeStatus_partial);
      outC->SM2_state_nxt = _6_SM2_state_nxt_partial;
      break;
    case SSM_st_FullyOpen_SM2 :
      _4_SM2_fired_partial = outC->SM2_fired_strong;
      _3_SM2_reset_nxt_partial = kcg_false;
      _2_SM2_state_nxt_partial = SSM_st_FullyOpen_SM2;
      outC->_L12_FullyOpen_SM2 = kcg_false;
      outC->_L13_FullyOpen_SM2 = kcg_true;
      outC->_L11_FullyOpen_SM2 = kcg_false;
      outC->_L10_FullyOpen_SM2 = kcg_false;
      outC->_L14_FullyOpen_SM2.opening = outC->_L12_FullyOpen_SM2;
      outC->_L14_FullyOpen_SM2.opened = outC->_L13_FullyOpen_SM2;
      outC->_L14_FullyOpen_SM2.closing = outC->_L11_FullyOpen_SM2;
      outC->_L14_FullyOpen_SM2.closed = outC->_L10_FullyOpen_SM2;
      kcg_copy_status(&_1_bridgeStatus_partial, &outC->_L14_FullyOpen_SM2);
      kcg_copy_status(&outC->bridgeStatus, &_1_bridgeStatus_partial);
      outC->SM2_state_nxt = _2_SM2_state_nxt_partial;
      break;
    case SSM_st_ToMove_SM2 :
      SM2_fired_partial = outC->SM2_fired_strong;
      SM2_reset_nxt_partial = kcg_false;
      SM2_state_nxt_partial = SSM_st_ToMove_SM2;
      outC->_L13_ToMove_SM2 = kcg_false;
      outC->_L12_ToMove_SM2 = kcg_false;
      outC->_L11_ToMove_SM2 = kcg_false;
      outC->_L7_ToMove_SM2 = kcg_false;
      outC->_L6_ToMove_SM2.opening = outC->_L7_ToMove_SM2;
      outC->_L6_ToMove_SM2.opened = outC->_L11_ToMove_SM2;
      outC->_L6_ToMove_SM2.closing = outC->_L12_ToMove_SM2;
      outC->_L6_ToMove_SM2.closed = outC->_L13_ToMove_SM2;
      kcg_copy_status(&bridgeStatus_partial, &outC->_L6_ToMove_SM2);
      kcg_copy_status(&outC->bridgeStatus, &bridgeStatus_partial);
      outC->SM2_state_nxt = SM2_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM2_reset_sel = outC->SM2_reset_nxt;
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_FullyClose_SM2 :
      outC->SM2_reset_nxt = _27_SM2_reset_nxt_partial;
      outC->SM2_fired = _28_SM2_fired_partial;
      break;
    case SSM_st_Closing_SM2 :
      outC->SM2_reset_nxt = _17_SM2_reset_nxt_partial;
      outC->SM2_fired = _18_SM2_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_Opening_SM2 :
      outC->SM2_reset_nxt = _7_SM2_reset_nxt_partial;
      outC->SM2_fired = _8_SM2_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_FullyOpen_SM2 :
      outC->SM2_reset_nxt = _3_SM2_reset_nxt_partial;
      outC->SM2_fired = _4_SM2_fired_partial;
      break;
    case SSM_st_ToMove_SM2 :
      outC->SM2_reset_nxt = SM2_reset_nxt_partial;
      outC->SM2_fired = SM2_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Bridge_init(outC_Bridge *outC)
{
  outC->SM2_fired = SSM_TR_no_trans_SM2;
  outC->SM2_fired_strong = SSM_TR_no_trans_SM2;
  outC->SM2_state_act = SSM_st_ToMove_SM2;
  outC->SM2_state_sel = SSM_st_ToMove_SM2;
  outC->_L14_FullyClose_SM2.opening = kcg_true;
  outC->_L14_FullyClose_SM2.opened = kcg_true;
  outC->_L14_FullyClose_SM2.closing = kcg_true;
  outC->_L14_FullyClose_SM2.closed = kcg_true;
  outC->_L13_FullyClose_SM2 = kcg_true;
  outC->_L12_FullyClose_SM2 = kcg_true;
  outC->_L11_FullyClose_SM2 = kcg_true;
  outC->_L10_FullyClose_SM2 = kcg_true;
  outC->Closing_weakb_clock_SM2 = kcg_true;
  outC->_L53_Closing_SM2 = kcg_lit_int32(0);
  outC->_L52_Closing_SM2 = kcg_lit_int32(0);
  outC->_L51_Closing_SM2 = kcg_lit_int32(0);
  outC->_L50_Closing_SM2 = kcg_lit_int32(0);
  outC->_L48_Closing_SM2.opening = kcg_true;
  outC->_L48_Closing_SM2.opened = kcg_true;
  outC->_L48_Closing_SM2.closing = kcg_true;
  outC->_L48_Closing_SM2.closed = kcg_true;
  outC->_L47_Closing_SM2 = kcg_lit_int32(0);
  outC->_L46_Closing_SM2 = kcg_true;
  outC->_L45_Closing_SM2 = kcg_true;
  outC->_L43_Closing_SM2 = kcg_true;
  outC->_L54_Closing_SM2 = kcg_true;
  outC->Opening_weakb_clock_SM2 = kcg_true;
  outC->_L4_Opening_SM2 = kcg_lit_int32(0);
  outC->_L6_Opening_SM2 = kcg_lit_int32(0);
  outC->_L7_Opening_SM2 = kcg_true;
  outC->_L9_Opening_SM2 = kcg_lit_int32(0);
  outC->_L11_Opening_SM2 = kcg_lit_int32(0);
  outC->_L12_Opening_SM2 = kcg_lit_int32(0);
  outC->_L25_Opening_SM2 = kcg_true;
  outC->_L24_Opening_SM2 = kcg_true;
  outC->_L23_Opening_SM2.opening = kcg_true;
  outC->_L23_Opening_SM2.opened = kcg_true;
  outC->_L23_Opening_SM2.closing = kcg_true;
  outC->_L23_Opening_SM2.closed = kcg_true;
  outC->_L22_Opening_SM2 = kcg_true;
  outC->_L14_FullyOpen_SM2.opening = kcg_true;
  outC->_L14_FullyOpen_SM2.opened = kcg_true;
  outC->_L14_FullyOpen_SM2.closing = kcg_true;
  outC->_L14_FullyOpen_SM2.closed = kcg_true;
  outC->_L13_FullyOpen_SM2 = kcg_true;
  outC->_L12_FullyOpen_SM2 = kcg_true;
  outC->_L11_FullyOpen_SM2 = kcg_true;
  outC->_L10_FullyOpen_SM2 = kcg_true;
  outC->_L6_ToMove_SM2.opening = kcg_true;
  outC->_L6_ToMove_SM2.opened = kcg_true;
  outC->_L6_ToMove_SM2.closing = kcg_true;
  outC->_L6_ToMove_SM2.closed = kcg_true;
  outC->_L7_ToMove_SM2 = kcg_true;
  outC->_L11_ToMove_SM2 = kcg_true;
  outC->_L12_ToMove_SM2 = kcg_true;
  outC->_L13_ToMove_SM2 = kcg_true;
  outC->_L44_Closing_SM2 = kcg_lit_int32(0);
  outC->_L5_Opening_SM2 = kcg_lit_int32(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->bridgeStatus.opening = kcg_true;
  outC->bridgeStatus.opened = kcg_true;
  outC->bridgeStatus.closing = kcg_true;
  outC->bridgeStatus.closed = kcg_true;
  outC->SM2_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_state_nxt = SSM_st_ToMove_SM2;
}
#endif /* KCG_USER_DEFINED_INIT */


void Bridge_reset(outC_Bridge *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM2_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_state_nxt = SSM_st_ToMove_SM2;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Bridge.c
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

