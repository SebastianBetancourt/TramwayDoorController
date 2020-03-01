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

DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 3);
DECL_SCOPE(scope_2, 9);
DECL_SCOPE(scope_1, 4);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_Button_SSM_st_notPressed_Button(void* pHandle) { return *(SSM_ST_Button*)pHandle == SSM_st_notPressed_Button; }
static int isActive_SSM_ST_Button_SSM_st_pressed_Button(void* pHandle) { return *(SSM_ST_Button*)pHandle == SSM_st_pressed_Button; }
static int isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button(void* pHandle) { return *(SSM_TR_Button*)pHandle == SSM_TR_notPressed_pressed_1_notPressed_Button; }
static int isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button(void* pHandle) { return *(SSM_TR_Button*)pHandle == SSM_TR_pressed_notPressed_1_pressed_Button; }

/* mapping definition */


const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "Button/ ButtonButton:pressed:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_Button_SSM_TR_pressed_notPressed_1_pressed_Button, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_pressed_Button, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_pressed_Button, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_pressed_Button, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_pressed_Button, NULL, 1, 2 }
};
const MappingScope scope_5 = {
    "Button/ ButtonButton:pressed:",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "Button/ ButtonButton:notPressed:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_Button_SSM_TR_notPressed_pressed_1_notPressed_Button, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_notPressed_Button, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_notPressed_Button, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_notPressed_Button, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_notPressed_Button, NULL, 1, 2 }
};
const MappingScope scope_3 = {
    "Button/ ButtonButton:notPressed:",
    scope_3_entries, 3
};

const MappingEntry scope_2_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Button), (size_t)&outputs_ctx.Button_state_act, &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Button_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Button), (size_t)&outputs_ctx.Button_state_nxt, &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Button_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Button), (size_t)&outputs_ctx.Button_state_sel, &_Type_SSM_ST_Button_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Button), (size_t)&outputs_ctx.Button_fired_strong, &_Type_SSM_TR_Button_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Button), (size_t)&outputs_ctx.Button_fired, &_Type_SSM_TR_Button_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "notPressed:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_notPressed_Button, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "pressed:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_Button_SSM_st_pressed_Button, &scope_5, 1, 8 }
};
const MappingScope scope_2 = {
    "Button/ ButtonButton:",
    scope_2_entries, 9
};

const MappingEntry scope_1_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "activated", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.activated, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "clicked", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.clicked, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "deactivate", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.deactivate, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_AUTOMATON, "Button:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 3 }
};
const MappingScope scope_1 = {
    "Button/ Button",
    scope_1_entries, 4
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Button", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
