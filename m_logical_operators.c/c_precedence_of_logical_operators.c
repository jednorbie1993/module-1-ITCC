#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;

    // && has higher precedence than ||
    if (a < b || a < c && c < d)
        printf("Expression is TRUE\n");

    // Using parentheses to change order
    if ((a < b || a < c) && c < d) // kaya dalawang parentheses para mas klaro group sya kung baga 
        printf("Modified expression is TRUE\n");
    // sample ((a < b || a < c) vs && c < d)
    return 0;
}
