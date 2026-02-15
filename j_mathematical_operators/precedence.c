#include <stdio.h>

int main() {
    int a, b, c;

    // Example 1: Walang parentheses
    a = 4 + 5 * 3;
    printf("Without parentheses: a = %d\n", a);

    // Example 2: May parentheses
    b = (4 + 5) * 3;
    printf("With parentheses: b = %d\n", b);

    // Example 3: Mas complex
    c = 25 - (2 * (10 + (8 / 2)));
    printf("Nested parentheses: c = %d\n", c);

    return 0;
}
