/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-09-27, 16:45, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Bits1.h"
#include "BitsIoLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
// void LLDD_CC_LED(unsigned char ucUserData);
// void LLDD_CC_LED(unsigned char ucUserData);
// void LLDD_CC_LED(unsigned char ucUserData)
//		  {
//	 LLDD_CC_LED_PutVal(~ucUserData);
//		  }
//		  void LLDD_CC_LED(unsigned char ucUserData)
//		  {
//			  LLDD_CC_LED_PutVal(ucUserData);
//		  }
int i,z;
void LLDD_CA_CC_LED(unsigned char i);
void LLDD_CA_CC_LED(unsigned char m)

{
	unsigned char CAData,CCData;
	CAData =m;
	CAData= ~m;
	CAData = CAData&0xf0;
	CCData = m&0x0f;
	m=CAData | CCData;
	Bits1_PutVal(m);
}
	
	

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	int z;
//	unsigned char j,k;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  while(1)
  {
  for(i=0x01;i>0;i=i<<1)
//	  for(i=0x80;i>0;i=i>>1)
  {
	  LLDD_CA_CC_LED(i);
	  for(z=0;z<0x155fff;z++);
  }
  }
 
//  {
//	  
	 // {
	  
//	  for(i=0x8;i>0;i=i>>1)
//	 		  {
//	 			  LLDD_CA7654_LED(i);
//	 			  for(z=0;z<0x155fff;z++);
	 //			  LLDD_CC_LED(0);
	 //			  for(z=0;z<0x155fff;z++);
 		     //
//	 		  
//	 			  for(i=0x8;i>0;i=i>>1)
//	 	  {
//	 		  LLDD_CC_LED(0x0f);
//	 		  for(z=0;z<0x155fff;z++);
//	 //			  LLDD_CC_LED(0);
//	 //			  for(z=0;z<0x155fff;z++);
//	 		  }
	 //		  
//  LLDD_CA7654-CC3210_LED(unsigned char ucUserData)
//		{
//	      unsigned char ucCAData,ucCCData;
//	      ucCAData = ucUserData;
//	      ucCAData = ucCAData;
//	      ucCAData = ucCAData&0xF0;
//	      
//	      ucCCData = ucUserData&0x0f;
//	      ucUserData = ucCAData | ucCCData;
//	      LDD_CACC_GeneratedCode_PutVal(ucUserData);
//		}
//	  
	  
	 
	  
	  
	  
//	First rise
//	  	  Waterfall_PutVal(0x0e);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0d);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0b);
//	  	  for(i=0;i<0x155fff;i++);
//	  	
//	  	  Waterfall_PutVal(0x07);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x1f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x2f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x4f);
//	  	  for(i=0;i<0x155fff;i++);
//
//	  	  Waterfall_PutVal(0x8f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0f);
//	  	  for(i=0;i<0x155fff;i++);
//
//	  //	  Waterfall_Clr(0x8f);
////	  	 first fall
//	  	  Waterfall_PutVal(0x8f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x4f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x2f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	
//	  	  Waterfall_PutVal(0x1f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x07);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0b);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0d);
//	  	  for(i=0;i<0x155fff;i++);
//
//	  	  Waterfall_PutVal(0x0e);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
//	  	  Waterfall_PutVal(0x0f);
//	  	  for(i=0;i<0x155fff;i++);
//	  	  
////	  	  second rise
//	  	  
//	  	Waterfall_PutVal(0x0d);
//	  	  for(i=0;i<0x155fff;i++);
//	  		  	  
//		  Waterfall_PutVal(0x0b);
//		  for(i=0;i<0x155fff;i++);
//		
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x4f);
//		  for(i=0;i<0x155fff;i++);
//	
//		  Waterfall_PutVal(0x8f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//	  		  	  
////	  	second fall
//	  		  	  
//	  		  	 Waterfall_PutVal(0x4f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0b);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0d);
//		  for(i=0;i<0x155fff;i++);
//
//		  Waterfall_PutVal(0x0e);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  
////	  		 third rise
//
//		  Waterfall_PutVal(0x0b);
//		  for(i=0;i<0x155fff;i++);
//		
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x4f);
//		  for(i=0;i<0x155fff;i++);
//
//		  Waterfall_PutVal(0x8f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//	  		  		  	  		  	  
////	  		  third fall
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0b);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0d);
//		  for(i=0;i<0x155fff;i++);
//
//		  Waterfall_PutVal(0x0e);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//							  
////	  		  		  	fourth rise
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x4f);
//		  for(i=0;i<0x155fff;i++);
//
//		  Waterfall_PutVal(0x8f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
////	  		  		  fourth fall
//	  		  		  	  			  		  		  		  		  	  		  	  
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x07);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0b);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0d);
//		  for(i=0;i<0x155fff;i++);
//
//		  Waterfall_PutVal(0x0e);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//	  		  		  	  			  		  		  		  		  	  		  		  	  			  		  		  	  
////	  		   fifth rise
//	  		  		  	  			  		  		  		  		  	  		  		  	  			  		  		  	  
//		  Waterfall_PutVal(0x1f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x2f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x4f);
//		  for(i=0;i<0x155fff;i++);
//	
//		  Waterfall_PutVal(0x8f);
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//	  		  		  	  			  		  		  	  			  		  		  		  		  	  		  	  
////	  		  fifth fall
//		  Waterfall_PutVal(0x07);
//																																																																												  for(i=0;i<0x155fff;i++);
//																																																																												  
//																																																																												  Waterfall_PutVal(0x0b);
//																																																																												  for(i=0;i<0x155fff;i++);
//																																																																												  
//																																																																												  Waterfall_PutVal(0x0d);
//																																																																												  for(i=0;i<0x155fff;i++);
//																						
//																																																																												  Waterfall_PutVal(0x0e);
//																																																																												  for(i=0;i<0x155fff;i++);
//																																																																												  
//																																																																												  Waterfall_PutVal(0x0f);
//																																																																												  for(i=0;i<0x155fff;i++);
//																																																																																																				  
//																																		
//			
////				  sixth rise
//				  
//				  Waterfall_PutVal(0x2f);
//				  for(i=0;i<0x155fff;i++);
//				  
//				  Waterfall_PutVal(0x4f);
//				  for(i=0;i<0x155fff;i++);
//
//				  Waterfall_PutVal(0x8f);
//				  for(i=0;i<0x155fff;i++);
//				  
//				  Waterfall_PutVal(0x0f);
//				  for(i=0;i<0x155fff;i++);
												 	  		  		  	  			  		  		  	  			  		  		  		  		  	  		  	  
