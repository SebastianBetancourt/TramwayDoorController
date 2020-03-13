/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-13T00:03:44
*************************************************************$ */
#ifndef _Bridge_H_
#define _Bridge_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* deployed/ */ deployed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:ToMove:_L5/ */ _L5_ToMove_SM1;
  kcg_bool /* SM1:Deployed:_L4/ */ _L4_Deployed_SM1;
  kcg_bool /* SM1:Retracted:_L1/ */ _L1_Retracted_SM1;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Bridge;

/* ===========  node initialization and cycle functions  =========== */
/* Bridge/ */
extern void Bridge(
  /* deployRequest/ */
  kcg_bool deployRequest,
  /* retractRequest/ */
  kcg_bool retractRequest,
  outC_Bridge *outC);

extern void Bridge_reset(outC_Bridge *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Bridge_init(outC_Bridge *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Bridge_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Bridge.h
** Generation date: 2020-03-13T00:03:44
*************************************************************$ */

