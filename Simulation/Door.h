/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-12T16:20:07
*************************************************************$ */
#ifndef _Door_H_
#define _Door_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* openRequest/ */ openRequest;
  kcg_bool /* closeRequest/ */ closeRequest;
} inC_Door;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* opening/ */ opening;
  kcg_bool /* closing/ */ closing;
  kcg_bool /* opened/ */ opened;
  kcg_bool /* closed/ */ closed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int32 /* SM1:Opening:_L5/ */ _L5_Opening_SM1;
  kcg_int32 /* SM1:Closing:_L2/ */ _L2_Closing_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:Opening: */ Opening_weakb_clock_SM1;
  kcg_bool /* SM1:Closing: */ Closing_weakb_clock_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:FullyClose:_L5/ */ _L5_FullyClose_SM1;
  kcg_bool /* SM1:FullyClose:_L2/ */ _L2_FullyClose_SM1;
  kcg_bool /* SM1:FullyClose:_L3/ */ _L3_FullyClose_SM1;
  kcg_bool /* SM1:FullyClose:_L4/ */ _L4_FullyClose_SM1;
  kcg_bool /* SM1:FullyOpen:_L1/ */ _L1_FullyOpen_SM1;
  kcg_bool /* SM1:FullyOpen:_L2/ */ _L2_FullyOpen_SM1;
  kcg_bool /* SM1:FullyOpen:_L3/ */ _L3_FullyOpen_SM1;
  kcg_bool /* SM1:FullyOpen:_L4/ */ _L4_FullyOpen_SM1;
  kcg_bool /* SM1:Opening:_L15/ */ _L15_Opening_SM1;
  kcg_bool /* SM1:Opening:_L14/ */ _L14_Opening_SM1;
  kcg_bool /* SM1:Opening:_L13/ */ _L13_Opening_SM1;
  kcg_int32 /* SM1:Opening:_L12/ */ _L12_Opening_SM1;
  kcg_int32 /* SM1:Opening:_L11/ */ _L11_Opening_SM1;
  kcg_int32 /* SM1:Opening:_L9/ */ _L9_Opening_SM1;
  kcg_bool /* SM1:Opening:_L7/ */ _L7_Opening_SM1;
  kcg_int32 /* SM1:Opening:_L6/ */ _L6_Opening_SM1;
  kcg_int32 /* SM1:Opening:_L4/ */ _L4_Opening_SM1;
  kcg_int32 /* SM1:Closing:_L10/ */ _L10_Closing_SM1;
  kcg_bool /* SM1:Closing:_L7/ */ _L7_Closing_SM1;
  kcg_bool /* SM1:Closing:_L8/ */ _L8_Closing_SM1;
  kcg_bool /* SM1:Closing:_L9/ */ _L9_Closing_SM1;
  kcg_int32 /* SM1:Closing:_L1/ */ _L1_Closing_SM1;
  kcg_int32 /* SM1:Closing:_L3/ */ _L3_Closing_SM1;
  kcg_int32 /* SM1:Closing:_L4/ */ _L4_Closing_SM1;
  kcg_bool /* SM1:Closing:_L5/ */ _L5_Closing_SM1;
  kcg_int32 /* SM1:Closing:_L6/ */ _L6_Closing_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Door;

/* ===========  node initialization and cycle functions  =========== */
/* Door/ */
extern void Door(inC_Door *inC, outC_Door *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Door_reset(outC_Door *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Door_init(outC_Door *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Door_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Door.h
** Generation date: 2020-03-12T16:20:07
*************************************************************$ */

