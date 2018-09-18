#include <msp430.h> 


/**
 * main.c
 */
//volatile int8 receivedchar;
void main(void){
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR = 0xff;
	P2DIR = 0xff;
	P1OUT = 0x00;
	P2OUT = 0x00;

	while(1){
	    P1OUT ^= (1<<BIT0);
	    __delay_cycles(1000000);

	}

}
