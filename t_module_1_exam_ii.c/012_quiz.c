#include <stdio.h>

/*
QUESTION 13:
Write an if statement that assigns the value of x to y
only if x is between 1 and 20.
Leave y unchanged otherwise.
*/

int main() {

    int x = 10;
    int y = 0;

    if (x >= 1 && x <= 20) {
        y = x;
    }

    printf("y = %d\n", y);

    return 0;
}// ex13_if_range.c