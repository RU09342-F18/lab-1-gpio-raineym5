#include <msp430.h>

#define BUT1 0
/**
 * main.c
 */
void main(void){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    int counter=0,delayval=0;
    P1DIR = 0xfd;
    P2DIR = 0xff;
    P3DIR = 0xff;
    P4DIR = 0xff;
    P5DIR = 0xff;
    P6DIR = 0xff;
    P7DIR = 0xff;
    P1OUT = 0x02;
    P2OUT = 0x00;
    P3OUT = 0x00;
    P4OUT = 0x00;
    P5OUT = 0x00;
    P6OUT = 0x00;
    P7OUT = 0x00;
    P1REN = 0x02;
    while(1){

        if(counter == 0)
            P1OUT ^= BIT0;
        counter++;
        __delay_cycles(10000);
        if(counter >= delayval)
            counter=0;
        if(!(P1IN & BIT1)){
            delayval=0;
            counter=0;
            P1OUT |= BIT0;
            while(!(P1IN & BIT1)){
                delayval++;
                __delay_cycles(10000);
            }
            P1OUT &= ~(1<<BIT0);
        }

    }

}
