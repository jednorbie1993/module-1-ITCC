/* Demonstrates unary operator prefix and postfix modes */

#include <stdio.h>

int a, b;

int main(void)
{
    /* Set a and b both equal to 5 */
    a = b = 5;

    /* Print them, decrementing each time */
    /* Use postfix mode for a, prefix mode for b */

    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b); //continue kasi may -- ++

    return 0;
}
