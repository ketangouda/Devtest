#include<stdio.h>

void fact() {
    int number, factorial = 1;

    printf("\n\nEnter a number: ");
    scanf("%d", &number);

    while(number > 1) {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial is: %d\n", factorial);
//    return 0;
}
