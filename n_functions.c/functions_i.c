#include <stdio.h>

/* function */
int square(int x)
{
    return x * x;
}

int main()
{
    int num = 5;

    printf("%d\n", square(num));

    return 0;
}
