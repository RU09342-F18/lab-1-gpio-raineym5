# Off Board Blink
This is a nifty program that simply toggles an off-board LED at a predefined rate. It was built in CCS version 8.1.0.00011, and the code was compiled using GCC version 7.3.1.24 on Linux

## MSP430G2553
For this board, the code sets all outputs to zero and toggles pin P1.3 every 1,000,000 clock cycles. The uC is removable. It can be placed on a breadboard, but it needs reset held high and a bypass capacitor across Vss - Vdd. This is located on the board, but should be placed as close to the uC as possible.
