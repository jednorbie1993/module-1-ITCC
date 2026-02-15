#include <stdio.h>

int main() {

    /* =========================================
       1. STATEMENTS
       ========================================= */

    int x;
    int y;
    int sum;

    // Each line ending with ; is a STATEMENT
    x = 5;
    y = 3;


    /* =========================================
       2. EXPRESSIONS
       ========================================= */

    // Expression: x + y
    // Statement: sum = x + y;
    sum = x + y;

    printf("Sum = %d\n", sum);


    /* =========================================
       3. MATHEMATICAL OPERATORS
       ========================================= */

    printf("Addition:       %d\n", x + y);  // +
    printf("Subtraction:    %d\n", x - y);  // -
    printf("Multiplication: %d\n", x * y);  // *
    printf("Division:       %d\n", x / y);  // /


    /* =========================================
       4. RELATIONAL OPERATORS
       (result is either 1 = true or 0 = false)
       ========================================= */

    printf("x > y  = %d\n", x > y);   // greater than
    printf("x < y  = %d\n", x < y);   // less than
    printf("x == y = %d\n", x == y);  // equal to
    printf("x != y = %d\n", x != y);  // not equal


    /* =========================================
       5. LOGICAL OPERATORS
       ========================================= */

    // && = AND
    // || = OR
    // !  = NOT

    if (x > 0 && y > 0) {
        printf("Both x and y are positive\n");
    }


    /* =========================================
       6. IF STATEMENT
       ========================================= */

    if (sum > 5) {
        printf("Sum is greater than 5\n");
    } else {
        printf("Sum is 5 or below\n");
    }


    /* =========================================
       7. WHITESPACE DOES NOT MATTER (but style does)
       ========================================= */

    // These two statements are the SAME to the compiler:

    sum=x+y;
    sum = x + y;

    printf("Sum again = %d\n", sum);


    /* =========================================
       8. NULL STATEMENT
       ========================================= */

    ;   // This is a null statement (does nothing but legal)


    return 0;
}
