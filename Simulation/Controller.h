/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */
#ifndef _Controller_H_
#define _Controller_H_

#include "kcg_types.h"
#include "Bridge.h"
#include "Button.h"
#include "Door.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* requireDoor/ */ requireDoor;
  kcg_bool /* requireBridge/ */ requireBridge;
  kcg_bool /* immDeparture/ */ immDeparture;
  kcg_bool /* inStation/ */ inStation;
} inC_Controller;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  status /* doorStatus/ */ doorStatus;
  status /* bridgeStatus/ */ bridgeStatus;
  kcg_bool /* openDoor/ */ openDoor;
  kcg_bool /* closeDoor/ */ closeDoor;
  kcg_bool /* deployBridge/ */ deployBridge;
  kcg_bool /* retractBridge/ */ retractBridge;
  kcg_bool /* secured/ */ secured;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Door /* SM1:Door:_L15=(Door#3)/ */ Context_Door_3;
  outC_Button /* SM1:DoorButton:_L4=(Button#1)/ */ Context_Button_1;
  outC_Button /* SM1:BridgeButton:_L1=(Button#7)/ */ Context_Button_7;
  outC_Bridge /* SM1:Bridge:_L8=(Bridge#5)/ */ Context_Bridge_5;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  status /* SM1:Door:_L15/ */ _L15_Door_SM1;
  kcg_bool /* SM1:Door:_L14/ */ _L14_Door_SM1;
  kcg_bool /* SM1:Door:_L13/ */ _L13_Door_SM1;
  kcg_bool /* SM1:DoorButton:_L10/ */ _L10_DoorButton_SM1;
  kcg_bool /* SM1:DoorButton:_L6/ */ _L6_DoorButton_SM1;
  kcg_bool /* SM1:DoorButton:_L5/ */ _L5_DoorButton_SM1;
  kcg_bool /* SM1:DoorButton:_L4/ */ _L4_DoorButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L11/ */ _L11_ToPressButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L8/ */ _L8_ToPressButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L6/ */ _L6_ToPressButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L5/ */ _L5_ToPressButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L4/ */ _L4_ToPressButton_SM1;
  kcg_bool /* SM1:ToPressButton:_L2/ */ _L2_ToPressButton_SM1;
  status /* SM1:ToPressButton:_L1/ */ _L1_ToPressButton_SM1;
  kcg_bool /* SM1:Open:_L3/ */ _L3_Open_SM1;
  kcg_bool /* SM1:Open:_L1/ */ _L1_Open_SM1;
  kcg_bool /* SM1:ToLeaveStation:_L1/ */ _L1_ToLeaveStation_SM1;
  kcg_bool /* SM1:BridgeButton:_L4/ */ _L4_BridgeButton_SM1;
  kcg_bool /* SM1:BridgeButton:_L3/ */ _L3_BridgeButton_SM1;
  kcg_bool /* SM1:BridgeButton:_L2/ */ _L2_BridgeButton_SM1;
  kcg_bool /* SM1:BridgeButton:_L1/ */ _L1_BridgeButton_SM1;
  kcg_bool /* SM1:Bridge:_L11/ */ _L11_Bridge_SM1;
  kcg_bool /* SM1:Bridge:_L9/ */ _L9_Bridge_SM1;
  status /* SM1:Bridge:_L8/ */ _L8_Bridge_SM1;
  kcg_bool /* SM1:Bridge:_L4/ */ _L4_Bridge_SM1;
  kcg_bool /* SM1:Bridge:_L3/ */ _L3_Bridge_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Controller;

/* ===========  node initialization and cycle functions  =========== */
/* Controller/ */
extern void Controller(inC_Controller *inC, outC_Controller *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Controller_reset(outC_Controller *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Controller_init(outC_Controller *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Controller_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.h
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

