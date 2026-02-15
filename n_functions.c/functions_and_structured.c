/* Illustrates the difference between arguments and parameters */

#include <stdio.h>

float x = 3.5, y = 65.11, z;

/* function prototype */
float half_of(float k);

int main(void)
{
    /* In this call, x is the argument */
    z = half_of(x);
    printf("The value of z = %f\n", z);

    /* In this call, y is the argument */
    z = half_of(y);
    printf("The value of z = %f\n", z);

    return 0;
}

/* function definition */
float half_of(float k)
{
    /* k is the parameter */
    return k / 2;
}
