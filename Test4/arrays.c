//Массивы

#include "stdio.h"

int main (void){
    
    float prices[4] = {1000.0, 2000.0, 3000.0, 4000.0};
    
    printf("0: %10.2f\n", prices[0]);
    printf("1: %10.2f\n", prices[1]);
    printf("2: %10.2f\n", prices[2]);
    printf("3: %10.2f\n", prices[3]);
    
    return 0;
}

// можно написать через константу #define SIZE 4
// далее в типе float prices [SIZE] = {1000.0, 2000.0, 3000.0, 4000.0};
// результат будет аналогичным
