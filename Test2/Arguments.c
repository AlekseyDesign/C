#include "stdio.h"

unsigned short sum (unsigned char a, unsigned char b){
    
    return a + b;
}

short sub (char x, char y){
    
    return x - y;
}

void main (void){
    
    char a = 5;
    char b = 2;
    
    printf("Summ:\n");
    printf("%i\n", sum(2, 2));
    printf("%i\n", sum(5, 5));
    
    printf("Substract:\n");
    printf("%i\n", sub(a, b));
    printf("%i\n", sub(10, 4));
    
    return;
}
