/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Controller.h"

/* Controller/ */
void Controller(inC_Controller *inC, outC_Controller *outC)
{
  /* doorStatus/ */
  status doorStatus_partial;
  /* bridgeStatus/ */
  status bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool openDoor_partial;
  /* closeDoor/ */
  kcg_bool closeDoor_partial;
  /* deployBridge/ */
  kcg_bool deployBridge_partial;
  /* retractBridge/ */
  kcg_bool retractBridge_partial;
  /* secured/ */
  kcg_bool secured_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* SM1:Door:<4> */
  kcg_bool tr_4_guard_Door_SM1;
  /* SM1:Door:<3> */
  kcg_bool tr_3_guard_Door_SM1;
  /* SM1:Door:<2> */
  kcg_bool tr_2_guard_Door_SM1;
  /* SM1:Door:<1> */
  kcg_bool tr_1_guard_Door_SM1;
  /* doorStatus/ */
  status _1_doorStatus_partial;
  /* bridgeStatus/ */
  status _2_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _3_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _4_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _5_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _6_retractBridge_partial;
  /* secured/ */
  kcg_bool _7_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1:DoorButton:<1> */
  kcg_bool tr_1_guard_DoorButton_SM1;
  /* doorStatus/ */
  status _11_doorStatus_partial;
  /* bridgeStatus/ */
  status _12_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _13_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _14_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _15_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _16_retractBridge_partial;
  /* secured/ */
  kcg_bool _17_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _20_SM1_fired_partial;
  /* SM1:ToPressButton:<2> */
  kcg_bool tr_2_guard_ToPressButton_SM1;
  /* SM1:ToPressButton:<1> */
  kcg_bool tr_1_guard_ToPressButton_SM1;
  /* doorStatus/ */
  status _21_doorStatus_partial;
  /* bridgeStatus/ */
  status _22_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _23_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _24_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _25_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _26_retractBridge_partial;
  /* secured/ */
  kcg_bool _27_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _28_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _29_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _30_SM1_fired_partial;
  /* SM1:Open:<2> */
  kcg_bool tr_2_guard_Open_SM1;
  /* SM1:Open:<1> */
  kcg_bool tr_1_guard_Open_SM1;
  /* doorStatus/ */
  status _31_doorStatus_partial;
  /* bridgeStatus/ */
  status _32_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _33_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _34_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _35_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _36_retractBridge_partial;
  /* secured/ */
  kcg_bool _37_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _38_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _39_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _40_SM1_fired_partial;
  /* SM1:ToLeaveStation:<1> */
  kcg_bool tr_1_guard_ToLeaveStation_SM1;
  /* doorStatus/ */
  status _41_doorStatus_partial;
  /* bridgeStatus/ */
  status _42_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _43_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _44_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _45_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _46_retractBridge_partial;
  /* secured/ */
  kcg_bool _47_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _48_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _49_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _50_SM1_fired_partial;
  /* SM1:BridgeButton:<1> */
  kcg_bool tr_1_guard_BridgeButton_SM1;
  /* doorStatus/ */
  status _51_doorStatus_partial;
  /* bridgeStatus/ */
  status _52_bridgeStatus_partial;
  /* openDoor/ */
  kcg_bool _53_openDoor_partial;
  /* closeDoor/ */
  kcg_bool _54_closeDoor_partial;
  /* deployBridge/ */
  kcg_bool _55_deployBridge_partial;
  /* retractBridge/ */
  kcg_bool _56_retractBridge_partial;
  /* secured/ */
  kcg_bool _57_secured_partial;
  /* SM1: */
  SSM_ST_SM1 _58_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _59_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _60_SM1_fired_partial;
  /* SM1:Bridge:<2> */
  kcg_bool tr_2_guard_Bridge_SM1;
  /* SM1:Bridge:<1> */
  kcg_bool tr_1_guard_Bridge_SM1;
  /* secured/ */
  kcg_bool last_secured;
  /* retractBridge/ */
  kcg_bool last_retractBridge;
  /* deployBridge/ */
  kcg_bool last_deployBridge;
  /* closeDoor/ */
  kcg_bool last_closeDoor;
  /* openDoor/ */
  kcg_bool last_openDoor;
  /* bridgeStatus/ */
  status last_bridgeStatus;
  /* doorStatus/ */
  status last_doorStatus;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_secured = outC->secured;
  last_retractBridge = outC->retractBridge;
  last_deployBridge = outC->deployBridge;
  last_closeDoor = outC->closeDoor;
  last_openDoor = outC->openDoor;
  kcg_copy_status(&last_bridgeStatus, &outC->bridgeStatus);
  kcg_copy_status(&last_doorStatus, &outC->doorStatus);
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  switch (outC->SM1_state_act) {
    case SSM_st_Bridge_SM1 :
      _57_secured_partial = last_secured;
      _56_retractBridge_partial = last_retractBridge;
      _55_deployBridge_partial = last_deployBridge;
      kcg_copy_status(&_51_doorStatus_partial, &last_doorStatus);
      outC->_L3_Bridge_SM1 = _55_deployBridge_partial;
      outC->_L4_Bridge_SM1 = _56_retractBridge_partial;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_Bridge_SM1 :
      if (SM1_reset_sel) {
        /* SM1:Bridge:_L8=(Bridge#5)/ */ Bridge_reset(&outC->Context_Bridge_5);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Bridge_SM1 :
      /* SM1:Bridge:_L8=(Bridge#5)/ */
      Bridge(
        outC->_L3_Bridge_SM1,
        outC->_L4_Bridge_SM1,
        &outC->Context_Bridge_5);
      kcg_copy_status(&outC->_L8_Bridge_SM1, &outC->Context_Bridge_5.bridgeStatus);
      kcg_copy_status(&_52_bridgeStatus_partial, &outC->_L8_Bridge_SM1);
      outC->_L9_Bridge_SM1 = outC->_L8_Bridge_SM1.opened;
      _53_openDoor_partial = outC->_L9_Bridge_SM1;
      tr_2_guard_Bridge_SM1 = _53_openDoor_partial &
        (!_52_bridgeStatus_partial.opening) &
        (!_52_bridgeStatus_partial.closing);
      tr_1_guard_Bridge_SM1 = _51_doorStatus_partial.closed &
        (!_51_doorStatus_partial.closing) & (_52_bridgeStatus_partial.closed &
          (!_52_bridgeStatus_partial.closing));
      if (tr_1_guard_Bridge_SM1) {
        _60_SM1_fired_partial = SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1;
      }
      else if (tr_2_guard_Bridge_SM1) {
        _60_SM1_fired_partial = SSM_TR_Bridge_Door_2_Bridge_SM1;
      }
      else {
        _60_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Bridge_SM1) {
        _59_SM1_reset_nxt_partial = kcg_true;
      }
      else {
        _59_SM1_reset_nxt_partial = tr_2_guard_Bridge_SM1;
      }
      if (tr_1_guard_Bridge_SM1) {
        _58_SM1_state_nxt_partial = SSM_st_ToLeaveStation_SM1;
      }
      else if (tr_2_guard_Bridge_SM1) {
        _58_SM1_state_nxt_partial = SSM_st_Door_SM1;
      }
      else {
        _58_SM1_state_nxt_partial = SSM_st_Bridge_SM1;
      }
      outC->_L11_Bridge_SM1 = !outC->_L9_Bridge_SM1;
      _54_closeDoor_partial = outC->_L11_Bridge_SM1;
      break;
    case SSM_st_BridgeButton_SM1 :
      _47_secured_partial = last_secured;
      kcg_copy_status(&_42_bridgeStatus_partial, &last_bridgeStatus);
      kcg_copy_status(&_41_doorStatus_partial, &last_doorStatus);
      outC->_L2_BridgeButton_SM1 = inC->requireBridge;
      outC->_L3_BridgeButton_SM1 = _42_bridgeStatus_partial.opened;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_BridgeButton_SM1 :
      if (SM1_reset_sel) {
        /* SM1:BridgeButton:_L1=(Button#7)/ */ Button_reset(&outC->Context_Button_7);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_BridgeButton_SM1 :
      /* SM1:BridgeButton:_L1=(Button#7)/ */
      Button(
        outC->_L2_BridgeButton_SM1,
        outC->_L3_BridgeButton_SM1,
        &outC->Context_Button_7);
      outC->_L1_BridgeButton_SM1 = outC->Context_Button_7.activated;
      _44_closeDoor_partial = outC->_L1_BridgeButton_SM1;
      tr_1_guard_BridgeButton_SM1 = _44_closeDoor_partial;
      if (tr_1_guard_BridgeButton_SM1) {
        _50_SM1_fired_partial = SSM_TR_BridgeButton_Door_1_BridgeButton_SM1;
      }
      else {
        _50_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      _49_SM1_reset_nxt_partial = tr_1_guard_BridgeButton_SM1;
      if (tr_1_guard_BridgeButton_SM1) {
        _48_SM1_state_nxt_partial = SSM_st_Door_SM1;
      }
      else {
        _48_SM1_state_nxt_partial = SSM_st_BridgeButton_SM1;
      }
      outC->_L4_BridgeButton_SM1 = !outC->_L1_BridgeButton_SM1;
      _43_openDoor_partial = outC->_L4_BridgeButton_SM1;
      _45_deployBridge_partial = outC->_L1_BridgeButton_SM1;
      _46_retractBridge_partial = outC->_L4_BridgeButton_SM1;
      break;
    case SSM_st_ToLeaveStation_SM1 :
      _36_retractBridge_partial = last_retractBridge;
      _35_deployBridge_partial = last_deployBridge;
      _34_closeDoor_partial = last_closeDoor;
      _33_openDoor_partial = last_openDoor;
      kcg_copy_status(&_32_bridgeStatus_partial, &last_bridgeStatus);
      kcg_copy_status(&_31_doorStatus_partial, &last_doorStatus);
      tr_1_guard_ToLeaveStation_SM1 = inC->inStation;
      if (tr_1_guard_ToLeaveStation_SM1) {
        _40_SM1_fired_partial =
          SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1;
      }
      else {
        _40_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      _39_SM1_reset_nxt_partial = tr_1_guard_ToLeaveStation_SM1;
      if (tr_1_guard_ToLeaveStation_SM1) {
        _38_SM1_state_nxt_partial = SSM_st_ToPressButton_SM1;
      }
      else {
        _38_SM1_state_nxt_partial = SSM_st_ToLeaveStation_SM1;
      }
      outC->_L1_ToLeaveStation_SM1 = kcg_true;
      _37_secured_partial = outC->_L1_ToLeaveStation_SM1;
      break;
    case SSM_st_Open_SM1 :
      _27_secured_partial = last_secured;
      kcg_copy_status(&_22_bridgeStatus_partial, &last_bridgeStatus);
      kcg_copy_status(&_21_doorStatus_partial, &last_doorStatus);
      tr_2_guard_Open_SM1 = inC->immDeparture;
      tr_1_guard_Open_SM1 = inC->requireBridge & (!_22_bridgeStatus_partial.opened);
      if (tr_1_guard_Open_SM1) {
        _30_SM1_fired_partial = SSM_TR_Open_BridgeButton_1_Open_SM1;
      }
      else if (tr_2_guard_Open_SM1) {
        _30_SM1_fired_partial = SSM_TR_Open_Door_2_Open_SM1;
      }
      else {
        _30_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Open_SM1) {
        _29_SM1_reset_nxt_partial = kcg_true;
      }
      else {
        _29_SM1_reset_nxt_partial = tr_2_guard_Open_SM1;
      }
      if (tr_1_guard_Open_SM1) {
        _28_SM1_state_nxt_partial = SSM_st_BridgeButton_SM1;
      }
      else if (tr_2_guard_Open_SM1) {
        _28_SM1_state_nxt_partial = SSM_st_Door_SM1;
      }
      else {
        _28_SM1_state_nxt_partial = SSM_st_Open_SM1;
      }
      outC->_L1_Open_SM1 = inC->immDeparture;
      outC->_L3_Open_SM1 = !outC->_L1_Open_SM1;
      _25_deployBridge_partial = outC->_L3_Open_SM1;
      _26_retractBridge_partial = outC->_L1_Open_SM1;
      _23_openDoor_partial = outC->_L3_Open_SM1;
      _24_closeDoor_partial = outC->_L1_Open_SM1;
      break;
    case SSM_st_ToPressButton_SM1 :
      tr_2_guard_ToPressButton_SM1 = inC->requireDoor;
      tr_1_guard_ToPressButton_SM1 = inC->requireBridge;
      if (tr_1_guard_ToPressButton_SM1) {
        _20_SM1_fired_partial = SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1;
      }
      else if (tr_2_guard_ToPressButton_SM1) {
        _20_SM1_fired_partial = SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1;
      }
      else {
        _20_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_ToPressButton_SM1) {
        _19_SM1_reset_nxt_partial = kcg_true;
      }
      else {
        _19_SM1_reset_nxt_partial = tr_2_guard_ToPressButton_SM1;
      }
      if (tr_1_guard_ToPressButton_SM1) {
        _18_SM1_state_nxt_partial = SSM_st_BridgeButton_SM1;
      }
      else if (tr_2_guard_ToPressButton_SM1) {
        _18_SM1_state_nxt_partial = SSM_st_DoorButton_SM1;
      }
      else {
        _18_SM1_state_nxt_partial = SSM_st_ToPressButton_SM1;
      }
      outC->_L11_ToPressButton_SM1 = kcg_false;
      outC->_L8_ToPressButton_SM1 = kcg_false;
      outC->_L6_ToPressButton_SM1 = kcg_false;
      outC->_L5_ToPressButton_SM1 = kcg_false;
      outC->_L4_ToPressButton_SM1 = kcg_false;
      outC->_L2_ToPressButton_SM1 = kcg_false;
      outC->_L1_ToPressButton_SM1.opening = outC->_L2_ToPressButton_SM1;
      outC->_L1_ToPressButton_SM1.opened = outC->_L2_ToPressButton_SM1;
      outC->_L1_ToPressButton_SM1.closing = outC->_L2_ToPressButton_SM1;
      outC->_L1_ToPressButton_SM1.closed = outC->_L2_ToPressButton_SM1;
      _17_secured_partial = outC->_L11_ToPressButton_SM1;
      _16_retractBridge_partial = outC->_L8_ToPressButton_SM1;
      _15_deployBridge_partial = outC->_L6_ToPressButton_SM1;
      _14_closeDoor_partial = outC->_L5_ToPressButton_SM1;
      _13_openDoor_partial = outC->_L4_ToPressButton_SM1;
      kcg_copy_status(&_12_bridgeStatus_partial, &outC->_L1_ToPressButton_SM1);
      kcg_copy_status(&_11_doorStatus_partial, &outC->_L1_ToPressButton_SM1);
      break;
    case SSM_st_DoorButton_SM1 :
      _7_secured_partial = last_secured;
      _6_retractBridge_partial = last_retractBridge;
      _5_deployBridge_partial = last_deployBridge;
      kcg_copy_status(&_2_bridgeStatus_partial, &last_bridgeStatus);
      kcg_copy_status(&_1_doorStatus_partial, &last_doorStatus);
      outC->_L5_DoorButton_SM1 = inC->requireDoor;
      outC->_L6_DoorButton_SM1 = _1_doorStatus_partial.opened;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_DoorButton_SM1 :
      if (SM1_reset_sel) {
        /* SM1:DoorButton:_L4=(Button#1)/ */ Button_reset(&outC->Context_Button_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_DoorButton_SM1 :
      /* SM1:DoorButton:_L4=(Button#1)/ */
      Button(
        outC->_L5_DoorButton_SM1,
        outC->_L6_DoorButton_SM1,
        &outC->Context_Button_1);
      outC->_L4_DoorButton_SM1 = outC->Context_Button_1.activated;
      _3_openDoor_partial = outC->_L4_DoorButton_SM1;
      tr_1_guard_DoorButton_SM1 = _3_openDoor_partial;
      if (tr_1_guard_DoorButton_SM1) {
        _10_SM1_fired_partial = SSM_TR_DoorButton_Door_1_DoorButton_SM1;
      }
      else {
        _10_SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      _9_SM1_reset_nxt_partial = tr_1_guard_DoorButton_SM1;
      if (tr_1_guard_DoorButton_SM1) {
        _8_SM1_state_nxt_partial = SSM_st_Door_SM1;
      }
      else {
        _8_SM1_state_nxt_partial = SSM_st_DoorButton_SM1;
      }
      outC->_L10_DoorButton_SM1 = !outC->_L4_DoorButton_SM1;
      _4_closeDoor_partial = outC->_L10_DoorButton_SM1;
      break;
    case SSM_st_Door_SM1 :
      secured_partial = last_secured;
      retractBridge_partial = last_retractBridge;
      deployBridge_partial = last_deployBridge;
      closeDoor_partial = last_closeDoor;
      openDoor_partial = last_openDoor;
      kcg_copy_status(&bridgeStatus_partial, &last_bridgeStatus);
      outC->_L13_Door_SM1 = openDoor_partial;
      outC->_L14_Door_SM1 = closeDoor_partial;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Door_SM1 :
      if (SM1_reset_sel) {
        /* SM1:Door:_L15=(Door#3)/ */ Door_reset(&outC->Context_Door_3);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Bridge_SM1 :
      kcg_copy_status(&outC->doorStatus, &_51_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_52_bridgeStatus_partial);
      outC->openDoor = _53_openDoor_partial;
      outC->closeDoor = _54_closeDoor_partial;
      outC->deployBridge = _55_deployBridge_partial;
      outC->retractBridge = _56_retractBridge_partial;
      outC->secured = _57_secured_partial;
      outC->SM1_state_nxt = _58_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _59_SM1_reset_nxt_partial;
      outC->SM1_fired = _60_SM1_fired_partial;
      break;
    case SSM_st_BridgeButton_SM1 :
      kcg_copy_status(&outC->doorStatus, &_41_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_42_bridgeStatus_partial);
      outC->openDoor = _43_openDoor_partial;
      outC->closeDoor = _44_closeDoor_partial;
      outC->deployBridge = _45_deployBridge_partial;
      outC->retractBridge = _46_retractBridge_partial;
      outC->secured = _47_secured_partial;
      outC->SM1_state_nxt = _48_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _49_SM1_reset_nxt_partial;
      outC->SM1_fired = _50_SM1_fired_partial;
      break;
    case SSM_st_ToLeaveStation_SM1 :
      kcg_copy_status(&outC->doorStatus, &_31_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_32_bridgeStatus_partial);
      outC->openDoor = _33_openDoor_partial;
      outC->closeDoor = _34_closeDoor_partial;
      outC->deployBridge = _35_deployBridge_partial;
      outC->retractBridge = _36_retractBridge_partial;
      outC->secured = _37_secured_partial;
      outC->SM1_state_nxt = _38_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _39_SM1_reset_nxt_partial;
      outC->SM1_fired = _40_SM1_fired_partial;
      break;
    case SSM_st_Open_SM1 :
      kcg_copy_status(&outC->doorStatus, &_21_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_22_bridgeStatus_partial);
      outC->openDoor = _23_openDoor_partial;
      outC->closeDoor = _24_closeDoor_partial;
      outC->deployBridge = _25_deployBridge_partial;
      outC->retractBridge = _26_retractBridge_partial;
      outC->secured = _27_secured_partial;
      outC->SM1_state_nxt = _28_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _29_SM1_reset_nxt_partial;
      outC->SM1_fired = _30_SM1_fired_partial;
      break;
    case SSM_st_ToPressButton_SM1 :
      kcg_copy_status(&outC->doorStatus, &_11_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_12_bridgeStatus_partial);
      outC->openDoor = _13_openDoor_partial;
      outC->closeDoor = _14_closeDoor_partial;
      outC->deployBridge = _15_deployBridge_partial;
      outC->retractBridge = _16_retractBridge_partial;
      outC->secured = _17_secured_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_DoorButton_SM1 :
      kcg_copy_status(&outC->doorStatus, &_1_doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &_2_bridgeStatus_partial);
      outC->openDoor = _3_openDoor_partial;
      outC->closeDoor = _4_closeDoor_partial;
      outC->deployBridge = _5_deployBridge_partial;
      outC->retractBridge = _6_retractBridge_partial;
      outC->secured = _7_secured_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_Door_SM1 :
      /* SM1:Door:_L15=(Door#3)/ */
      Door(outC->_L13_Door_SM1, outC->_L14_Door_SM1, &outC->Context_Door_3);
      kcg_copy_status(&outC->_L15_Door_SM1, &outC->Context_Door_3.doorStatus);
      kcg_copy_status(&doorStatus_partial, &outC->_L15_Door_SM1);
      tr_4_guard_Door_SM1 = doorStatus_partial.closed &
        (!doorStatus_partial.closing) & (bridgeStatus_partial.closed &
          (!bridgeStatus_partial.closing));
      tr_3_guard_Door_SM1 = doorStatus_partial.opened & (!doorStatus_partial.opening);
      tr_2_guard_Door_SM1 = deployBridge_partial & doorStatus_partial.closed &
        (!doorStatus_partial.closing);
      tr_1_guard_Door_SM1 = doorStatus_partial.closed &
        (!doorStatus_partial.closing) & (bridgeStatus_partial.opened &
          (!bridgeStatus_partial.opening));
      if (tr_1_guard_Door_SM1) {
        SM1_fired_partial = SSM_TR_Door_Bridge_1_Door_SM1;
      }
      else if (tr_2_guard_Door_SM1) {
        SM1_fired_partial = SSM_TR_Door_Bridge_2_Door_SM1;
      }
      else if (tr_3_guard_Door_SM1) {
        SM1_fired_partial = SSM_TR_Door_Open_3_Door_SM1;
      }
      else if (tr_4_guard_Door_SM1) {
        SM1_fired_partial = SSM_TR_Door_ToLeaveStation_4_Door_SM1;
      }
      else {
        SM1_fired_partial = _9_SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Door_SM1) {
        SM1_reset_nxt_partial = kcg_true;
      }
      else if (tr_2_guard_Door_SM1) {
        SM1_reset_nxt_partial = kcg_true;
      }
      else if (tr_3_guard_Door_SM1) {
        SM1_reset_nxt_partial = kcg_true;
      }
      else {
        SM1_reset_nxt_partial = tr_4_guard_Door_SM1;
      }
      if (tr_1_guard_Door_SM1) {
        SM1_state_nxt_partial = SSM_st_Bridge_SM1;
      }
      else if (tr_2_guard_Door_SM1) {
        SM1_state_nxt_partial = SSM_st_Bridge_SM1;
      }
      else if (tr_3_guard_Door_SM1) {
        SM1_state_nxt_partial = SSM_st_Open_SM1;
      }
      else if (tr_4_guard_Door_SM1) {
        SM1_state_nxt_partial = SSM_st_ToLeaveStation_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_Door_SM1;
      }
      kcg_copy_status(&outC->doorStatus, &doorStatus_partial);
      kcg_copy_status(&outC->bridgeStatus, &bridgeStatus_partial);
      outC->openDoor = openDoor_partial;
      outC->closeDoor = closeDoor_partial;
      outC->deployBridge = deployBridge_partial;
      outC->retractBridge = retractBridge_partial;
      outC->secured = secured_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM1_fired_strong = _9_SSM_TR_no_trans_SM1;
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Controller_init(outC_Controller *outC)
{
  outC->SM1_fired = _9_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _9_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Door_SM1;
  outC->SM1_state_sel = SSM_st_Door_SM1;
  outC->_L3_Bridge_SM1 = kcg_true;
  outC->_L4_Bridge_SM1 = kcg_true;
  outC->_L8_Bridge_SM1.opening = kcg_true;
  outC->_L8_Bridge_SM1.opened = kcg_true;
  outC->_L8_Bridge_SM1.closing = kcg_true;
  outC->_L8_Bridge_SM1.closed = kcg_true;
  outC->_L9_Bridge_SM1 = kcg_true;
  outC->_L11_Bridge_SM1 = kcg_true;
  outC->_L1_BridgeButton_SM1 = kcg_true;
  outC->_L2_BridgeButton_SM1 = kcg_true;
  outC->_L3_BridgeButton_SM1 = kcg_true;
  outC->_L4_BridgeButton_SM1 = kcg_true;
  outC->_L1_ToLeaveStation_SM1 = kcg_true;
  outC->_L1_Open_SM1 = kcg_true;
  outC->_L3_Open_SM1 = kcg_true;
  outC->_L1_ToPressButton_SM1.opening = kcg_true;
  outC->_L1_ToPressButton_SM1.opened = kcg_true;
  outC->_L1_ToPressButton_SM1.closing = kcg_true;
  outC->_L1_ToPressButton_SM1.closed = kcg_true;
  outC->_L2_ToPressButton_SM1 = kcg_true;
  outC->_L4_ToPressButton_SM1 = kcg_true;
  outC->_L5_ToPressButton_SM1 = kcg_true;
  outC->_L6_ToPressButton_SM1 = kcg_true;
  outC->_L8_ToPressButton_SM1 = kcg_true;
  outC->_L11_ToPressButton_SM1 = kcg_true;
  outC->_L4_DoorButton_SM1 = kcg_true;
  outC->_L5_DoorButton_SM1 = kcg_true;
  outC->_L6_DoorButton_SM1 = kcg_true;
  outC->_L10_DoorButton_SM1 = kcg_true;
  outC->_L13_Door_SM1 = kcg_true;
  outC->_L14_Door_SM1 = kcg_true;
  outC->_L15_Door_SM1.opening = kcg_true;
  outC->_L15_Door_SM1.opened = kcg_true;
  outC->_L15_Door_SM1.closing = kcg_true;
  outC->_L15_Door_SM1.closed = kcg_true;
  outC->secured = kcg_true;
  outC->retractBridge = kcg_true;
  outC->deployBridge = kcg_true;
  outC->closeDoor = kcg_true;
  outC->openDoor = kcg_true;
  outC->bridgeStatus.opening = kcg_true;
  outC->bridgeStatus.opened = kcg_true;
  outC->bridgeStatus.closing = kcg_true;
  outC->bridgeStatus.closed = kcg_true;
  outC->doorStatus.opening = kcg_true;
  outC->doorStatus.opened = kcg_true;
  outC->doorStatus.closing = kcg_true;
  outC->doorStatus.closed = kcg_true;
  /* SM1:Door:_L15=(Door#3)/ */ Door_init(&outC->Context_Door_3);
  /* SM1:DoorButton:_L4=(Button#1)/ */ Button_init(&outC->Context_Button_1);
  /* SM1:BridgeButton:_L1=(Button#7)/ */ Button_init(&outC->Context_Button_7);
  /* SM1:Bridge:_L8=(Bridge#5)/ */ Bridge_init(&outC->Context_Bridge_5);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_ToPressButton_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Controller_reset(outC_Controller *outC)
{
  /* SM1:Door:_L15=(Door#3)/ */ Door_reset(&outC->Context_Door_3);
  /* SM1:DoorButton:_L4=(Button#1)/ */ Button_reset(&outC->Context_Button_1);
  /* SM1:BridgeButton:_L1=(Button#7)/ */ Button_reset(&outC->Context_Button_7);
  /* SM1:Bridge:_L8=(Bridge#5)/ */ Bridge_reset(&outC->Context_Bridge_5);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_ToPressButton_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Controller.c
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

