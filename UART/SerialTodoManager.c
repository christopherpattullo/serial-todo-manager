/*This program implements a TODO list manager that allows user to check the task they've done
*throughout the day on a small note pad interface. These changes are reflected on
*LCD with a small 'x' as the check mark and '_' as tasks not done
*/

#include <stdint.h>
#include <stdio.h>
#include "SerialTodoManager.h"
#include "UARTInit.h"
#include "SSD2119_Display.h"

char buffer[10000]; //The buffer for transfering bits to LCD
volatile unsigned int i;//index that keeps track of which character to be printed in buffer


int main(void) {
  initUART();   //initialize UART2
  LCD_Init();   //Initiliazing the LCD
  while(1) {
  }
  return 0;
}

//Write characters that are receiced by UART and print them out on LCD
void UART_2_Handler(void)  {
  UARTICR_2 |= 0x30;    //clears the interupt flag for UART2 
  if(UARTDR_2 != 0x00){ //Write character to buffer unless we reached the terminator
    buffer[i] = UARTDR_2;
    i++;
  } else {
    LCD_Printf(buffer); //Print the buffer to LCD
    i = 0;            
    LCD_SetCursor(0, 0); //reset cursor to the top of LCD
  }
}
