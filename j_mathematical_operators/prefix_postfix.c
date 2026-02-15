#include <stdio.h>

int main() {
    int x = 5;
    int y = 5;

    printf("Initial values:\n");
    printf("x = %d, y = %d\n\n", x, y);

    // Postfix example
    printf("Postfix (x++):\n");
    printf("Value used: %d\n", x++);
    printf("New value of x: %d\n\n", x);

    // Prefix example
    printf("Prefix (++y):\n");
    printf("Value used: %d\n", ++y);
    printf("New value of y: %d\n\n", y);

    return 0;
}
