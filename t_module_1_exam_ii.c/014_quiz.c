#include <stdio.h>

/*
QUESTION 15:
Rewrite the nested if statements
using a single if statement and compound operators.

Original:
if (X < 1)
    if (X > 10)
        statement;
*/

int main() {

    int X = 5;

    if (X < 1 && X > 10) {
        printf("Statement executed\n");
    }

    return 0;
}// ex15_single_if.c