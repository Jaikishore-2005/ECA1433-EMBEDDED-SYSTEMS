#include <reg51.h>

void main(void) {
    unsigned long i;
    unsigned char num = 12;       // Number for factorial
    unsigned long factorial = 1;

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Send result to Ports
    P0 = (factorial & 0x000000FF);         // Lower 8 bits
    P1 = (factorial & 0x0000FF00) >> 8;    // Next 8 bits
    P2 = (factorial & 0x00FF0000) >> 16;   // Next 8 bits
    P3 = (factorial & 0xFF000000) >> 24;   // Highest 8 bits

    while(1);   // Infinite loop to stop reset
}
