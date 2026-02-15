#include <stdio.h>

/*
QUESTION 15:
Input 10 integers
and display their sum.
*/

int main() {

    int numbers[10];
    int i, sum = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}// ex15_sum_10.c