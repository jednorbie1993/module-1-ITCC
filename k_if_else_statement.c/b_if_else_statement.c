#include <stdio.h>

int main() {
    int x, y;

    // Input two integers
    printf("Input an integer value for x: ");
    scanf("%d", &x);
    printf("Input an integer value for y: ");
    scanf("%d", &y);

    // Using if-else
    if (x == y)
        printf("x is equal to y\n");
    else
        printf("x is not equal to y\n");

    return 0;
}
