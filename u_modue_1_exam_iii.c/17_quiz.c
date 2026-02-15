#include <stdio.h>

/*
QUESTION 15:
Write a function that receives two numbers
and returns their product.
*/

int multiply(int a, int b) {
    return a * b;
}

int main() {

    int result = multiply(5, 4);

    printf("Product = %d\n", result);

    return 0;
}// Function that returns product