/* TramwayDoorController_mapping.c */

#include "TramwayDoorController_type.h"
#include "TramwayDoorController_interface.h"
#include "TramwayDoorController_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_53, 5);
DECL_SCOPE(scope_52, 1);
DECL_SCOPE(scope_51, 1);
DECL_SCOPE(scope_50, 13);
DECL_SCOPE(scope_49, 1);
DECL_SCOPE(scope_48, 12);
DECL_SCOPE(scope_47, 5);
DECL_SCOPE(scope_46, 1);
DECL_SCOPE(scope_45, 1);
DECL_SCOPE(scope_44, 7);
DECL_SCOPE(scope_43, 12);
DECL_SCOPE(scope_42, 2);
DECL_SCOPE(scope_41, 1);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 8);
DECL_SCOPE(scope_38, 1);
DECL_SCOPE(scope_37, 6);
DECL_SCOPE(scope_36, 1);
DECL_SCOPE(scope_35, 2);
DECL_SCOPE(scope_34, 1);
DECL_SCOPE(scope_33, 1);
DECL_SCOPE(scope_32, 4);
DECL_SCOPE(scope_31, 1);
DECL_SCOPE(scope_30, 1);
DECL_SCOPE(scope_29, 9);
DECL_SCOPE(scope_28, 1);
DECL_SCOPE(scope_27, 2);
DECL_SCOPE(scope_26, 1);
DECL_SCOPE(scope_25, 2);
DECL_SCOPE(scope_24, 9);
DECL_SCOPE(scope_23, 2);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 6);
DECL_SCOPE(scope_20, 5);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 1);
DECL_SCOPE(scope_17, 13);
DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 12);
DECL_SCOPE(scope_14, 5);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 7);
DECL_SCOPE(scope_10, 12);
DECL_SCOPE(scope_9, 2);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 8);
DECL_SCOPE(scope_3, 14);
DECL_SCOPE(scope_2, 4);
DECL_SCOPE(scope_1, 12);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_Button_SSM_st_notPressed_Button(void* pHandle) { return *(SSM_ST_Button*)pHandle == SSM_st_notPressed_Button; }
static int isActive_SSM_ST_Button_SSM_st_pressed_Button(void* pHandle) { return *(SSM_ST_Button*)pHandle == SSM_st_pressed_Button; }
static int isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_BridgeButton_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Bridge_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Bridge_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_DoorButton_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Door_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Door_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Open_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Open_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_ToLeaveStation_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_ToLeaveStation_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_ToPressButton_SM1; }
static int isActive_SSM_ST_SM2_SSM_st_Closing_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_Closing_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_FullyClose_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_FullyOpen_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_Opening_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_Opening_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_ToMove_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_ToMove_SM2; }
static int isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button(void* pHandle) { return *(SSM_TR_Button*)pHandle == SSM_TR_notPressed_pressed_1_notPressed_Button; }
static int isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button(void* pHandle) { return *(SSM_TR_Button*)pHandle == SSM_TR_pressed_notPressed_1_pressed_Button; }
static int isActive_SSM_TR_SM1_SSM_TR_BridgeButton_Door_1_BridgeButton_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_BridgeButton_Door_1_BridgeButton_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Bridge_Door_2_Bridge_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Bridge_Door_2_Bridge_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_DoorButton_Door_1_DoorButton_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_DoorButton_Door_1_DoorButton_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_1_Door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Door_Bridge_1_Door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_2_Door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Door_Bridge_2_Door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Door_Open_3_Door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Door_Open_3_Door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Door_ToLeaveStation_4_Door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Door_ToLeaveStation_4_Door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Open_BridgeButton_1_Open_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Open_BridgeButton_1_Open_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Open_Door_2_Open_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Open_Door_2_Open_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1; }
static int isActive_SSM_TR_SM2__4_SSM_TR_Closing_Opening_1_Closing_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == _4_SSM_TR_Closing_Opening_1_Closing_SM2; }
static int isActive_SSM_TR_SM2__5_SSM_TR_ToMove_Opening_1_ToMove_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == _5_SSM_TR_ToMove_Opening_1_ToMove_SM2; }
static int isActive_SSM_TR_SM2__6_SSM_TR_ToMove_Closing_2_ToMove_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == _6_SSM_TR_ToMove_Closing_2_ToMove_SM2; }
static int isActive_SSM_TR_SM2__7_SSM_TR_Closing_FullyClose_2_Closing_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == _7_SSM_TR_Closing_FullyClose_2_Closing_SM2; }
static int isActive_SSM_TR_SM2__8_SSM_TR_Opening_FullyOpen_1_Opening_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == _8_SSM_TR_Opening_FullyOpen_1_Opening_SM2; }
static int isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_Closing_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_FullyClose_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_FullyOpen_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_Opening_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_ToMove_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_Closing_FullyClose_2_Closing_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_Closing_Opening_1_Closing_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_Opening_FullyOpen_1_Opening_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Closing_2_ToMove_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_ToMove_Closing_2_ToMove_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Opening_1_ToMove_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_ToMove_Opening_1_ToMove_SM1; }

