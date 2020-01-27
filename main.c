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
	//frequancies user can inter are 500 Hz 1kHz and 2kHz
	timer0SwPWM(20, freq500) ;
	

    /* Replace with your application code */
    while (1){ }

}

