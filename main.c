/*
 * SWpwm.c
 *
 * Created: 1/25/2020 7:05:05 PM
 * Author : MENA
 */ 

//#include <avr/io.h>
#include "timers.h"
#include "led.h"
void timer0SwPWM_new(uint8_t u8_dutyCycle,Freq u8_frequency);

int main(void)
{
	Led_Init(LED_0);
	//timer0Init(T0_COMP_MODE, T0_OC0_CLEAR, T0_PRESCALER_64 , 0 , 0, T0_INTERRUPT_CMP);
	timer0SwPWM_new(20, freq500) ;
	

    /* Replace with your application code */
    while (1){ }

}

