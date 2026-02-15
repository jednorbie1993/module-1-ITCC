#include <stdio.h>

/*
QUESTION 14:
Input two floating-point values
and display their product.
*/

int main() {

    float a, b;

    printf("Enter two float numbers: ");
    scanf("%f %f", &a, &b);

    printf("Product = %.2f\n", a * b);

    return 0;
}// ex14_float_product.c
