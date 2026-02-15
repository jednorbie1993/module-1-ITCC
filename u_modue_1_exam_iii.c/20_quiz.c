#include <stdio.h>

/*
QUESTION 18:
Write a recursive function that computes
3 raised to the power of n.
Example: if n = 4, result = 81.
*/

int power3(int n) {

    if (n == 0)
        return 1;

    return 3 * power3(n - 1);
}

int main() {

    int n;

    printf("Enter exponent: ");
    scanf("%d", &n);

    printf("3^%d = %d\n", n, power3(n));

    return 0;
} //Recursive power of 3