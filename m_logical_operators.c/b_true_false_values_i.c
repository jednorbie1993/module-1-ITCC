#include <stdio.h>

int main() {
    int a = 0;
    int b = -5;
    int c = 1;

    if (a)
        printf("a is true\n");   // hindi tatakbo

    if (b)
        printf("b is true\n");   // tatakbo (nonzero)

    if (!a)
        printf("a is false\n");  // tatakbo

    return 0;
}
