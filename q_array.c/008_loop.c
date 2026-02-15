#include <stdio.h>

int main()
{
    int nbr = 0;

    while (nbr <= 99)
    {
        printf("Enter a number: ");
        scanf("%d", &nbr);
        printf("You entered: %d\n", nbr);
    }

    return 0;
}
