/*
 * LedBar.c
 *
 * Created: 11/2/2017 11:07:50 PM
 *  Author: Jordan
 */ 

#include "LedBar.h"

void initLED(){
	
		 	DDRB |= 0X01;
		 	DDRC |= 0x20;
			DDRD |= 0xFF;
		 
}

void allOn(){
	
			PORTB  |= 0x01;
		 	PORTC  |= 0x20;
		 	PORTD  |= 0xFF;

}

void allOff(){
	
			PORTB  &= 0xFE;
			PORTC  &= 0xDF;
			PORTD  &= 0x00;	
}

void toggleAll(){
	
			
	
}