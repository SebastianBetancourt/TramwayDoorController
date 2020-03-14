/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-13T19:51:02
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
  /* deployed/ */
  kcg_bool deployed_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_partial;
  /* deployed/ */
  kcg_bool _1_deployed_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _4_SM1_fired_partial;
  /* deployed/ */
  kcg_bool _5_deployed_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _8_SM1_fired_partial;
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
  _2_SSM_ST_SM1 _9_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _11_SM1_fired_strong_partial;
  /* SM1:Deployed:<1> */
  kcg_bool tr_1_guard_Deployed_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _12_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _14_SM1_fired_strong_partial;
  /* SM1:Retracted:<1> */
  kcg_bool tr_1_guard_Retracted_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Retracted_SM1 :
      tr_1_guard_Retracted_SM1 = deployRequest;
      if (tr_1_guard_Retracted_SM1) {
        _12_SM1_state_act_partial = SSM_st_Deployed_SM1;
      }
      else {
        _12_SM1_state_act_partial = SSM_st_Retracted_SM1;
      }
      outC->SM1_state_act = _12_SM1_state_act_partial;
      if (tr_1_guard_Retracted_SM1) {
        _14_SM1_fired_strong_partial = SSM_TR_Retracted_Deployed_1_Retracted_SM1;
      }
      else {
        _14_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _14_SM1_fired_strong_partial;
      break;
    case SSM_st_Deployed_SM1 :
      tr_1_guard_Deployed_SM1 = retractRequest;
      if (tr_1_guard_Deployed_SM1) {
        _9_SM1_state_act_partial = SSM_st_Retracted_SM1;
      }
      else {
        _9_SM1_state_act_partial = SSM_st_Deployed_SM1;
      }
      outC->SM1_state_act = _9_SM1_state_act_partial;
      if (tr_1_guard_Deployed_SM1) {
        _11_SM1_fired_strong_partial = SSM_TR_Deployed_Retracted_1_Deployed_SM1;
      }
      else {
        _11_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _11_SM1_fired_strong_partial;
      break;
    case _7_SSM_st_ToMove_SM1 :
      tr_2_guard_ToMove_SM1 = retractRequest;
      tr_1_guard_ToMove_SM1 = deployRequest;
      if (tr_1_guard_ToMove_SM1) {
        SM1_state_act_partial = SSM_st_Deployed_SM1;
      }
      else if (tr_2_guard_ToMove_SM1) {
        SM1_state_act_partial = SSM_st_Retracted_SM1;
      }
      else {
        SM1_state_act_partial = _7_SSM_st_ToMove_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_ToMove_SM1) {
        SM1_fired_strong_partial = SSM_TR_ToMove_Deployed_1_ToMove_SM1;
      }
      else if (tr_2_guard_ToMove_SM1) {
        SM1_fired_strong_partial = SSM_TR_ToMove_Retracted_2_ToMove_SM1;
      }
      else {
        SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Retracted_SM1 :
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial = SSM_st_Retracted_SM1;
      outC->_L1_Retracted_SM1 = kcg_false;
      _5_deployed_partial = outC->_L1_Retracted_SM1;
      outC->deployed = _5_deployed_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_Deployed_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_Deployed_SM1;
      outC->_L4_Deployed_SM1 = kcg_true;
      _1_deployed_partial = outC->_L4_Deployed_SM1;
      outC->deployed = _1_deployed_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case _7_SSM_st_ToMove_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _7_SSM_st_ToMove_SM1;
      outC->_L5_ToMove_SM1 = kcg_false;
      deployed_partial = outC->_L5_ToMove_SM1;
      outC->deployed = deployed_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Retracted_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case SSM_st_Deployed_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case _7_SSM_st_ToMove_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Retracted_SM1 :
      _13_SM1_reset_act_partial = tr_1_guard_Retracted_SM1;
      break;
    case SSM_st_Deployed_SM1 :
      _10_SM1_reset_act_partial = tr_1_guard_Deployed_SM1;
      break;
    case _7_SSM_st_ToMove_SM1 :
      if (tr_1_guard_ToMove_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_ToMove_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Retracted_SM1 :
      outC->SM1_reset_act = _13_SM1_reset_act_partial;
      break;
    case SSM_st_Deployed_SM1 :
      outC->SM1_reset_act = _10_SM1_reset_act_partial;
      break;
    case _7_SSM_st_ToMove_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Bridge_init(outC_Bridge *outC)
{
  outC->SM1_fired = _6_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _6_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _7_SSM_st_ToMove_SM1;
  outC->SM1_state_sel = _7_SSM_st_ToMove_SM1;
  outC->_L1_Retracted_SM1 = kcg_true;
  outC->_L4_Deployed_SM1 = kcg_true;
  outC->_L5_ToMove_SM1 = kcg_true;
  outC->deployed = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _7_SSM_st_ToMove_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void Bridge_reset(outC_Bridge *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _7_SSM_st_ToMove_SM1;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Bridge.c
** Generation date: 2020-03-13T19:51:02
*************************************************************$ */