/* mapping definition */


const MappingEntry scope_53_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(status), offsetof(outC_Bridge, _L14_FullyClose_SM2), &_Type_status_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L13_FullyClose_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L12_FullyClose_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L11_FullyClose_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L10_FullyClose_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, NULL, 1, 4 }
};
const MappingScope scope_53 = {
    "Bridge/ BridgeSM2:FullyClose:",
    scope_53_entries, 5
};

const MappingEntry scope_52_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__4_SSM_TR_Closing_Opening_1_Closing_SM2, NULL, 1, 0 }
};
const MappingScope scope_52 = {
    "Bridge/ BridgeSM2:Closing:<1",
    scope_52_entries, 1
};

const MappingEntry scope_51_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_43_entries[6], isActive_SSM_TR_SM2__7_SSM_TR_Closing_FullyClose_2_Closing_SM2, NULL, 1, 0 }
};
const MappingScope scope_51 = {
    "Bridge/ BridgeSM2:Closing:<2",
    scope_51_entries, 1
};

const MappingEntry scope_50_entries[13] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_43_entries[6], isActive_SSM_TR_SM2__7_SSM_TR_Closing_FullyClose_2_Closing_SM2, &scope_51, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__4_SSM_TR_Closing_Opening_1_Closing_SM2, &scope_52, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L53_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L52_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L51_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L50_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L48", NULL, sizeof(status), offsetof(outC_Bridge, _L48_Closing_SM2), &_Type_status_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, &scope_2, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L47_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L46_Closing_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L45_Closing_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L44_Closing_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L43_Closing_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L54_Closing_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, NULL, 1, 12 }
};
const MappingScope scope_50 = {
    "Bridge/ BridgeSM2:Closing:",
    scope_50_entries, 13
};

const MappingEntry scope_49_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_43_entries[6], isActive_SSM_TR_SM2__8_SSM_TR_Opening_FullyOpen_1_Opening_SM2, NULL, 1, 0 }
};
const MappingScope scope_49 = {
    "Bridge/ BridgeSM2:Opening:<1",
    scope_49_entries, 1
};

const MappingEntry scope_48_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_43_entries[6], isActive_SSM_TR_SM2__8_SSM_TR_Opening_FullyOpen_1_Opening_SM2, &scope_49, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L4_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L5_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L6_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L7_Opening_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L9_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L11_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_Bridge, _L12_Opening_SM2), &_Type_kcg_int32_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L25_Opening_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L24_Opening_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(status), offsetof(outC_Bridge, _L23_Opening_SM2), &_Type_status_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, &scope_2, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L22_Opening_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, NULL, 1, 11 }
};
const MappingScope scope_48 = {
    "Bridge/ BridgeSM2:Opening:",
    scope_48_entries, 12
};

const MappingEntry scope_47_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(status), offsetof(outC_Bridge, _L14_FullyOpen_SM2), &_Type_status_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L13_FullyOpen_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L12_FullyOpen_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L11_FullyOpen_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L10_FullyOpen_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, NULL, 1, 4 }
};
const MappingScope scope_47 = {
    "Bridge/ BridgeSM2:FullyOpen:",
    scope_47_entries, 5
};

