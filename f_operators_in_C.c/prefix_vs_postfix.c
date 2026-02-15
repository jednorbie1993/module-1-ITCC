#include <stdio.h>

int main() {
    int a = 5, b;

    b = ++a;  // a becomes 6, b = 6
    printf("Prefix: a=%d b=%d\n", a, b);

    a = 5;
    b = a++;  // b = 5, then a becomes 6
    printf("Postfix: a=%d b=%d\n", a, b);

    return 0;
}
