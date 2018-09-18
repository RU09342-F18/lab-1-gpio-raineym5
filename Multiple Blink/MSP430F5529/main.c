#include <msp430.h> 


/**
 * main.c
 */
volatile int counter;
void main(void){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR = 0xff;
    P2DIR = 0xff;
    P3DIR = 0xff;
    P4DIR = 0xff;
    P5DIR = 0xff;
    P6DIR = 0xff;
    P7DIR = 0xff;
    P1OUT = 0x00;
    P2OUT = 0x00;
    P3OUT = 0x00;
    P4OUT = 0x00;
    P5OUT = 0x00;
    P6OUT = 0x00;
    P7OUT = 0x00;
    counter=0;

    while(1){
        if(counter%3 == 0)
            P1OUT ^= 0x01;
        if(counter%7 == 0)
            P4OUT ^= 0x80;
        counter++;
        __delay_cycles(100000);

    }

}

