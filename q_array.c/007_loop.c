#include <stdio.h>

int main()
{
    int value[10];
    int ctr = 0;
    int nbr;

    while (ctr < 10 && nbr != 99)
    {
        puts("Enter a number, 99 to quit ");
        scanf("%d", &nbr);
        value[ctr] = nbr;
        ctr++;
    }

    return 0;
}
