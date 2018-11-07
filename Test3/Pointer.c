#include "stdio.h"

#define EOL '\n'

void main (void){
    
    char one = 1;
    char two = 2;
    char three = 3;
    
    char* onePointer = NULL;
    char* twoPointer = NULL;
    char* threePointer = NULL;
    
    onePointer = &one;
    twoPointer = &two;
    threePointer = &three;
    
    printf("%cOne variable: %d%c", EOL, one, EOL);
    printf("Two variable: %d%c", two, EOL);
    printf("Three variable: %d%c", three, EOL);
    
    // получение адреса переменной
    
    printf("%cOne adress: 0x%X%c", EOL, onePointer, EOL);
    printf("Two adress: 0x%X%c", twoPointer, EOL);
    printf("Three adress: 0x%X%c", threePointer, EOL);
    
    printf("%cOne value: %d%c", EOL, *onePointer, EOL);
    printf("Two value: %d%c", *twoPointer, EOL);
    printf("Three value: %d%c", *threePointer, EOL);
    
    //Разименованым указателям присваиваем новые знчения
    
    *onePointer = 10;
    *twoPointer = 20;
    *threePointer = 30;
    
    printf("%cOne pointer : %d%c", EOL, *onePointer, EOL);
    printf("Two pointer: %d%c", *twoPointer, EOL);
    printf("Three pointer: %d%c", *threePointer, EOL);
    
    printf("%cOne variable: %d%c", EOL, one, EOL);
    printf("Two variable: %d%c", two, EOL);
    printf("Three variable: %d%c", three, EOL);
    
    return;
}

// УКАЗАТЕЛИ

//                                              адрес в памяти      значение по адресам

// char one = 10  адрес переменной one          0x2222                  10           значение переменной one
// char two = 20  адрес переменной one          0x3333                  20           значение переменной two
// char three = 30  адрес переменной one        0x4444                  30           значение переменной three


// Указатель объявляется как обычная переменная,но есть 3 момента:

// после типа перемнной нужно указать знак *
// при инициализации всегда присваиваем значение NULL
// ип указателя должен быть таким же как у переменной,адрес котрой он будет хранить

// char number = 0            char* numberPointer = NULL
// переменная типа char       указатель на переменную типа char

// Для получения адреса переменной,перед её именем нужно указать знак &
// char number = 20;
// & number - 0x3333


