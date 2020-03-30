/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/final/TramwayDoorController/Simulation/config.txt
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_status
kcg_bool kcg_comp_status(status *kcg_c1, status *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->closed == kcg_c2->closed);
  kcg_equ = kcg_equ & (kcg_c1->closing == kcg_c2->closing);
  kcg_equ = kcg_equ & (kcg_c1->opened == kcg_c2->opened);
  kcg_equ = kcg_equ & (kcg_c1->opening == kcg_c2->opening);
  return kcg_equ;
}
#endif /* kcg_use_status */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-03-30T15:30:21
*************************************************************$ */

