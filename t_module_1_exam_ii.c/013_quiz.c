#include <stdio.h>

/*
QUESTION 14:
Use the conditional (ternary) operator
to perform the same task as exercise 13.
*/

int main() {

    int x = 10;
    int y = 0;

    y = (x >= 1 && x <= 20) ? x : y;

    printf("y = %d\n", y);

    return 0;
}// ex14_ternary_range.c