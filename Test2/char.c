#include "stdio.h"

char getNumber (void)
{
    
    return 127;
}

signed char getNegativeNumber (void)
{
    
    return -128;
}

unsigned char getPositiveNumber (void)
{
    
    return 255;
}

void main (void)
{
    printf("Number: %d\n", getNumber());
    printf("Positive Number: %d\n", getPositiveNumber());
    printf("Negative Number: %d\n", getNegativeNumber());
    
    return;
}

// char - имеет 2 типа (signed char и unsigned char)
// signed char - со знаком минус,идёт по умолчанию (диапазон -128...127)
// unsigned char - положительный диапазон чисел (диапазон 0...255)
// char - используем для символов
// signed char и unsigned char - используем для чисел



