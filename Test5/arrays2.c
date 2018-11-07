#include <stdio.h>

#define SIZE 4


void showArrayAdressess(float array[]){
    
 //больная тема при работе с массивами - выход за границы массива
    
    printf("\n[*] Array Adressess:\n");
    
    printf("0: %p\n", array[0]);
    printf("1: %p\n", array[1]);
    printf("2: %p\n", array[2]);
    printf("3: %p\n", array[3]);
    
    return;
}


void showArrayAdressessByPointer(float * array){
    
    printf("\n[*] Array Adressess:\n");
    
    printf("0: %p\n", array[0]);
    printf("1: %p\n", array[1]);
    printf("2: %p\n", array[2]);
    printf("3: %p\n", array[3]);
    
    return;
}


int main(void) {
    
    float prices[SIZE] = { 1000.0, 2000.0, 3000.0, 4000.0 };
    
    printf("\n[*] Index Access:\n");
    
    // index access
    
    printf("0: %.2f\n", prices[0]);
    printf("1: %.2f\n", prices[1]);
    printf("2: %.2f\n", prices[2]);
    printf("3: %.2f\n", prices[3]);
    
    printf("\n[*] Pointer Access:\n");
    
    // pointer access
    
    printf("0: %.2f\n", *(prices + 0));
    printf("1: %.2f\n", *(prices + 1));
    printf("2: %.2f\n", *(prices + 2));
    printf("3: %.2f\n", *(prices + 3));
    
    //Вычисляем размер типа float,int,char
    size_t floatSize = sizeof(float);
    size_t intSize = sizeof(int);
    size_t charSize = sizeof(char);
    
    printf("\nFloat Size: %zu bytes\n", floatSize);
    printf("Int Size: %zu bytes\n", intSize);
    printf("Char Size: %zu bytes\n", charSize);
    
    //Вычисляем размер массива
    printf("\nPrices Size: %zu bytes\n", sizeof prices);
    
    showArrayAdressess(prices);
    showArrayAdressessByPointer(prices);
    
    return 0;
}
