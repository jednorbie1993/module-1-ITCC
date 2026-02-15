#include <stdio.h>

/*
QUESTION 17:
Write a program that uses a function
to find the average of five float values
entered by the user.
*/

float average(float a, float b, float c, float d, float e) {
    return (a + b + c + d + e) / 5;
}

int main() {

    float n1, n2, n3, n4, n5;

    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    printf("Average = %.2f\n", average(n1, n2, n3, n4, n5));

    return 0;
}// Program to find average of five floats