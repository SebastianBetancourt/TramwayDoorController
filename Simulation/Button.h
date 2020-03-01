/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-02-29T16:05:35
*************************************************************$ */
#ifndef _Button_H_
#define _Button_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* clicked/ */ clicked;
  kcg_bool /* deactivate/ */ deactivate;
} inC_Button;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* activated/ */ activated;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Button /* Button: */ Button_state_nxt;
  kcg_bool /* Button: */ Button_reset_act;
  kcg_bool /* Button: */ Button_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Button /* Button: */ Button_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Button:notPressed:_L3/ */ _L3_notPressed_Button;
  kcg_bool /* Button:notPressed:_L2/ */ _L2_notPressed_Button;
  kcg_bool /* Button:pressed:_L2/ */ _L2_pressed_Button;
  kcg_bool /* Button:pressed:_L1/ */ _L1_pressed_Button;
  SSM_ST_Button /* Button: */ Button_state_sel;
  SSM_TR_Button /* Button: */ Button_fired_strong;
  SSM_TR_Button /* Button: */ Button_fired;
} outC_Button;

/* ===========  node initialization and cycle functions  =========== */
/* Button/ */
extern void Button(inC_Button *inC, outC_Button *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Button_reset(outC_Button *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Button_init(outC_Button *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Button_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Button.h
** Generation date: 2020-02-29T16:05:35
*************************************************************$ */

