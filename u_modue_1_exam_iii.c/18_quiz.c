#include <stdio.h>

/*
QUESTION 16:
Write a function that divides first number by second.
Do not divide if second number is zero.
*/

float divide(float a, float b) {

    if (b == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }

    return a / b;
}

int main() {

    float result = divide(10, 2);

    printf("Result = %.2f\n", result);

    return 0;
}// Safe division function