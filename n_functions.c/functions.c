#include <stdio.h>

/* function prototype */
long cube(long x);

int main()
{
    long input, answer;

    printf("Enter a number: ");
    scanf("%ld", &input);

    answer = cube(input);

    printf("Cube is: %ld\n", answer);
    return 0;
}

/* function definition */
long cube(long x)
{
    long result;
    result = x * x * x;
    return result;
}
