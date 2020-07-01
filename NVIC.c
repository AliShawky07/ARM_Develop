

#include "NVIC.h"





void NVIC_Init(void)
{
	uint8  i               = 0;
	uint8  Enable_Register = 0;
	uint32 *ENable_Register;
	uint32 *Pri_Register;
	uint8  INT_Pri_BITs    = 0;
	
	/* Configure Grouping and Subgrouping in APINT Register in SCB */
	
	   /*Writing the VectKey in APINT Register the NVIC_GROUPING_SYSTEM*/
	APINT = (0x05FA << 16 ) | (NVIC_GROUPING_SYSTEM << 8);
	 

	
	for( ; i < NVIC_ACTIVATED_INTERRUPTS ; i++)
	{
		
		ENable_Register      = Enable_Register_Base;
	    Pri_Register         = Priority_Register_Base;
	    INT_Pri_BITs          = 0;
		/*Enable and Disable Based on user Configurations in Enx Register*/
		
		ENable_Register_Base += ( NVIC_Cfg[i].Interrupt_Number / 32 ) ;
		
		
		SET_BIT(   *ENable_Register  ,  (NVIC_Cfg[i].Interrupt_Number % 32)  );
	
		
		/*Assign Group/Subgroup Priority in PRIx Register */
		Pri_Register += ( NVIC_Cfg[i].Interrupt_Number / 4);
		
		INT_Pri_BITs  = (   5 + 8 * (NVIC_Cfg[i].Interrupt_Number % 4)  );
		
		
		switch(NVIC_GROUPING_SYSTEM)
		{
			
			case NVIC_GROUPING_SYSTEM_XXX :
			*Pri_Register |=  ( NVIC_Cfg[i].Group_Periority <<  INT_Pri_BITs );
			break;
			
			case NVIC_GROUPING_SYSTEM_XXY :
			*Pri_Register |=  ( NVIC_Cfg[i].Group_Periority <<  INT_Pri_BITs ) | ( NVIC_Cfg[i].SubGroup_Priority <<  INT_Pri_BITs + 2 );
			break;
			
			case NVIC_GROUPING_SYSTEM_XYY :
			*Pri_Register |=  ( NVIC_Cfg[i].Group_Periority <<  INT_Pri_BITs ) | ( NVIC_Cfg[i].SubGroup_Priority <<  INT_Pri_BITs + 1 );
			break;
			 
			case NVIC_GROUPING_SYSTEM_YYY :
			*Pri_Register |=  ( NVIC_Cfg[i].SubGroup_Priority <<  INT_Pri_BITs );
			break;
			
			default :
			
			break;
			
		}
	
		
		
	}
	
	
	
}