const MappingEntry scope_46_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__6_SSM_TR_ToMove_Closing_2_ToMove_SM2, NULL, 1, 0 }
};
const MappingScope scope_46 = {
    "Bridge/ BridgeSM2:ToMove:<2",
    scope_46_entries, 1
};

const MappingEntry scope_45_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__5_SSM_TR_ToMove_Opening_1_ToMove_SM2, NULL, 1, 0 }
};
const MappingScope scope_45 = {
    "Bridge/ BridgeSM2:ToMove:<1",
    scope_45_entries, 1
};

const MappingEntry scope_44_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__5_SSM_TR_ToMove_Opening_1_ToMove_SM2, &scope_45, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_43_entries[5], isActive_SSM_TR_SM2__6_SSM_TR_ToMove_Closing_2_ToMove_SM2, &scope_46, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(status), offsetof(outC_Bridge, _L6_ToMove_SM2), &_Type_status_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L7_ToMove_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L11_ToMove_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L12_ToMove_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, _L13_ToMove_SM2), &_Type_kcg_bool_Utils, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, NULL, 1, 6 }
};
const MappingScope scope_44 = {
    "Bridge/ BridgeSM2:ToMove:",
    scope_44_entries, 7
};

const MappingEntry scope_43_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_Bridge, SM2_state_act), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, SM2_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_Bridge, SM2_state_nxt), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Bridge, SM2_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_Bridge, SM2_state_sel), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2), offsetof(outC_Bridge, SM2_fired_strong), &_Type_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2), offsetof(outC_Bridge, SM2_fired), &_Type_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "ToMove:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_ToMove_SM2, &scope_44, 1, 7 },
    /* 8 */ { MAP_STATE, "FullyOpen:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyOpen_SM2, &scope_47, 1, 8 },
    /* 9 */ { MAP_STATE, "Opening:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Opening_SM2, &scope_48, 1, 9 },
    /* 10 */ { MAP_STATE, "Closing:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_Closing_SM2, &scope_50, 1, 10 },
    /* 11 */ { MAP_STATE, "FullyClose:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_SSM_ST_SM2_SSM_st_FullyClose_SM2, &scope_53, 1, 11 }
};
const MappingScope scope_43 = {
    "Bridge/ BridgeSM2:",
    scope_43_entries, 12
};

const MappingEntry scope_42_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "bridgeStatus", NULL, sizeof(status), offsetof(outC_Bridge, bridgeStatus), &_Type_status_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 1 }
};
const MappingScope scope_42 = {
    "Bridge/ Bridge",
    scope_42_entries, 2
};

const MappingEntry scope_41_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Bridge_Door_2_Bridge_SM1, NULL, 1, 0 }
};
const MappingScope scope_41 = {
    "Controller/ ControllerSM1:Bridge:<2",
    scope_41_entries, 1
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1, NULL, 1, 0 }
};
const MappingScope scope_40 = {
    "Controller/ ControllerSM1:Bridge:<1",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1, &scope_40, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Bridge_Door_2_Bridge_SM1, &scope_41, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Bridge_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_Bridge_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(status), (size_t)&outputs_ctx._L8_Bridge_SM1, &_Type_status_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9_Bridge_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11_Bridge_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Bridge 5", NULL, sizeof(outC_Bridge), (size_t)&outputs_ctx.Context_Bridge_5, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, &scope_42, 1, 7 }
};
const MappingScope scope_39 = {
    "Controller/ ControllerSM1:Bridge:",
    scope_39_entries, 8
};

const MappingEntry scope_38_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_BridgeButton_Door_1_BridgeButton_SM1, NULL, 1, 0 }
};
const MappingScope scope_38 = {
    "Controller/ ControllerSM1:BridgeButton:<1",
    scope_38_entries, 1
};

const MappingEntry scope_37_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_BridgeButton_Door_1_BridgeButton_SM1, &scope_38, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_BridgeButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_BridgeButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_BridgeButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_BridgeButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "Button 7", NULL, sizeof(outC_Button), (size_t)&outputs_ctx.Context_Button_7, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, &scope_23, 1, 5 }
};
const MappingScope scope_37 = {
    "Controller/ ControllerSM1:BridgeButton:",
    scope_37_entries, 6
};

