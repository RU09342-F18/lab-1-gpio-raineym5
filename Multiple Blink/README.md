# Simple Blink
This is a straight forward program that simply toggles two on-board LEDs. It was built in CCS version 8.1.0.00011, and the code was compiled using GCC version 7.3.1.24 on Linux

## MSP430G2553
For this board, the code sets all GPIO's to outputs to 0, and toggles the on-board LED connected to pin P1.0.
This is done by incrementing a counter. When  the counter mod 3 equals 0, it toggles LED P1.0. When the counter mod 7 equals 0, it toggles an LED on pin p1.6.

## MSP430F5529
For this board, the code sets all GPIO's to outputs to 0, and toggles the on-board LED connected to pin P1.0.
This is done exactly like the program on the MSP430G2553 board, except it toggles LEDs on P1.0 and p1.6 respectively.
