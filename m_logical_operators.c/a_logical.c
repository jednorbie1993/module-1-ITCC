#include <stdio.h>

int main() {
    int x = 3;

    if ((x > 1) && (x < 5))
        printf("x is between 2 and 4\n");

    if ((x == 2) || (x == 3) || (x == 4))
        printf("x is 2, 3, or 4\n");

    if (!(x == 5))
        printf("x is NOT equal to 5\n");

    return 0;
}
/*
&& → lahat dapat totoo

|| → kahit isa lang

! → baliktad
*/