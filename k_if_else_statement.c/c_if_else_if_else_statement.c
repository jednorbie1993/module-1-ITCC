#include <stdio.h>

int main() {
    int x, y;

    // Input two integers
    printf("Input an integer value for x: ");
    scanf("%d", &x);
    printf("Input an integer value for y: ");
    scanf("%d", &y);

    // Using nested if-else
    if (x == y)
        printf("x is equal to y\n");
    else if (x > y)
        printf("x is greater than y\n");
    else
        printf("x is smaller than y\n");

    return 0;
}
