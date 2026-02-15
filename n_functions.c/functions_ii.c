#include <stdio.h>

long square(long x)
{
    return x * x;
}

int main()
{
    long a = 2;
    long b = 5;
    long c = 10;

    printf("%ld\n", square(a));  // CALL #1
    printf("%ld\n", square(b));  // CALL #2
    printf("%ld\n", square(c));  // CALL #3

    return 0;
}