const MappingEntry scope_36_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1, NULL, 1, 0 }
};
const MappingScope scope_36 = {
    "Controller/ ControllerSM1:ToLeaveStation:<1",
    scope_36_entries, 1
};

const MappingEntry scope_35_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1, &scope_36, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_ToLeaveStation_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToLeaveStation_SM1, NULL, 1, 1 }
};
const MappingScope scope_35 = {
    "Controller/ ControllerSM1:ToLeaveStation:",
    scope_35_entries, 2
};

const MappingEntry scope_34_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Open_Door_2_Open_SM1, NULL, 1, 0 }
};
const MappingScope scope_34 = {
    "Controller/ ControllerSM1:Open:<2",
    scope_34_entries, 1
};

const MappingEntry scope_33_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Open_BridgeButton_1_Open_SM1, NULL, 1, 0 }
};
const MappingScope scope_33 = {
    "Controller/ ControllerSM1:Open:<1",
    scope_33_entries, 1
};

const MappingEntry scope_32_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Open_BridgeButton_1_Open_SM1, &scope_33, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Open_Door_2_Open_SM1, &scope_34, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Open_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Open_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Open_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Open_SM1, NULL, 1, 3 }
};
const MappingScope scope_32 = {
    "Controller/ ControllerSM1:Open:",
    scope_32_entries, 4
};

const MappingEntry scope_31_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1, NULL, 1, 0 }
};
const MappingScope scope_31 = {
    "Controller/ ControllerSM1:ToPressButton:<2",
    scope_31_entries, 1
};

const MappingEntry scope_30_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1, NULL, 1, 0 }
};
const MappingScope scope_30 = {
    "Controller/ ControllerSM1:ToPressButton:<1",
    scope_30_entries, 1
};

const MappingEntry scope_29_entries[9] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1, &scope_30, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1, &scope_31, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(status), (size_t)&outputs_ctx._L1_ToPressButton_SM1, &_Type_status_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11_ToPressButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, NULL, 1, 8 }
};
const MappingScope scope_29 = {
    "Controller/ ControllerSM1:ToPressButton:",
    scope_29_entries, 9
};

const MappingEntry scope_28_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_24_entries[5], isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button, NULL, 1, 0 }
};
const MappingScope scope_28 = {
    "Button/ ButtonButton:pressed:<1",
    scope_28_entries, 1
};

const MappingEntry scope_27_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_24_entries[5], isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button, &scope_28, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Button, _L1_pressed_Button), &_Type_kcg_bool_Utils, &scope_24_entries[0], isActive_SSM_ST_Button_SSM_st_pressed_Button, NULL, 1, 1 }
};
const MappingScope scope_27 = {
    "Button/ ButtonButton:pressed:",
    scope_27_entries, 2
};

const MappingEntry scope_26_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_24_entries[5], isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button, NULL, 1, 0 }
};
const MappingScope scope_26 = {
    "Button/ ButtonButton:notPressed:<1",
    scope_26_entries, 1
};

const MappingEntry scope_25_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_24_entries[5], isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button, &scope_26, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Button, _L2_notPressed_Button), &_Type_kcg_bool_Utils, &scope_24_entries[0], isActive_SSM_ST_Button_SSM_st_notPressed_Button, NULL, 1, 1 }
};
const MappingScope scope_25 = {
    "Button/ ButtonButton:notPressed:",
    scope_25_entries, 2
};

const MappingEntry scope_24_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Button), offsetof(outC_Button, Button_state_act), &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Button, Button_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Button), offsetof(outC_Button, Button_state_nxt), &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Button, Button_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Button), offsetof(outC_Button, Button_state_sel), &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Button), offsetof(outC_Button, Button_fired_strong), &_Type_SSM_TR_Button_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Button), offsetof(outC_Button, Button_fired), &_Type_SSM_TR_Button_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "notPressed:", NULL, 0, 0, NULL, &scope_24_entries[0], isActive_SSM_ST_Button_SSM_st_notPressed_Button, &scope_25, 1, 7 },
    /* 8 */ { MAP_STATE, "pressed:", NULL, 0, 0, NULL, &scope_24_entries[0], isActive_SSM_ST_Button_SSM_st_pressed_Button, &scope_27, 1, 8 }
};
const MappingScope scope_24 = {
    "Button/ ButtonButton:",
    scope_24_entries, 9
};

