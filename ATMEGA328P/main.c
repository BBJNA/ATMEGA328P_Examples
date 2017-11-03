/*
 * ATMEGA328P.c
 *
 * Created: 11/1/2017 3:40:17 PM
 * Author : Jordan Williams
 */ 

#include <avr/io.h>
#include "avr/sleep.h"
#include <stdio.h>
#include <string.h>


//Include Drivers
#include "LedBar.h"

int main(void)
{
	
	initLED();
	allOn();
	
    /* Replace with your application code */
    while (1) 
    {	
		sleep_enable();
    }
}
