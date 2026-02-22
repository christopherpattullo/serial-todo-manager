/*This file intialize registers for UART2 and for UART2 interrupt
*/

#include <stdint.h>
#include "SerialTodoManager.h"

void initUART(){
  volatile unsigned int delay = 0;
  RCGCGPIO |= 0x1;      //configure PortA for GPIO
  RCGCUART |= 0x4;      ////set UART2 to run mode
  
  delay++;
  delay++;
  
  GPIOAFSEL_A |= 0xC0;  //set PA6 and PA7 to be controlled by alternate function
  GPIODEN_A |= 0xC0;    //enable PA6 and PA7
  GPIOPCTL_A = 0x11000000; //configure alternate function for PA6 and PA7 and assign UART2 RX and TX functionality.
 
  
  delay++;
  delay++;
    
  UARTCTL_2 &= ~0x1;    //disable UART2
  UARTIBRD_2 = 0x68;    //set baud rate to 9600 (the integer portion)
  UARTFBRD_2 = 0x0B;    //set baud rate to 9600 (the fraction portion)
  UARTLCRH_2 |= 0x60;   //set UART0 word length to be 8 bits
  UARTCC_2 |= 0x5;      //operate UART0 on the alternate clock
  UARTCTL_2 |= 0x301;   //enable UARt2
  UARTIFLS_2 &= 0x0;    //interrupt triggered when more than 1/8 or Rx is empty
  UARTIM_2 &= ~0x20;     //start interrupt when there's data received
  UARTIM_2 |= 0x10;      //start interrupt when there's data received
  EN1 |= 0x01 << 1;     //enable UART2 for interrupt
  //UARTICR_2 |= 0x30;
}
