/*
 * ATMEGA328P.c
 *
 * Created: 11/1/2017 3:40:17 PM
 * Author : Jordan Williams
 */ 

#include <avr/io.h>
#include "avr/sleep.h"


int main(void)
{
	
 	PORTB = 0x01;
 	DDRB  = 0x01;
 	PORTD = 0xFF;
 	DDRD  = 0xFF;
	PORTC = 0x10;
	DDRC  = 0x10;
	
    /* Replace with your application code */
    while (1) 
    {
		
				
    }
}