const MappingEntry scope_23_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "activated", NULL, sizeof(kcg_bool), offsetof(outC_Button, activated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "Button:", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 1 }
};
const MappingScope scope_23 = {
    "Button/ Button",
    scope_23_entries, 2
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_DoorButton_Door_1_DoorButton_SM1, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "Controller/ ControllerSM1:DoorButton:<1",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_DoorButton_Door_1_DoorButton_SM1, &scope_22, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_DoorButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_DoorButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_DoorButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_DoorButton_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "Button 1", NULL, sizeof(outC_Button), (size_t)&outputs_ctx.Context_Button_1, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, &scope_23, 1, 5 }
};
const MappingScope scope_21 = {
    "Controller/ ControllerSM1:DoorButton:",
    scope_21_entries, 6
};

const MappingEntry scope_20_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(status), offsetof(outC_Door, _L14_FullyClose_SM1), &_Type_status_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L13_FullyClose_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L12_FullyClose_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L11_FullyClose_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L10_FullyClose_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 4 }
};
const MappingScope scope_20 = {
    "Door/ DoorSM1:FullyClose:",
    scope_20_entries, 5
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "Door/ DoorSM1:Closing:<1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[6], isActive__3_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1, NULL, 1, 0 }
};
const MappingScope scope_18 = {
    "Door/ DoorSM1:Closing:<2",
    scope_18_entries, 1
};

const MappingEntry scope_17_entries[13] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_10_entries[6], isActive__3_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1, &scope_18, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1, &scope_19, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L53_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L52_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L51_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L50_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L48", NULL, sizeof(status), offsetof(outC_Door, _L48_Closing_SM1), &_Type_status_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, &scope_2, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L47_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L46_Closing_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L45_Closing_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L44_Closing_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L43_Closing_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L54_Closing_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 12 }
};
const MappingScope scope_17 = {
    "Door/ DoorSM1:Closing:",
    scope_17_entries, 13
};

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[6], isActive__3_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1, NULL, 1, 0 }
};
const MappingScope scope_16 = {
    "Door/ DoorSM1:Opening:<1",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[6], isActive__3_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L4_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L5_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L6_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L7_Opening_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L9_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L11_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_Door, _L12_Opening_SM1), &_Type_kcg_int32_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L25_Opening_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L24_Opening_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(status), offsetof(outC_Door, _L23_Opening_SM1), &_Type_status_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, &scope_2, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L22_Opening_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 11 }
};
const MappingScope scope_15 = {
    "Door/ DoorSM1:Opening:",
    scope_15_entries, 12
};

const MappingEntry scope_14_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(status), offsetof(outC_Door, _L14_FullyOpen_SM1), &_Type_status_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L13_FullyOpen_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L12_FullyOpen_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L11_FullyOpen_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L10_FullyOpen_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 4 }
};
const MappingScope scope_14 = {
    "Door/ DoorSM1:FullyOpen:",
    scope_14_entries, 5
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Closing_2_ToMove_SM1, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "Door/ DoorSM1:ToMove:<2",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Opening_1_ToMove_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "Door/ DoorSM1:ToMove:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Opening_1_ToMove_SM1, &scope_12, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_10_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_ToMove_Closing_2_ToMove_SM1, &scope_13, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(status), offsetof(outC_Door, _L6_ToMove_SM1), &_Type_status_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L7_ToMove_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L11_ToMove_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L12_ToMove_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Door, _L13_ToMove_SM1), &_Type_kcg_bool_Utils, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, NULL, 1, 6 }
};
const MappingScope scope_11 = {
    "Door/ DoorSM1:ToMove:",
    scope_11_entries, 7
};

