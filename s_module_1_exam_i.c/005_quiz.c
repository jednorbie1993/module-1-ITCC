#include <stdio.h>

/*
This program asks the user for a radius
and calculates the area of a circle.
*/

int main() {

    int radius;
    float area;

    printf("Enter radius: ");
    scanf("%d", &radius);

    area = 3.14159 * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}// area_circle.c