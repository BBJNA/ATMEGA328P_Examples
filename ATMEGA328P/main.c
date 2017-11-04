/*
 * ATMEGA328P.c
 *
 * Created: 11/1/2017 3:40:17 PM
 * Author : Jordan Williams
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include "avr/sleep.h"
#include <stdio.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include <avr/interrupt.h>

//Include Drivers
#include "LedBar.h"

int main(void)
{
	cli();
	initLED();		
	
    /* Replace with your application code */
    while(1){

		allOn();
	
		for (int i = 0; i <100; i++)
		{
			_delay_ms(10);
		}
		allOff();
			
    }
}