const MappingEntry scope_10_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_Door, SM1_state_act), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Door, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_Door, SM1_state_nxt), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Door, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_Door, SM1_state_sel), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_Door, SM1_fired_strong), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_Door, SM1_fired), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "ToMove:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_ToMove_SM1, &scope_11, 1, 7 },
    /* 8 */ { MAP_STATE, "FullyOpen:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyOpen_SM1, &scope_14, 1, 8 },
    /* 9 */ { MAP_STATE, "Opening:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Opening_SM1, &scope_15, 1, 9 },
    /* 10 */ { MAP_STATE, "Closing:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Closing_SM1, &scope_17, 1, 10 },
    /* 11 */ { MAP_STATE, "FullyClose:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive__2_SSM_ST_SM1_SSM_st_FullyClose_SM1, &scope_20, 1, 11 }
};
const MappingScope scope_10 = {
    "Door/ DoorSM1:",
    scope_10_entries, 12
};

const MappingEntry scope_9_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "doorStatus", NULL, sizeof(status), offsetof(outC_Door, doorStatus), &_Type_status_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 1 }
};
const MappingScope scope_9 = {
    "Door/ Door",
    scope_9_entries, 2
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_ToLeaveStation_4_Door_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Controller/ ControllerSM1:Door:<4",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Open_3_Door_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "Controller/ ControllerSM1:Door:<3",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_2_Door_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "Controller/ ControllerSM1:Door:<2",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_1_Door_SM1, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "Controller/ ControllerSM1:Door:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_1_Door_SM1, &scope_5, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Bridge_2_Door_SM1, &scope_6, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_Open_3_Door_SM1, &scope_7, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_SM1_SSM_TR_Door_ToLeaveStation_4_Door_SM1, &scope_8, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_Door_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Door_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_Door_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Door_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(status), (size_t)&outputs_ctx._L15_Door_SM1, &_Type_status_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Door_SM1, &scope_2, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Door 3", NULL, sizeof(outC_Door), (size_t)&outputs_ctx.Context_Door_3, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Door_SM1, &scope_9, 1, 7 }
};
const MappingScope scope_4 = {
    "Controller/ ControllerSM1:Door:",
    scope_4_entries, 8
};

const MappingEntry scope_3_entries[14] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Door:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Door_SM1, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "DoorButton:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_DoorButton_SM1, &scope_21, 1, 8 },
    /* 9 */ { MAP_STATE, "ToPressButton:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToPressButton_SM1, &scope_29, 1, 9 },
    /* 10 */ { MAP_STATE, "Open:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Open_SM1, &scope_32, 1, 10 },
    /* 11 */ { MAP_STATE, "ToLeaveStation:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_ToLeaveStation_SM1, &scope_35, 1, 11 },
    /* 12 */ { MAP_STATE, "BridgeButton:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_BridgeButton_SM1, &scope_37, 1, 12 },
    /* 13 */ { MAP_STATE, "Bridge:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Bridge_SM1, &scope_39, 1, 13 }
};
const MappingScope scope_3 = {
    "Controller/ ControllerSM1:",
    scope_3_entries, 14
};

const MappingEntry scope_2_entries[4] = {
    /* 0 */ { MAP_FIELD, ".opening", NULL, sizeof(kcg_bool), offsetof(status, opening), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".opened", NULL, sizeof(kcg_bool), offsetof(status, opened), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".closing", NULL, sizeof(kcg_bool), offsetof(status, closing), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".closed", NULL, sizeof(kcg_bool), offsetof(status, closed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_2 = {
    "status",
    scope_2_entries, 4
};

const MappingEntry scope_1_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "doorStatus", NULL, sizeof(status), (size_t)&outputs_ctx.doorStatus, &_Type_status_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "bridgeStatus", NULL, sizeof(status), (size_t)&outputs_ctx.bridgeStatus, &_Type_status_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "openDoor", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.openDoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "closeDoor", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.closeDoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "deployBridge", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.deployBridge, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "retractBridge", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.retractBridge, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "secured", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.secured, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "requireDoor", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.requireDoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "requireBridge", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.requireBridge, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INPUT, "immDeparture", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.immDeparture, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INPUT, "inStation", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.inStation, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 11 }
};
const MappingScope scope_1 = {
    "Controller/ Controller",
    scope_1_entries, 12
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Controller", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
