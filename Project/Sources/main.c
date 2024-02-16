/********************************************************************/
// HC12 Program:  YourProg - MiniExplanation
// Processor:     MC9S12XDP512
// Bus Speed:     MHz
// Author:        This B. You
// Details:       A more detailed explanation of the program is entered here
// Date:          Date Created
// Revision History :
//  each revision will have a date + desc. of changes

/********************************************************************/
// Library includes
/********************************************************************/
#include <hidef.h>      /* common defines and macros */
#include "derivative.h" /* derivative-specific definitions */
#include "SW_LED.h"
// Other system includes or your includes go here
#include <stdlib.h>
#include <stdio.h>

/********************************************************************/
// Defines
/********************************************************************/

/********************************************************************/
// Local Prototypes
/********************************************************************/

/********************************************************************/
// Global Variables
/********************************************************************/
unsigned int i;
unsigned int j;
/********************************************************************/
// Constants
/********************************************************************/

/********************************************************************/
// Main Entry
/********************************************************************/

void main(void)
{
  // Any main local variables must be declared here

  // main entry point
  _DISABLE_COP();
  // EnableInterrupts;

  /********************************************************************/
  // one-time initializations
  /********************************************************************/
  PT1AD1 &= 0x1F;
  DDR1AD1 = 0xE0;
  ATD1DIEN1 |= 0b00011111;

  /********************************************************************/
  // main program loop
  /********************************************************************/

  for (;;)
  {

    if(SWL_Pushed(SWL_RIGHT) ||SWL_Pushed(SWL_LEFT)||SWL_Pushed(SWL_CTR)||SWL_Pushed(SWL_DOWN)||SWL_Pushed(SWL_UP))
    {
      SWL_ON(SWL_GREEN);
    }
    else
    {
      SWL_ON(SWL_YELLOW);
    }
   // SWL_ON(SWL_RED);
    //SWL_ON(SWL_YELLOW);
    //SWL_ON(SWL_GREEN);
  / 
i =0;
j =0;


for(i =0; i<3160; i++)
{
SWL_ON(SWL_RED);
}
for(j =0; j< 1025; j++) // picked random value, divided 5ms from whatever, and divided that by the i value.
{
  SWL_OFF(SWL_RED);
}

}}

/********************************************************************/
// Functions
/********************************************************************/

/********************************************************************/
// Interrupt Service Routines
/********************************************************************/
