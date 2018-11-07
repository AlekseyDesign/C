#include "stdio.h"

void main (void) {
    
    unsigned short firstValue = 30000;
    unsigned short secondValue = 20000;
    signed short thirdValue = -30000;
    
    printf("%-15s  %i\n", "First Value:", firstValue);
    printf("%-15s  %i\n", "Second Value:", secondValue);
    printf("%-15s %i\n", "Third Value:", thirdValue);
    
    return;
}

// unsigned short - (0...65535)
// signed short - (-32768...32767)

