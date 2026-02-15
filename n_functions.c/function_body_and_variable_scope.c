/* Demonstrates local variables. */

#include <stdio.h>

int x = 1, y = 2;     // global variables

void demo(void);     // function prototype

int main(void)
{
    printf("\nBefore calling demo(), x = %d and y = %d.", x, y);

    demo();          // function call

    printf("\nAfter calling demo(), x = %d and y = %d.\n", x, y);
    return 0;
}

void demo(void)
{
    /* Declare and initialize two local variables */
    int x = 88, y = 99;   // local variables (shadowing)

    printf("\nWithin demo(), x = %d and y = %d.", x, y);
}
