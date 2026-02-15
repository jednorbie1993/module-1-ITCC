#include <stdio.h>

int main() {
    int x, y;

    // Input two integer values
    printf("Input an integer value for x: ");
    scanf("%d", &x);
    printf("Input an integer value for y: ");
    scanf("%d", &y);

    // Compare values using if statements
    if (x == y)
        printf("x is equal to y\n");

    if (x > y)
        printf("x is greater than y\n");

    if (x < y)
        printf("x is smaller than y\n");

    return 0;
}
