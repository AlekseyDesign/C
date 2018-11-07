#include <stdio.h>
                //заголовочный файл входа/выхода

void Hello (void) {
    
    printf("Hello!");
    return;
}

void GutenMorgan (void) {
    
    printf("Guten Morgan!");
    Hello();
    return;
}

void main (void) {
    
    GutenMorgan();
    return;
}
