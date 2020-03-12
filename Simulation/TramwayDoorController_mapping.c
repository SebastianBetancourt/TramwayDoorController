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

DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 12);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 11);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 5);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 5);
DECL_SCOPE(scope_2, 11);
DECL_SCOPE(scope_1, 7);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Closing_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Closing_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_FullyClose_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_FullyOpen_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Opening_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Opening_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Closing_FullyClose_2_Closing_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Closing_Opening_1_Closing_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_FullyClose_Opening_1_FullyClose_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_FullyClose_Opening_1_FullyClose_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_FullyOpen_Closing_1_FullyOpen_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_FullyOpen_Closing_1_FullyOpen_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Opening_FullyOpen_1_Opening_SM1; }

/* mapping definition */


const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "Door/ DoorSM1:Closing:<1",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "Door/ DoorSM1:Closing:<2",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[12] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_Closing_FullyClose_2_Closing_SM1, &scope_10, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Closing_Opening_1_Closing_SM1, &scope_11, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_Closing_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9_Closing_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8_Closing_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_Closing_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L10_Closing_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, NULL, 1, 11 }
};
const MappingScope scope_9 = {
    "Door/ DoorSM1:Closing:",
    scope_9_entries, 12
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Door/ DoorSM1:Opening:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[11] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_Opening_FullyOpen_1_Opening_SM1, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_Opening_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L11_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L12_Opening_SM1, &_Type_kcg_int32_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_Opening_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_Opening_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_Opening_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, NULL, 1, 10 }
};
const MappingScope scope_7 = {
    "Door/ DoorSM1:Opening:",
    scope_7_entries, 11
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_FullyOpen_Closing_1_FullyOpen_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "Door/ DoorSM1:FullyOpen:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_FullyOpen_Closing_1_FullyOpen_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_FullyOpen_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_FullyOpen_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_FullyOpen_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_FullyOpen_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1, NULL, 1, 4 }
};
const MappingScope scope_5 = {
    "Door/ DoorSM1:FullyOpen:",
    scope_5_entries, 5
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_FullyClose_Opening_1_FullyClose_SM1, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "Door/ DoorSM1:FullyClose:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_FullyClose_Opening_1_FullyClose_SM1, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_FullyClose_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_FullyClose_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_FullyClose_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_FullyClose_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1, NULL, 1, 4 }
};
const MappingScope scope_3 = {
    "Door/ DoorSM1:FullyClose:",
    scope_3_entries, 5
};

const MappingEntry scope_2_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "FullyClose:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyClose_SM1, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "FullyOpen:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_FullyOpen_SM1, &scope_5, 1, 8 },
    /* 9 */ { MAP_STATE, "Opening:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Opening_SM1, &scope_7, 1, 9 },
    /* 10 */ { MAP_STATE, "Closing:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Closing_SM1, &scope_9, 1, 10 }
};
const MappingScope scope_2 = {
    "Door/ DoorSM1:",
    scope_2_entries, 11
};

const MappingEntry scope_1_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "opening", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.opening, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "closing", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.closing, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "opened", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.opened, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "closed", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.closed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "openRequest", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.openRequest, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "closeRequest", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.closeRequest, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 6 }
};
const MappingScope scope_1 = {
    "Door/ Door",
    scope_1_entries, 7
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Door", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
