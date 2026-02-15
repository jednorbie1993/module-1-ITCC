#include <stdio.h>

/* function prototype */
long compute(long x, int choice);

int main()
{
    long num;
    int choice;

    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("Choose operation:\n");
    printf("1 - cube\n");
    printf("2 - add (x + x + x)\n");
    printf("3 - subtract (x - x - x)\n");
    scanf("%d", &choice);

    printf("Result: %ld\n", compute(num, choice));

    return 0;
}

/* function definition */
long compute(long x, int choice)
{
    long result;

    if (choice == 1)
        result = x * x * x;
    else if (choice == 2)
        result = x + x + x;
    else if (choice == 3)
        result = x - x - x;
    else
        result = 0;

    return result;
}
