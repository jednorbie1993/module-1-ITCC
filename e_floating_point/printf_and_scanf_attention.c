#include <stdio.h>

int main(void)
{
    short a;
    short b = 10;

    printf("Type a number: ");
    scanf("%hi", &a);   // %hi = short integer

    printf("a = %hi, b = %hi\n", a, b);

    return 0;
}
