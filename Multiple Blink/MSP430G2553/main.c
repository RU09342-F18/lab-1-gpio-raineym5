#include <msp430.h> 


/**
 * main.c
 */
volatile int counter;
void main(void){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR = 0xff;
    P2DIR = 0xff;
    P1OUT = 0x00;
    P2OUT = 0x00;
    counter=0;

    while(1){
        if(counter%3 == 0)
            P1OUT ^= 0x01;
        if(counter%7 == 0)
            P1OUT ^= 0x40;
        counter++;
        __delay_cycles(100000);

    }

}
