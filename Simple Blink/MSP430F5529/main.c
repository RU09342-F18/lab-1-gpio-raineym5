#include <msp430.h> 


/**
 * main.c
 */
#define BIT0 0x00
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1DIR = 0xff;               //set all outputs to 0 for power efficiency reasons
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


    while(1){
        P1OUT ^= 0x01;//toggle bit 1 of P1OUT every 1M clock cycles
        __delay_cycles(1000000);

    }
    return 0;
}
