#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Add: %d\n", a + b);   // 13
    printf("Sub: %d\n", a - b);   // 7
    printf("Mul: %d\n", a * b);   // 30
    printf("Div: %d\n", a / b);   // 3 (integer division)
    printf("Mod: %d\n", a % b);   // 1 (remainder)

    return 0;
}
//% works only with integers.