#include <stdio.h>

/*
QUESTION 11:
Rewrite the given code to make it more readable.
Original task:
Ask the user to enter two numbers and print the bigger number.
*/

int main() {

    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("%d is bigger\n", x);
    }
    else {
        printf("%d is bigger\n", y);
    }

    return 0;
}// compare_clean.c