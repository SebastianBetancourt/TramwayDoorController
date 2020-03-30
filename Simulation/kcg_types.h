/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Door/SM1: */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_ToMove_Opening_1_ToMove_SM1,
  SSM_TR_ToMove_Closing_2_ToMove_SM1,
  SSM_TR_Opening_FullyOpen_1_Opening_SM1,
  SSM_TR_Closing_Opening_1_Closing_SM1,
  SSM_TR_Closing_FullyClose_2_Closing_SM1
} _3_SSM_TR_SM1;
/* Door/SM1: */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  SSM_st_ToMove_SM1,
  SSM_st_FullyOpen_SM1,
  SSM_st_Opening_SM1,
  SSM_st_Closing_SM1,
  SSM_st_FullyClose_SM1
} _2_SSM_ST_SM1;
/* Button/Button: */
typedef enum kcg_tag_SSM_TR_Button {
  SSM_TR_no_trans_Button,
  SSM_TR_notPressed_pressed_1_notPressed_Button,
  SSM_TR_pressed_notPressed_1_pressed_Button
} SSM_TR_Button;
/* Button/Button: */
typedef enum kcg_tag_SSM_ST_Button {
  SSM_st_notPressed_Button,
  SSM_st_pressed_Button
} SSM_ST_Button;
/* Bridge/SM2: */
typedef enum kcg_tag_SSM_TR_SM2 {
  SSM_TR_no_trans_SM2,
  _5_SSM_TR_ToMove_Opening_1_ToMove_SM2,
  _6_SSM_TR_ToMove_Closing_2_ToMove_SM2,
  _8_SSM_TR_Opening_FullyOpen_1_Opening_SM2,
  _4_SSM_TR_Closing_Opening_1_Closing_SM2,
  _7_SSM_TR_Closing_FullyClose_2_Closing_SM2
} SSM_TR_SM2;
/* Bridge/SM2: */
typedef enum kcg_tag_SSM_ST_SM2 {
  SSM_st_ToMove_SM2,
  SSM_st_FullyOpen_SM2,
  SSM_st_Opening_SM2,
  SSM_st_Closing_SM2,
  SSM_st_FullyClose_SM2
} SSM_ST_SM2;
/* Controller/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _9_SSM_TR_no_trans_SM1,
  SSM_TR_Door_Bridge_1_Door_SM1,
  SSM_TR_Door_Bridge_2_Door_SM1,
  SSM_TR_Door_Open_3_Door_SM1,
  SSM_TR_Door_ToLeaveStation_4_Door_SM1,
  SSM_TR_DoorButton_Door_1_DoorButton_SM1,
  SSM_TR_ToPressButton_BridgeButton_1_ToPressButton_SM1,
  SSM_TR_ToPressButton_DoorButton_2_ToPressButton_SM1,
  SSM_TR_Open_BridgeButton_1_Open_SM1,
  SSM_TR_Open_Door_2_Open_SM1,
  SSM_TR_ToLeaveStation_ToPressButton_1_ToLeaveStation_SM1,
  SSM_TR_BridgeButton_Door_1_BridgeButton_SM1,
  SSM_TR_Bridge_ToLeaveStation_1_Bridge_SM1,
  SSM_TR_Bridge_Door_2_Bridge_SM1
} SSM_TR_SM1;
/* Controller/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Door_SM1,
  SSM_st_DoorButton_SM1,
  SSM_st_ToPressButton_SM1,
  SSM_st_Open_SM1,
  SSM_st_ToLeaveStation_SM1,
  SSM_st_BridgeButton_SM1,
  SSM_st_Bridge_SM1
} SSM_ST_SM1;
/* Bridge/SM2:Closing:,
   Bridge/SM2:FullyClose:,
   Bridge/SM2:FullyOpen:,
   Bridge/SM2:Opening:,
   Bridge/SM2:ToMove:,
   Controller/SM1:ToPressButton:,
   Door/SM1:Closing:,
   Door/SM1:FullyClose:,
   Door/SM1:FullyOpen:,
   Door/SM1:Opening:,
   Door/SM1:ToMove:,
   status/ */
typedef struct kcg_tag_status {
  kcg_bool opening;
  kcg_bool opened;
  kcg_bool closing;
  kcg_bool closed;
} status;

#ifndef kcg_copy_status
#define kcg_copy_status(kcg_C1, kcg_C2)                                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (status)))
#endif /* kcg_copy_status */

#ifdef kcg_use_status
#ifndef kcg_comp_status
extern kcg_bool kcg_comp_status(status *kcg_c1, status *kcg_c2);
#endif /* kcg_comp_status */
#endif /* kcg_use_status */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

