#include <stdio.h>

int main(void) {
    int a;        // int = usually 4 bytes
    short b;      // short = usually 2 bytes

    printf("Enter int value: ");
    scanf("%d", &a);     // %d for int

    printf("Enter short value: ");
    scanf("%hi", &b);    // %hi for short

    printf("\nResults:\n");
    printf("a (int)   = %d\n", a);    // %d for int
    printf("b (short) = %hi\n", b);   // %hi for short

    return 0;
}
