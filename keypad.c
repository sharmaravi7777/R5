/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-12, 14:57, # CodeGen: 0
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
#include "col.h"
#include "BitsIoLdd1.h"
#include "row.h"
#include "BitsIoLdd2.h"
#include "led.h"
#include "BitsIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  while(1)
  {
	  int r,c;
	  row_SetDir(1);
	  col_SetDir(1);
	  row_PutVal(0x0);
	  col_PutVal(0Xf);
	  col_SetDir(0);
	  c=col_GetVal();
	  row_SetDir(1);
	  col_SetDir(1);
	  row_PutVal(0xf);
	  col_PutVal(0x0);
	  row_SetDir(0);
	  
	  r=row_GetVal();
	  if(r==0xe && c==0xe)
	  {
		  led_PutVal(0x1);
		  
	  }
	  else if(r==0xe && c==0xd)
	  {
		  led_PutVal(0x2);
		  
	  }
	  else if(r==0xe && c==0xb)
	  {
		  led_PutVal(0x3);
	  }
	  else if(r==0xe && c==0x7)
	  {
		  
		  led_PutVal(0x4);
	  }
	  else if(r==0xd && c==0xe)
	  {
		  led_PutVal(0x5);
	  }
	  else if(r==0xd && c==0xd)
	  {
		  led_PutVal(0x6);
	  }
	  else if(r==0xd &&  c==0xb)
	  {
		  led_PutVal(0x7);
	  }
	  else if(r==0xd && c==0x7)
	  {
		  led_PutVal(0x8);
	  }
	  else if(r==0xb && c==0xe)
	  {
		  led_PutVal(0x9);
	  }
	  else if(r==0xb && c==0xd)
	  {
		  led_PutVal(0xa);
	  }
	  else if(r==0xb && c==0xb)
	  {
		  led_PutVal(0xb);
	  }
	  else if(r==0xb && c==0x7)
	  {
		  led_PutVal(0xc);
	  }
	  else if(r==0x7 && c==0xe)
	  {
		  led_PutVal(0xd);
	  }
	  else if(r==0x7 && c==0xd)
	  {
		  led_PutVal(0xb);
	  }
	  else if(r==0x7 && c==0xb)
	  {
		  led_PutVal(0xf);
	  }
	  else if(r==0x7 && c==0x7)
	  {
		  led_PutVal(0x0);
	  }
  
  }
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
