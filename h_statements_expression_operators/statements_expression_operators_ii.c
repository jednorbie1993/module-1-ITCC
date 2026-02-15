#include <stdio.h>

#define PI 3.1416   // symbolic constant

int main() {

    /* =========================================================
       TITLE 1: COMPOUND STATEMENTS (BLOCKS)
       ========================================================= */

    {
        printf("Hello, ");
        printf("world!\n");
    }
    // The braces { } group multiple statements into one block


    /* =========================================================
       TITLE 2: SIMPLE EXPRESSIONS
       ========================================================= */

    int rate = 5;
    float cost = 10.0;

    // Simple expressions:
    // PI     → symbolic constant
    // 20     → literal constant
    // rate   → variable
    // -1.25  → literal constant

    printf("PI = %.4f\n", PI);
    printf("Literal constant = %d\n", 20);
    printf("Variable (rate) = %d\n", rate);
    printf("Negative literal = %.2f\n", -1.25);


    /* =========================================================
       TITLE 3: COMPLEX EXPRESSIONS
       ========================================================= */

    float result;

    // Complex expression using multiple operators
    result = 1.25 / 8 + 5 * rate + rate * rate / cost;

    printf("\nComplex expression result = %.2f\n", result);


    /* =========================================================
       TITLE 4: ASSIGNMENT AS EXPRESSION
       ========================================================= */

    int a = 5;
    int x, y;

    // Assignment is also an expression
    y = x = a + 10;

    printf("\na = %d\n", a);
    printf("x = %d\n", x);
    printf("y = %d\n", y);


    /* =========================================================
       TITLE 5: ASSIGNMENT INSIDE AN EXPRESSION
       ========================================================= */

    int z;

    z = 6 + (y = 4 + 5);

    printf("\nAfter: y = %d\n", y);  // y becomes 9
    printf("z = %d\n", z);           // z becomes 6 + 9 = 15


    /* =========================================================
       TITLE 6: OPERATORS
       ========================================================= */

    int num1 = 10;
    int num2 = 3;

    printf("\nMathematical Operators:\n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);

    printf("\nRelational Operators:\n");
    printf("num1 > num2  = %d\n", num1 > num2);
    printf("num1 < num2  = %d\n", num1 < num2);
    printf("num1 == num2 = %d\n", num1 == num2);
    printf("num1 != num2 = %d\n", num1 != num2);

    printf("\nLogical Operators:\n");
    printf("(num1 > 0 && num2 > 0) = %d\n", num1 > 0 && num2 > 0);
    printf("(num1 > 0 || num2 < 0) = %d\n", num1 > 0 || num2 < 0);
    printf("!(num1 == num2) = %d\n", !(num1 == num2));


    /* =========================================================
       TITLE 7: ASSIGNMENT OPERATOR SUMMARY
       ========================================================= */

    // General form:
    // variable = expression;

    int total;
    total = num1 + num2;   // expression on right, assigned to variable

    printf("\nTotal = %d\n", total);


    return 0;
}
