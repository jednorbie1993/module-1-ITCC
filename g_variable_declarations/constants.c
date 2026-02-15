#include <stdio.h>

int main() {
    int a = 20;        // decimal
    int b = 012;       // octal (equals 10 in decimal)
    int c = 0xA;       // hexadecimal (equals 10 in decimal)

    float x = 0.28;
    double y = 1.23E2; // scientific notation

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    printf("x = %.2f\n", x);
    printf("y = %.2lf\n", y);

    return 0;
}
