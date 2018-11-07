/* ЦИКЛЫ
 Цикл while
 Цикл for
 Бесконечные циклы
 Инкрементирование
 Заголовочный файл stdbool.h и тип bool
 */

// %s - маркер для строк
// %d - для масивов
//

#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main(void) {
    
    int prices[SIZE] = { 100, 200, 300, 400 };
    
    bool isTrue = true;
    bool isFalse = false;
    
    printf("True: %d, False: %d\n", isTrue, isFalse);
    
    printf("While Loop:\n");
    
    // Цикл while - пока условие правдиво,выполняй тело цикла
    int i = 0;
    
    while(i < SIZE){
      
        printf("%d\n", prices[i]);
        i = i + 1;
//      i++ более короткое написание того что выше
        
        printf("For Loop:\n");
    }
    
    for (int i = 0; i < SIZE; i++){
        
        printf("%d\n", prices[i]);
    }
    
//    do {
//         тело цикла
//    } while(условие);
    
    return 0;
}
