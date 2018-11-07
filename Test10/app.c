#include <stdio.h>

//int main() {

//    int num = 23;       // int - целые числа  %d - для целых чисел
//    float x;
//    x = 4.56;           // float - числа с точкой   %f - для чисел с точкой
//    char sym = 'A';     // char - символьный тип (1 символ)
//    double y = 6.438957;             // делает любой тип в 2 раза больше

//    printf("Num is %d, x is %.2f\n", num, x);

//    return 0;
//}

 
//int main() {

//    int x = 23, y = 32, res;
//    res = x + y;
//    res += 10;
    
//    printf("Res is %d\n", res);
    
    
    
//    return 0;
//}

// int main() {
    
//    int age;

//    printf("Enter your age: ");
//    scanf("%d", &age);

//    if(age > 18) {
//        printf("Your age is bigger than 18. Age is %d\n", age); // Условные операторы
//        if (age ==21)
//            printf("Age is 21");
//    } else if (age < 18) {
//        printf("Your age is less than 18. Age is %d\n", age);
//    } else {
//        printf("Your age is equal than 18. Age is %d\n", age);
//    }

//    return 0;
//}


//int main() {

//    int x = 2, y = 4;
//    int c;

//    c = x > y ? 23 : 45;

//    printf("%d\n", c);

//    if (x > y)
//        c = 23;
//    else
//        c = 45;
    
//    return 0;
//}

    // Свитчкейс

/* int main() {
    
    int res;
    scanf ("%d", &res);
    
    switch (res) {
        case 1:
            printf ("Variable %d", res);
            break;
        case 245:
            printf ("Variable is 245");
            break;
        case 10:
            printf ("Variable is %d", res);
            break;
        case 678:
            printf("Variable is very big - %d", res);
            break;
        default:
            printf("Some other number");
    }
    
    printf("\n");
    
        return 0;
    }
*/

//  ЦИКЛЫ


/* int main () {

    for (int i = 10; i < 10; i++) {
        printf("i is %d\n", i);
   }
    for (int i = 100; i > 0; i /= 2) {
        printf("i is %d\n", i);
    }
    
    return 0;
}
*/


//int main () {
// 
//    int i = 200;
//    
//    while (i > 10) {
//        printf("i is %d\n", i);
//        i /= 2;
//    }
// 
//    return 0;
//}


//int main () {
//
//    int i = 100;
//    
//    
//    do {
//        printf("i is %d\n", i);
//    } while (i < 10);
//
//    return 0;
//}


// ФУНКЦИИ

void print (float number) {
    printf ("Your number is %.2f\n", number);
}

float del (float a, float b) {
    float res;
    if (b != 0)
        res = a / b;
    else
        res = 0;
    return res;
}

int main () {
    int num_1, num_2;
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    float result =  del (num_1, num_2);
    print(result);
    
    
    
    return 0;
}


//     МАССИВЫ