//												 	  		  		  	  			  		  		  	  			  		  		  		  		  	  		  	  sixth fall
												 	  		  		  	  			  		  		  	  			  		  		  		  		  	  		  	  
												 	  		  		  	  			  		  		  	  			  		  		  		  	
												 	  		  		  	  			  		  		  	  			  		  		  		  													 
												  
	  
	  //	  for(j=1;j<5;j++)
//	  {
//		  Waterfall_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  Bit1_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits2_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);		 
//		  Bit2_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits3_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);		 
//		  Bit3_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits4_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);		 
//		  Bit4_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits5_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  Bit5_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits6_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  Bit6_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits7_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  Bit7_ClrVal();
//		  for(i=0;i<0x155fff;i++);
//		  
//		  Bits8_PutVal(0x0f);
//		  for(i=0;i<0x155fff;i++);
//		  Bit8_ClrVal();
//		  for(i=0;i<0x155fff;i++);
		  
////		  
//	
//		  Bit2_ClrVal();
//		  for(i=0;i<0x7fff;i++);
//		 
//		  Bit3_ClrVal();
//		  for(i=0;i<0x7fff;i++);
////		 		  
//		  Bit2_PutVal();
//		  for(i=0;i<0x155fff;i++);
//		  
////	  Bit3_ClrVal();
////	  for(i=0;i<0x155fff;i++);
//
//		  
//		  Bit4_ClrVal();
//		  Bit5_ClrVal();
//		  Bit6_ClrVal();
//		  Bit7_ClrVal();
//		  Bit8_ClrVal();
//		  
//		  for(i=0;i<0x155fff;i++);

//	  }
//	  for(k=0;k<5;k++)
//	  {
//	
//		  Waterfall_PutVal(0xf0);
//		  for(i=0;i<0x155fff;i++);
//		  
//  		  Bit2_SetVal();
////		  for(i=0;i<0x7fff;i++);
//		  
//		  Bit3_SetVal();
////		  for(i=0;i<0x7fff;i++);
//		  
//	   	  Bit4_SetVal();
//	   	  Bit5_SetVal();
//	   	  Bit6_SetVal();
//	   	  Bit7_SetVal();
//	   	  Bit8_SetVal();
//		  for(i=0;i<0x155fff;i++);
	//  }
	  
//	  for(k=0;k<5;k++)
//	  {
		  
//	  }
	  
//	  for(m=0;m<5;m++)
//	  {
		 
//	  }
	  
//	  for(n=0;n<5;n++)
//	  {
	  	 
//	  }
	  
//	  Bit2_SetVal();
//	  for(i=0;i<0x155fff;i++);
//	  Bit2_ClrVal();
//	  for(i=0;i<0x155fff;i++);
//	  
//	  Bit3_SetVal();
//	  for(i=0;i<0x155fff;i++);
//	  Bit3_ClrVal();
//	  for(i=0;i<0x155fff;i++);
	  
//	  Bit4_SetVal();
//	  for(i=1;i<0x155fff;i++);
//	  Bit4_ClrVal();
// 	  for(i=1;i<0x155fff;i++);
//	 	  
//      Bit5_SetVal();
//	  for(i=1;i<0x155fff;i++);
//	  Bit5_ClrVal();
//	  for(i=1;i<0x155fff;i++);
//  }
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
