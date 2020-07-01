
#include "NVIC.h"



const NVIC_CfgType  NVIC_Cfg[NVIC_ACTIVATED_INTERRUPTS] = {
/*  Interrupt_Number         Group_Periority         SubGroup_Priority   */
{   NVIC_GPIO_PORT_A     ,        2             ,            0            },
{   NVIC_GPIO_PORT_B     ,        3             ,            1            },
{   NVIC_GPIO_PORT_C     ,        0             ,            0            },

}