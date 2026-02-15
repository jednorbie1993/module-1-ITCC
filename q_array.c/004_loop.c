#include <stdio.h>

int count;

int main()
{
    /* Print the numbers 1 through 5 */

    count = 1;

    while (count <= 5)
    {
        printf("\n%d", count);
        count++;
    }

    return 0;
}
