/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */
#ifndef _Bridge_H_
#define _Bridge_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  status /* bridgeStatus/ */ bridgeStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int32 /* SM2:Opening:_L5/ */ _L5_Opening_SM2;
  kcg_int32 /* SM2:Closing:_L44/ */ _L44_Closing_SM2;
  SSM_ST_SM2 /* SM2: */ SM2_state_nxt;
  kcg_bool /* SM2: */ SM2_reset_act;
  kcg_bool /* SM2: */ SM2_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM2:Opening: */ Opening_weakb_clock_SM2;
  kcg_bool /* SM2:Closing: */ Closing_weakb_clock_SM2;
  SSM_ST_SM2 /* SM2: */ SM2_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM2:ToMove:_L13/ */ _L13_ToMove_SM2;
  kcg_bool /* SM2:ToMove:_L12/ */ _L12_ToMove_SM2;
  kcg_bool /* SM2:ToMove:_L11/ */ _L11_ToMove_SM2;
  kcg_bool /* SM2:ToMove:_L7/ */ _L7_ToMove_SM2;
  status /* SM2:ToMove:_L6/ */ _L6_ToMove_SM2;
  kcg_bool /* SM2:FullyOpen:_L10/ */ _L10_FullyOpen_SM2;
  kcg_bool /* SM2:FullyOpen:_L11/ */ _L11_FullyOpen_SM2;
  kcg_bool /* SM2:FullyOpen:_L12/ */ _L12_FullyOpen_SM2;
  kcg_bool /* SM2:FullyOpen:_L13/ */ _L13_FullyOpen_SM2;
  status /* SM2:FullyOpen:_L14/ */ _L14_FullyOpen_SM2;
  kcg_bool /* SM2:Opening:_L22/ */ _L22_Opening_SM2;
  status /* SM2:Opening:_L23/ */ _L23_Opening_SM2;
  kcg_bool /* SM2:Opening:_L24/ */ _L24_Opening_SM2;
  kcg_bool /* SM2:Opening:_L25/ */ _L25_Opening_SM2;
  kcg_int32 /* SM2:Opening:_L12/ */ _L12_Opening_SM2;
  kcg_int32 /* SM2:Opening:_L11/ */ _L11_Opening_SM2;
  kcg_int32 /* SM2:Opening:_L9/ */ _L9_Opening_SM2;
  kcg_bool /* SM2:Opening:_L7/ */ _L7_Opening_SM2;
  kcg_int32 /* SM2:Opening:_L6/ */ _L6_Opening_SM2;
  kcg_int32 /* SM2:Opening:_L4/ */ _L4_Opening_SM2;
  kcg_bool /* SM2:Closing:_L54/ */ _L54_Closing_SM2;
  kcg_bool /* SM2:Closing:_L43/ */ _L43_Closing_SM2;
  kcg_bool /* SM2:Closing:_L45/ */ _L45_Closing_SM2;
  kcg_bool /* SM2:Closing:_L46/ */ _L46_Closing_SM2;
  kcg_int32 /* SM2:Closing:_L47/ */ _L47_Closing_SM2;
  status /* SM2:Closing:_L48/ */ _L48_Closing_SM2;
  kcg_int32 /* SM2:Closing:_L50/ */ _L50_Closing_SM2;
  kcg_int32 /* SM2:Closing:_L51/ */ _L51_Closing_SM2;
  kcg_int32 /* SM2:Closing:_L52/ */ _L52_Closing_SM2;
  kcg_int32 /* SM2:Closing:_L53/ */ _L53_Closing_SM2;
  kcg_bool /* SM2:FullyClose:_L10/ */ _L10_FullyClose_SM2;
  kcg_bool /* SM2:FullyClose:_L11/ */ _L11_FullyClose_SM2;
  kcg_bool /* SM2:FullyClose:_L12/ */ _L12_FullyClose_SM2;
  kcg_bool /* SM2:FullyClose:_L13/ */ _L13_FullyClose_SM2;
  status /* SM2:FullyClose:_L14/ */ _L14_FullyClose_SM2;
  SSM_ST_SM2 /* SM2: */ SM2_state_sel;
  SSM_TR_SM2 /* SM2: */ SM2_fired_strong;
  SSM_TR_SM2 /* SM2: */ SM2_fired;
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
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

