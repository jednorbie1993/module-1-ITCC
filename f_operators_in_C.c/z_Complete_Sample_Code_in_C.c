#include <stdio.h>

int main() {

    /* ========== 1. Arithmetic Operators ========== */
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);   // integer division
    printf("a %% b = %d\n\n", a % b);

    /* ========== 2. Cast Operator ========== */
    double result = (double)a / b;
    printf("Cast Operator:\n");
    printf("(double)a / b = %.2f\n\n", result);

    /* ========== 3. Increment / Decrement ========== */
    int x = 5;
    printf("Increment / Decrement:\n");
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("Now x = %d\n", x);
    printf("++x = %d\n\n", ++x);

    /* ========== 4. Comparison Operators ========== */
    printf("Comparison Operators:\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    /* ========== 5. Logical Operators ========== */
    printf("Logical Operators:\n");
    printf("(a > 5 && b < 5) = %d\n", (a > 5 && b < 5));
    printf("(a > 5 || b > 5) = %d\n", (a > 5 || b > 5));
    printf("!(a == b) = %d\n\n", !(a == b));

    /* ========== 6. Bitwise Operators ========== */
    int p = 6, q = 3;
    printf("Bitwise Operators:\n");
    printf("p & q = %d\n", p & q);
    printf("p | q = %d\n", p | q);
    printf("p ^ q = %d\n", p ^ q);
    printf("p << 1 = %d\n", p << 1);
    printf("p >> 1 = %d\n\n", p >> 1);

    /* ========== 7. Assignment Operators ========== */
    int y = 10;
    printf("Assignment Operators:\n");
    y += 5;
    printf("y += 5 → %d\n", y);
    y *= 2;
    printf("y *= 2 → %d\n\n", y);

    /* ========== 8. sizeof Operator ========== */
    printf("sizeof Operator:\n");
    printf("sizeof(int) = %lu bytes\n", sizeof(int));
    printf("sizeof(double) = %lu bytes\n\n", sizeof(double));

    /* ========== 9. Conditional (Ternary) Operator ========== */
    int max = (a > b) ? a : b;
    printf("Conditional (Ternary) Operator:\n");
    printf("Max of a and b = %d\n", max);

    return 0;
}
