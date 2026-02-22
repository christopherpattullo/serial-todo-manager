/*Christine Ng, Christopher Pattullo
*2202251, 2368380
*6/2/2025
*This file names the the registers we are using for turning on/off LEDs,
*configuring Timer0A, interrupt and ADC and UART
*/

#ifndef __SERIAL_TODO_MANAGER_H__
#define __SERIAL_TODO_MANAGER_H__

//To set up and change the data for GPIO: LEDs
#define RCGCGPIO (*((volatile uint32_t *)0x400FE608))
#define GPIODIR_D (*((volatile uint32_t *)0x4005B400))
#define GPIODEN_D (*((volatile uint32_t *)0x4005B51C))
#define GPIODATA_D (*((volatile uint32_t *)0x4005B3FC))
#define GPIOAFSEL_D (*((volatile uint32_t *)0x4005B420))

#define GPIODIR_K (*((volatile uint32_t *)0x40061400))
#define GPIODEN_K (*((volatile uint32_t *)0x4006151C))
#define GPIODATA_K (*((volatile uint32_t *)0x400613FC))
#define GPIOAFSEL_K (*((volatile uint32_t *)0x40061420))

#define GPIODIR_M (*((volatile uint32_t *)0x40063400))
#define GPIODEN_M (*((volatile uint32_t *)0x4006351C))
#define GPIODATA_M (*((volatile uint32_t *)0x400633FC))
#define GPIOAFSEL_M (*((volatile uint32_t *)0x40063420))

#define GPIODIR_N (*((volatile uint32_t *)0x40064400))
#define GPIODEN_N (*((volatile uint32_t *)0x4006451C))
#define GPIODATA_N (*((volatile uint32_t *)0x400643FC))
#define GPIOAFSEL_N (*((volatile uint32_t *)0x40064420))

#define GPIODIR_P (*((volatile uint32_t *)0x40065400))
#define GPIODEN_P (*((volatile uint32_t *)0x4006551C))
#define GPIODATA_P (*((volatile uint32_t *)0x400653FC))
#define GPIOAFSEL_P (*((volatile uint32_t *)0x40065420))

#define GPIODIR_Q (*((volatile uint32_t *)0x40066400))
#define GPIODEN_Q (*((volatile uint32_t *)0x4006651C))
#define GPIODATA_Q (*((volatile uint32_t *)0x400663FC))
#define GPIOAFSEL_Q (*((volatile uint32_t *)0x40066420))


//Set up registers for switch
#define GPIOAMSEL_J (*((volatile uint32_t *)0x40060528))
#define GPIODIR_J (*((volatile uint32_t *)0x40060400))
#define GPIODEN_J (*((volatile uint32_t *)0x4006051C))
#define GPIODATA_J (*((volatile uint32_t *)0x400603FC))
#define GPIOAFSEL_J (*((volatile uint32_t *)0x40060420))
#define GPIOICR_J (*((volatile uint32_t *)0x4006041C))
#define GPIOPUR_J (*((volatile uint32_t *)0x40060510))
#define GPIOIS_J (*((volatile uint32_t *)0x40060404))
#define GPIOIBE_J (*((volatile uint32_t *)0x40060408))
#define GPIOIEV_J (*((volatile uint32_t *)0x4006040C))
#define GPIOIM_J (*((volatile uint32_t *)0x40060410))




//configure ADC
#define RCGCADC (*((volatile uint32_t *)0x400FE638))
#define ADCCC (*((volatile uint32_t *)0x40038FC8))
#define ADCACTSS (*((volatile uint32_t *)0x40038000))
#define ADCSSMUX3 (*((volatile uint32_t *)0x400380A0))
#define ADCSSEMUX3 (*((volatile uint32_t *)0x400380B8))
#define ADCSSCTL3_0 (*((volatile uint32_t *)0x400380A4))
#define ADCIM_0 (*((volatile uint32_t *)0x40038008))
#define ADCEMUX (*((volatile uint32_t *)0x40038014))
#define ADCISC (*((volatile uint32_t *)0x4003800C))
//#define ADCRIS (*((volatile uint32_t *)0x40038004))
#define ADCPSSI (*((volatile uint32_t *)0x40038028))
#define ADCSSFIFO (*((volatile uint32_t *)0x400380A8))
#define ADCSSTSH3 (*((volatile uint32_t *)0x400380BC))



