


#ifndef NVIC_H
#define NVIC_H

#include "STD.h"
#include "TivaC_Registers.h"
#include "NVIC_LCfg.h"




#define  NVIC_GROUPING_SYSTEM_XXX   4

#define  NVIC_GROUPING_SYSTEM_XXY   5

#define  NVIC_GROUPING_SYSTEM_XYY   6

#define  NVIC_GROUPING_SYSTEM_YYY   7



typedef enum
{
	NVIC_GPIO_PORT_A,
	NVIC_GPIO_PORT_B,
	NVIC_GPIO_PORT_C,
	NVIC_GPIO_PORT_D,
	NVIC_GPIO_PORT_E,
	
	NVIC_System_Control = 28
	
}NVIC_IntType;

typedef struct
{
	NVIC_IntType   Interrupt_Number ;
	uint8          Group_Periority  ;
	uint8          SubGroup_Priority;
	
}NVIC_CfgType;



void NVIC_Init(void);









#endif