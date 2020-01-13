/*	Author: kgarc044
 *  Partner(s) Name: Saad
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmp_B = 0x00; // Temporary variable to hold the value of B
	unsigned char tmp_A = 0x00; // Temporary variable to hold the value of A

    /* Insert your solution below */
    while (1) {
	 tmp_A  = PINA & 0x01 ;
          tmp_B  = PINA & 0x02 ;

	if ((tmp_A == 0x01)&&(tmp_B == 0x00)) {
		PORTB = 0x01;
   	 } else {
		PORTB = 0x00;
    }
}
return 0;
}
