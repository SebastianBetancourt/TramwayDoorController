#include "TramwayDoorController_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include <SmuConfig.h>

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** _2_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _2_SSM_ST_SM1_values[] = {
    { "ToMove", SSM_st_ToMove_SM1},
    { "ToMove", SSM_st_ToMove_SM1},
    { "FullyOpen", SSM_st_FullyOpen_SM1},
    { "FullyOpen", SSM_st_FullyOpen_SM1},
    { "Opening", SSM_st_Opening_SM1},
    { "Opening", SSM_st_Opening_SM1},
    { "Closing", SSM_st_Closing_SM1},
    { "Closing", SSM_st_Closing_SM1},
    { "FullyClose", SSM_st_FullyClose_SM1},
    { "FullyClose", SSM_st_FullyClose_SM1},
};
const int _2_SSM_ST_SM1_nb_values = 10;

int _2_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_2_SSM_ST_SM1*)pValue, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__2_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _2_SSM_ST_SM1 rTemp;
    return string_to__2_SSM_ST_SM1(str, &rTemp, endptr);
}

int string_to__2_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_2_SSM_ST_SM1*)pValue = (_2_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__2_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

int is__2_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__2_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_2_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_2_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_2_SSM_ST_SM1*)pValue1), (int)(*(_2_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__2_SSM_ST_SM1(void *pValue)
{
    *(_2_SSM_ST_SM1*)pValue = SSM_st_ToMove_SM1;
    return 1;
}

int release__2_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__2_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_2_SSM_ST_SM1*)pToValue) = *((_2_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__2_SSM_ST_SM1_Utils = {
    _2_SSM_ST_SM1_to_string,
    check__2_SSM_ST_SM1_string,
    string_to__2_SSM_ST_SM1,
    is__2_SSM_ST_SM1_double_conversion_allowed,
    _2_SSM_ST_SM1_to_double,
    is__2_SSM_ST_SM1_long_conversion_allowed,
    _2_SSM_ST_SM1_to_long,
    compare__2_SSM_ST_SM1,
    get__2_SSM_ST_SM1_signature,
    init__2_SSM_ST_SM1,
    release__2_SSM_ST_SM1,
    copy__2_SSM_ST_SM1,
    sizeof(_2_SSM_ST_SM1)
};

/****************************************************************
 ** _3_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _3_SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_ToMove_Opening_1_ToMove_SM1", SSM_TR_ToMove_Opening_1_ToMove_SM1},
    { "SSM_TR_ToMove_Opening_1_ToMove_SM1", SSM_TR_ToMove_Opening_1_ToMove_SM1},
    { "SSM_TR_ToMove_Closing_2_ToMove_SM1", SSM_TR_ToMove_Closing_2_ToMove_SM1},
    { "SSM_TR_ToMove_Closing_2_ToMove_SM1", SSM_TR_ToMove_Closing_2_ToMove_SM1},
    { "SSM_TR_Opening_FullyOpen_1_Opening_SM1", SSM_TR_Opening_FullyOpen_1_Opening_SM1},
    { "SSM_TR_Opening_FullyOpen_1_Opening_SM1", SSM_TR_Opening_FullyOpen_1_Opening_SM1},
    { "SSM_TR_Closing_Opening_1_Closing_SM1", SSM_TR_Closing_Opening_1_Closing_SM1},
    { "SSM_TR_Closing_Opening_1_Closing_SM1", SSM_TR_Closing_Opening_1_Closing_SM1},
    { "SSM_TR_Closing_FullyClose_2_Closing_SM1", SSM_TR_Closing_FullyClose_2_Closing_SM1},
    { "SSM_TR_Closing_FullyClose_2_Closing_SM1", SSM_TR_Closing_FullyClose_2_Closing_SM1},
};
const int _3_SSM_TR_SM1_nb_values = 12;

int _3_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_TR_SM1*)pValue, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__3_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _3_SSM_TR_SM1 rTemp;
    return string_to__3_SSM_TR_SM1(str, &rTemp, endptr);
}

int string_to__3_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_TR_SM1*)pValue = (_3_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__3_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

int is__3_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__3_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_3_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_TR_SM1*)pValue1), (int)(*(_3_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__3_SSM_TR_SM1(void *pValue)
{
    *(_3_SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

int release__3_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__3_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_3_SSM_TR_SM1*)pToValue) = *((_3_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__3_SSM_TR_SM1_Utils = {
    _3_SSM_TR_SM1_to_string,
    check__3_SSM_TR_SM1_string,
    string_to__3_SSM_TR_SM1,
    is__3_SSM_TR_SM1_double_conversion_allowed,
    _3_SSM_TR_SM1_to_double,
    is__3_SSM_TR_SM1_long_conversion_allowed,
    _3_SSM_TR_SM1_to_long,
    compare__3_SSM_TR_SM1,
    get__3_SSM_TR_SM1_signature,
    init__3_SSM_TR_SM1,
    release__3_SSM_TR_SM1,
    copy__3_SSM_TR_SM1,
    sizeof(_3_SSM_TR_SM1)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, &rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, &rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, &rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, &rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, &rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, &rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, &rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, &rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, &rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, &rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, &rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** SSM_ST_Button 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_ButtonVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_ButtonVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_ButtonVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_ButtonVTable;
#endif

static SimEnumValUtils SSM_ST_Button_values[] = {
    { "notPressed", SSM_st_notPressed_Button},
    { "notPressed", SSM_st_notPressed_Button},
    { "pressed", SSM_st_pressed_Button},
    { "pressed", SSM_st_pressed_Button},
};
const int SSM_ST_Button_nb_values = 4;

int SSM_ST_Button_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_ButtonVTable != NULL
        && pSimSSM_ST_ButtonVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_ButtonVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_Button*)pValue, SSM_ST_Button_values, SSM_ST_Button_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_Button_string(const char *str, char **endptr)
{
    static SSM_ST_Button rTemp;
    return string_to_SSM_ST_Button(str, &rTemp, endptr);
}

int string_to_SSM_ST_Button(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_ButtonVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_ButtonVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_Button_values, SSM_ST_Button_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_Button*)pValue = (SSM_ST_Button)nTemp;
    }
    return nRet;
}

int is_SSM_ST_Button_double_conversion_allowed()
{
    if (pSimSSM_ST_ButtonVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_ButtonVTable);
    }
    return 1;
}

int SSM_ST_Button_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_ButtonVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_ButtonVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_Button*)pValue);
    return 1;
}

int is_SSM_ST_Button_long_conversion_allowed()
{
    if (pSimSSM_ST_ButtonVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_ButtonVTable);
    }
    return 1;
}

int SSM_ST_Button_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_ButtonVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_ButtonVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_Button*)pValue);
    return 1;
}

void compare_SSM_ST_Button(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_ButtonVTable != NULL
        && pSimSSM_ST_ButtonVTable->m_version >= Scv612
        && pSimSSM_ST_ButtonVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_ButtonVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_ButtonVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_ButtonVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_Button*)pValue1), (int)(*(SSM_ST_Button*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_Button_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_Button_values, SSM_ST_Button_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_Button(void *pValue)
{
    *(SSM_ST_Button*)pValue = SSM_st_notPressed_Button;
    return 1;
}

int release_SSM_ST_Button(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_Button(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_Button*)pToValue) = *((SSM_ST_Button*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_Button_Utils = {
    SSM_ST_Button_to_string,
    check_SSM_ST_Button_string,
    string_to_SSM_ST_Button,
    is_SSM_ST_Button_double_conversion_allowed,
    SSM_ST_Button_to_double,
    is_SSM_ST_Button_long_conversion_allowed,
    SSM_ST_Button_to_long,
    compare_SSM_ST_Button,
    get_SSM_ST_Button_signature,
    init_SSM_ST_Button,
    release_SSM_ST_Button,
    copy_SSM_ST_Button,
    sizeof(SSM_ST_Button)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Door", SSM_st_Door_SM1},
    { "Door", SSM_st_Door_SM1},
    { "DoorButton", SSM_st_DoorButton_SM1},
    { "DoorButton", SSM_st_DoorButton_SM1},
    { "ToPressButton", SSM_st_ToPressButton_SM1},
    { "ToPressButton", SSM_st_ToPressButton_SM1},
    { "Open", SSM_st_Open_SM1},
    { "Open", SSM_st_Open_SM1},
    { "ToLeaveStation", SSM_st_ToLeaveStation_SM1},
    { "ToLeaveStation", SSM_st_ToLeaveStation_SM1},
    { "BridgeButton", SSM_st_BridgeButton_SM1},
    { "BridgeButton", SSM_st_BridgeButton_SM1},
    { "Bridge", SSM_st_Bridge_SM1},
    { "Bridge", SSM_st_Bridge_SM1},
};
const int SSM_ST_SM1_nb_values = 14;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, &rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM1(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_Door_SM1;
    return 1;
}

int release_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM1*)pToValue) = *((SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    init_SSM_ST_SM1,
    release_SSM_ST_SM1,
    copy_SSM_ST_SM1,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_ST_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM2VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM2VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM2VTable;
#endif

static SimEnumValUtils SSM_ST_SM2_values[] = {
    { "ToMove", SSM_st_ToMove_SM2},
    { "ToMove", SSM_st_ToMove_SM2},
    { "FullyOpen", SSM_st_FullyOpen_SM2},
    { "FullyOpen", SSM_st_FullyOpen_SM2},
    { "Opening", SSM_st_Opening_SM2},
    { "Opening", SSM_st_Opening_SM2},
    { "Closing", SSM_st_Closing_SM2},
    { "Closing", SSM_st_Closing_SM2},
    { "FullyClose", SSM_st_FullyClose_SM2},
    { "FullyClose", SSM_st_FullyClose_SM2},
};
const int SSM_ST_SM2_nb_values = 10;

int SSM_ST_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM2VTable != NULL
        && pSimSSM_ST_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2*)pValue, SSM_ST_SM2_values, SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM2_string(const char *str, char **endptr)
{
    static SSM_ST_SM2 rTemp;
    return string_to_SSM_ST_SM2(str, &rTemp, endptr);
}

int string_to_SSM_ST_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_values, SSM_ST_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2*)pValue = (SSM_ST_SM2)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_double_conversion_allowed()
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM2VTable);
    }
    return 1;
}

int SSM_ST_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM2*)pValue);
    return 1;
}

int is_SSM_ST_SM2_long_conversion_allowed()
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM2VTable);
    }
    return 1;
}

int SSM_ST_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM2VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM2*)pValue);
    return 1;
}

void compare_SSM_ST_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2VTable != NULL
        && pSimSSM_ST_SM2VTable->m_version >= Scv612
        && pSimSSM_ST_SM2VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2*)pValue1), (int)(*(SSM_ST_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM2_values, SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM2(void *pValue)
{
    *(SSM_ST_SM2*)pValue = SSM_st_ToMove_SM2;
    return 1;
}

int release_SSM_ST_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM2(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM2*)pToValue) = *((SSM_ST_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM2_Utils = {
    SSM_ST_SM2_to_string,
    check_SSM_ST_SM2_string,
    string_to_SSM_ST_SM2,
    is_SSM_ST_SM2_double_conversion_allowed,
    SSM_ST_SM2_to_double,
    is_SSM_ST_SM2_long_conversion_allowed,
    SSM_ST_SM2_to_long,
    compare_SSM_ST_SM2,
    get_SSM_ST_SM2_signature,
    init_SSM_ST_SM2,
    release_SSM_ST_SM2,
    copy_SSM_ST_SM2,
    sizeof(SSM_ST_SM2)
};

/****************************************************************
 ** SSM_TR_Button 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_ButtonVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_ButtonVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_ButtonVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_ButtonVTable;
#endif

static SimEnumValUtils SSM_TR_Button_values[] = {
    { "SSM_TR_no_trans_Button", SSM_TR_no_trans_Button},
    { "SSM_TR_no_trans_Button", SSM_TR_no_trans_Button},
    { "SSM_TR_notPressed_pressed_1_notPressed_Button", SSM_TR_notPressed_pressed_1_notPressed_Button},
    { "SSM_TR_notPressed_pressed_1_notPressed_Button", SSM_TR_notPressed_pressed_1_notPressed_Button},
    { "SSM_TR_pressed_notPressed_1_pressed_Button", SSM_TR_pressed_notPressed_1_pressed_Button},
    { "SSM_TR_pressed_notPressed_1_pressed_Button", SSM_TR_pressed_notPressed_1_pressed_Button},
};
const int SSM_TR_Button_nb_values = 6;

int SSM_TR_Button_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_ButtonVTable != NULL
        && pSimSSM_TR_ButtonVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_ButtonVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_Button*)pValue, SSM_TR_Button_values, SSM_TR_Button_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_Button_string(const char *str, char **endptr)
{
    static SSM_TR_Button rTemp;
    return string_to_SSM_TR_Button(str, &rTemp, endptr);
}

int string_to_SSM_TR_Button(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_ButtonVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_ButtonVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_Button_values, SSM_TR_Button_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_Button*)pValue = (SSM_TR_Button)nTemp;
    }
    return nRet;
}

int is_SSM_TR_Button_double_conversion_allowed()
{
    if (pSimSSM_TR_ButtonVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_ButtonVTable);
    }
    return 1;
}

int SSM_TR_Button_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_ButtonVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_ButtonVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_Button*)pValue);
    return 1;
}

int is_SSM_TR_Button_long_conversion_allowed()
{
    if (pSimSSM_TR_ButtonVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_ButtonVTable);
    }
    return 1;
}

int SSM_TR_Button_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_ButtonVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_ButtonVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_Button*)pValue);
    return 1;
}

void compare_SSM_TR_Button(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_ButtonVTable != NULL
        && pSimSSM_TR_ButtonVTable->m_version >= Scv612
        && pSimSSM_TR_ButtonVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_ButtonVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_ButtonVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_ButtonVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_Button*)pValue1), (int)(*(SSM_TR_Button*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_Button_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_Button_values, SSM_TR_Button_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_Button(void *pValue)
{
    *(SSM_TR_Button*)pValue = SSM_TR_no_trans_Button;
    return 1;
}

int release_SSM_TR_Button(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_Button(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_Button*)pToValue) = *((SSM_TR_Button*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_Button_Utils = {
    SSM_TR_Button_to_string,
    check_SSM_TR_Button_string,
    string_to_SSM_TR_Button,
    is_SSM_TR_Button_double_conversion_allowed,
    SSM_TR_Button_to_double,
    is_SSM_TR_Button_long_conversion_allowed,
    SSM_TR_Button_to_long,
    compare_SSM_TR_Button,
    get_SSM_TR_Button_signature,
    init_SSM_TR_Button,
    release_SSM_TR_Button,
    copy_SSM_TR_Button,
    sizeof(SSM_TR_Button)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "_9_SSM_TR_no_trans_SM1", _9_SSM_TR_no_trans_SM1},
    { "_9_SSM_TR_no_trans_SM1", _9_SSM_TR_no_trans_SM1},
    { "SSM_TR_Door_Bridge_1_Door_SM1", SSM_TR_Door_Bridge_1_Door_SM1},
    { "SSM_TR_Door_Bridge_1_Door_SM1", SSM_TR_Door_Bridge_1_Door_SM1},
    { "SSM_TR_Door_Bridge_2_Door_SM1", SSM_TR_Door_Bridge_2_Door_SM1},
    { "SSM_TR_Door_Bridge_2_Door_SM1", SSM_TR_Door_Bridge_2_Door_SM1},
    { "SSM_TR_Door_Open_3_Door_SM1", SSM_TR_Door_Open_3_Door_SM1},
    { "SSM_TR_Door_Open_3_Door_SM1", SSM_TR_Door_Open_3_Door_SM1},
    { "SSM_TR_Door_ToLeaveStation_4_Door_SM1", SSM_TR_Door_ToLeaveStation_4_Door_SM1},
    { "SSM_TR_Door_ToLeaveStation_4_Door_SM1", SSM_TR_Door_ToLeaveStation_4_Door_SM1},
    { "SSM_TR_DoorButton_Door_1_DoorButton_SM1", SSM_TR_DoorButton_Door_1_DoorButton_SM1},
    { "SSM_TR_DoorButton_Door_1_DoorButton_SM1", SSM_TR_DoorButton_Door_1_DoorButton_SM1},
    { "SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1", SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1},
    { "SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1", SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1},
    { "SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1", SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1},
    { "SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1", SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1},
    { "SSM_TR_Open_BridgeButton_1_Open_SM1", SSM_TR_Open_BridgeButton_1_Open_SM1},
    { "SSM_TR_Open_BridgeButton_1_Open_SM1", SSM_TR_Open_BridgeButton_1_Open_SM1},
    { "SSM_TR_Open_Door_2_Open_SM1", SSM_TR_Open_Door_2_Open_SM1},
    { "SSM_TR_Open_Door_2_Open_SM1", SSM_TR_Open_Door_2_Open_SM1},
    { "SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1", SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1},
    { "SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1", SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1},
    { "SSM_TR_BridgeButton_Door_1_BridgeButton_SM1", SSM_TR_BridgeButton_Door_1_BridgeButton_SM1},
    { "SSM_TR_BridgeButton_Door_1_BridgeButton_SM1", SSM_TR_BridgeButton_Door_1_BridgeButton_SM1},
    { "SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1", SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1},
    { "SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1", SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1},
    { "SSM_TR_Bridge_Door_2_Bridge_SM1", SSM_TR_Bridge_Door_2_Bridge_SM1},
    { "SSM_TR_Bridge_Door_2_Bridge_SM1", SSM_TR_Bridge_Door_2_Bridge_SM1},
};
const int SSM_TR_SM1_nb_values = 28;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, &rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM1(void *pValue)
{
    *(SSM_TR_SM1*)pValue = _9_SSM_TR_no_trans_SM1;
    return 1;
}

int release_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM1*)pToValue) = *((SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    init_SSM_TR_SM1,
    release_SSM_TR_SM1,
    copy_SSM_TR_SM1,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** SSM_TR_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM2VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM2VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM2VTable;
#endif

static SimEnumValUtils SSM_TR_SM2_values[] = {
    { "SSM_TR_no_trans_SM2", SSM_TR_no_trans_SM2},
    { "SSM_TR_no_trans_SM2", SSM_TR_no_trans_SM2},
    { "_5_SSM_TR_ToMove_Opening_1_ToMove_SM2", _5_SSM_TR_ToMove_Opening_1_ToMove_SM2},
    { "_5_SSM_TR_ToMove_Opening_1_ToMove_SM2", _5_SSM_TR_ToMove_Opening_1_ToMove_SM2},
    { "_6_SSM_TR_ToMove_Closing_2_ToMove_SM2", _6_SSM_TR_ToMove_Closing_2_ToMove_SM2},
    { "_6_SSM_TR_ToMove_Closing_2_ToMove_SM2", _6_SSM_TR_ToMove_Closing_2_ToMove_SM2},
    { "_8_SSM_TR_Opening_FullyOpen_1_Opening_SM2", _8_SSM_TR_Opening_FullyOpen_1_Opening_SM2},
    { "_8_SSM_TR_Opening_FullyOpen_1_Opening_SM2", _8_SSM_TR_Opening_FullyOpen_1_Opening_SM2},
    { "_4_SSM_TR_Closing_Opening_1_Closing_SM2", _4_SSM_TR_Closing_Opening_1_Closing_SM2},
    { "_4_SSM_TR_Closing_Opening_1_Closing_SM2", _4_SSM_TR_Closing_Opening_1_Closing_SM2},
    { "_7_SSM_TR_Closing_FullyClose_2_Closing_SM2", _7_SSM_TR_Closing_FullyClose_2_Closing_SM2},
    { "_7_SSM_TR_Closing_FullyClose_2_Closing_SM2", _7_SSM_TR_Closing_FullyClose_2_Closing_SM2},
};
const int SSM_TR_SM2_nb_values = 12;

int SSM_TR_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM2VTable != NULL
        && pSimSSM_TR_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2*)pValue, SSM_TR_SM2_values, SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM2_string(const char *str, char **endptr)
{
    static SSM_TR_SM2 rTemp;
    return string_to_SSM_TR_SM2(str, &rTemp, endptr);
}

int string_to_SSM_TR_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_values, SSM_TR_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2*)pValue = (SSM_TR_SM2)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_double_conversion_allowed()
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM2VTable);
    }
    return 1;
}

int SSM_TR_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM2*)pValue);
    return 1;
}

int is_SSM_TR_SM2_long_conversion_allowed()
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM2VTable);
    }
    return 1;
}

int SSM_TR_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM2VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM2*)pValue);
    return 1;
}

void compare_SSM_TR_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2VTable != NULL
        && pSimSSM_TR_SM2VTable->m_version >= Scv612
        && pSimSSM_TR_SM2VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2*)pValue1), (int)(*(SSM_TR_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM2_values, SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM2(void *pValue)
{
    *(SSM_TR_SM2*)pValue = SSM_TR_no_trans_SM2;
    return 1;
}

int release_SSM_TR_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM2(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM2*)pToValue) = *((SSM_TR_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM2_Utils = {
    SSM_TR_SM2_to_string,
    check_SSM_TR_SM2_string,
    string_to_SSM_TR_SM2,
    is_SSM_TR_SM2_double_conversion_allowed,
    SSM_TR_SM2_to_double,
    is_SSM_TR_SM2_long_conversion_allowed,
    SSM_TR_SM2_to_long,
    compare_SSM_TR_SM2,
    get_SSM_TR_SM2_signature,
    init_SSM_TR_SM2,
    release_SSM_TR_SM2,
    copy_SSM_TR_SM2,
    sizeof(SSM_TR_SM2)
};

/****************************************************************
 ** status 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimstatusVTable_defined
    extern struct SimTypeVTable *pSimstatusVTable;
  #else 
    struct SimTypeVTable *pSimstatusVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimstatusVTable;
#endif

static SimFieldUtils status_fields[] = {
    {"opening", offsetof(status,opening), &_Type_kcg_bool_Utils},
    {"opened", offsetof(status,opened), &_Type_kcg_bool_Utils},
    {"closing", offsetof(status,closing), &_Type_kcg_bool_Utils},
    {"closed", offsetof(status,closed), &_Type_kcg_bool_Utils},
};

int status_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimstatusVTable != NULL
        && pSimstatusVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstatusVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, status_fields, 4, pfnStrAppend, pStrObj);
}

int check_status_string(const char *str, char **endptr)
{
    static status rTemp;
    return string_to_status(str, &rTemp, endptr);
}

int string_to_status(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimstatusVTable != NULL) {
        nRet = string_to_VTable(str, pSimstatusVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, status_fields, 4, endptr);
    }
    return nRet;
}

int is_status_double_conversion_allowed()
{
    if (pSimstatusVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstatusVTable);
    }
    return 0;
}

int status_to_double(const void *pValue, double *nValue)
{
    if (pSimstatusVTable != NULL) {
        return VTable_to_double(pValue, pSimstatusVTable, nValue);
    }
    return 0;
}

int is_status_long_conversion_allowed()
{
    if (pSimstatusVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimstatusVTable);
    }
    return 0;
}

int status_to_long(const void *pValue, long *nValue)
{
    if (pSimstatusVTable != NULL) {
        return VTable_to_long(pValue, pSimstatusVTable, nValue);
    }
    return 0;
}

void compare_status(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimstatusVTable != NULL
        && pSimstatusVTable->m_version >= Scv612
        && pSimstatusVTable->m_pfnCompare != NULL) {
        if (pSimstatusVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimstatusVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimstatusVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, status_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_status_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(status_fields, 4, pfnStrAppend, pStrObj);
}

int init_status(void *pValue)
{
    init_kcg_bool(&(((status*)pValue)->opening));
    init_kcg_bool(&(((status*)pValue)->opened));
    init_kcg_bool(&(((status*)pValue)->closing));
    init_kcg_bool(&(((status*)pValue)->closed));
    return 1;
}

int release_status(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_status(void *pToValue, const void *pFromValue)
{
    kcg_copy_status((status*)pToValue, (status*)pFromValue);
    return 1;
}

SimTypeUtils _Type_status_Utils = {
    status_to_string,
    check_status_string,
    string_to_status,
    is_status_double_conversion_allowed,
    status_to_double,
    is_status_long_conversion_allowed,
    status_to_long,
    compare_status,
    get_status_signature,
    init_status,
    release_status,
    copy_status,
    sizeof(status)
};