//Configure GPIO_PD
#define GPIOAFSEL_D (*((volatile uint32_t *)0x4005B420))
#define GPIODIR_D (*((volatile uint32_t *)0x4005B400))
#define GPIODEN_D (*((volatile uint32_t *)0x4005B51C))
#define GPIODATA_D (*((volatile uint32_t *)0x4005B3FC))
#define GPIOAMSEL_D (*((volatile uint32_t *)0x4005B528))

//Set up resgisters for timer 0
#define RCGCTIMER (*((volatile uint32_t *)0x400FE604))
#define GPTMCTL (*((volatile uint32_t *)0x4003000C))
#define GPTMCFG (*((volatile uint32_t *)0x40030000))
#define GPTMTAMR (*((volatile uint32_t *)0x40030004))
#define GPTMTAILR (*((volatile uint32_t *)0x40030028))
#define GPTMIMR (*((volatile uint32_t *)0x40030018))
#define GPTMRIS (*((volatile uint32_t *)0x4003001C))
#define GPTMICR (*((volatile uint32_t *)0x40030024))
#define GPTMADCEV (*((volatile uint32_t *)0x40030070))
#define GPTMCC (*((volatile uint32_t *)0x40030FC8))

//Setup for UART
#define RCGCUART (*((volatile uint32_t *)0x400FE618))
#define GPIOAFSEL_A (*((volatile uint32_t *)0x40058420))
#define GPIOPCTL_A (*((volatile uint32_t *)0x4005852C))
#define UARTIBRD_0 (*((volatile uint32_t *)0x4000C024))
#define UARTFBRD_0 (*((volatile uint32_t *)0x4000C028))
#define UARTCTL_0 (*((volatile uint32_t *)0x4000C030))
#define UARTLCRH_0 (*((volatile uint32_t *)0x4000C02C))
#define UARTCC_0 (*((volatile uint32_t *)0x4000CFC8))
#define UARTRIS_0 (*((volatile uint32_t *)0x4000C03C))
#define UARTDR_0 (*((volatile uint32_t *)0x4000C000))
#define UARTIFLS_0 (*((volatile uint32_t *)0x4000C034))
#define UARTICR_0 (*((volatile uint32_t *)0x4000C044))
#define UARTIM_0 (*((volatile uint32_t *)0x4000C038))


//SETUP FOR PORT A
#define GPIOAFSEL_A (*((volatile uint32_t *)0x40058420))
#define GPIODIR_A (*((volatile uint32_t *)0x40058400))
#define GPIODEN_A (*((volatile uint32_t *)0x4005851C))
#define GPIODATA_A (*((volatile uint32_t *)0x400583FC))
#define GPIOAMSEL_A (*((volatile uint32_t *)0x40058528))
#define EN0 (*((volatile uint32_t *)0xE000E100))

//Setup for UART2
#define UARTIBRD_2 (*((volatile uint32_t *)0x4000E024))
#define UARTFBRD_2 (*((volatile uint32_t *)0x4000E028))
#define UARTCTL_2 (*((volatile uint32_t *)0x4000E030))
#define UARTLCRH_2 (*((volatile uint32_t *)0x4000E02C))
#define UARTCC_2 (*((volatile uint32_t *)0x4000EFC8))
#define UARTRIS_2 (*((volatile uint32_t *)0x4000E03C))
#define UARTDR_2 (*((volatile uint32_t *)0x4000E000))
#define UARTIFLS_2 (*((volatile uint32_t *)0x4000E034))
#define UARTICR_2 (*((volatile uint32_t *)0x4000E044))
#define UARTIM_2 (*((volatile uint32_t *)0x4000E038))
#define UARTMIS_2 (*((volatile uint32_t *)0x4000E040))
#define UARTFR (*((volatile uint32_t *)0x4000C038))
#define EN1 (*((volatile uint32_t *)0xE000E104))

#endif //__SERIAL_TODO_MANAGER_H__
