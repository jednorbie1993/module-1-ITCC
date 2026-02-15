#include <stdio.h>

/*
    FUNCTION HEADER / PROTOTYPE
    - return type: int
    - function name: add
    - parameters: int a, int b
*/
int add(int a, int b);

/*
    FUNCTION HEADER / PROTOTYPE
    - void means no return value
*/
void print_message(void);

int main(void)
{
    int x, y, result;

    // Ask user for input
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    // Call the function
    result = add(x, y);

    // Print the result
    printf("Sum: %d\n", result);

    // Call void function
    print_message();

    return 0;
}

/*
    FUNCTION DEFINITION
    - same name as header
    - contains the actual code
*/
int add(int a, int b)
{
    return a + b;   // returns ONE value
}

/*
    void function
    - does not return anything
*/
void print_message(void)
{
    printf("Program finished successfully.\n");
}
