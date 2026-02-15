#include <stdio.h>

int sumint(int x, int y);

int main(void) {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    c = sumint(a, b);

    printf("\n%d plus %d = %d\n", a, b, c);

    return 0;
}

int sumint(int x, int y) {
    return x + y;
}
