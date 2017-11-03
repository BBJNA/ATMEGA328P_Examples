/*
 * LedBar.c
 *
 * Created: 11/2/2017 11:07:50 PM
 *  Author: Jordan
 */ 

#include "LedBar.h"

void initLED(){
	
		 	PORTB = 0x01;
		 	PORTD = 0xFF;
		 	PORTC = 0x10;
			 
}

void allOn(){
	
			DDRB  = 0x01;
		 	DDRD  = 0xFF;
		 	DDRC  = 0x10;

}

void allOff(){
	
			DDRB  = 0x00;
			DDRD  = 0x00;
			DDRC  = 0x00;
	
}

void toggleAll(){
	
			
	
}