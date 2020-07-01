


#ifndef NVIC_LCfg_H
#define NVIC_LCfg_H

/**************************************************************
Choose from the following

NVIC_GROUPING_SYSTEM_XXX  :  [0 - 7] Groups , [0]     Subgroup
NVIC_GROUPING_SYSTEM_XXY  :  [0 - 3] Groups , [0 - 1] Subgroup
NVIC_GROUPING_SYSTEM_XYY  :  [0 - 1] Groups , [0 - 3] Subgroup
NVIC_GROUPING_SYSTEM_YYY  :  [0]     Groups , [0 - 7] Subgroup / Non-Preemption System
***************************************************************/


#define  NVIC_GROUPING_SYSTEM       NVIC_GROUPING_SYSTEM_XXY


#define  NVIC_ACTIVATED_INTERRUPTS  3



extern NVIC_CfgType  NVIC_Cfg[NVIC_ACTIVATED_INTERRUPTS];



#endif