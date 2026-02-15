#include <stdio.h>

int main() {
    int w = 10, x = 2, y = 3, z = 4;

    // Order of subexpression evaluation
    int result1 = w * x / y * z; // left to right for same precedence
    printf("w * x / y * z = %d\n", result1);

    int result2 = w * x / y + z / y; // multiplication/division first, then addition
    printf("w * x / y + z / y = %d\n", result2);

    // Using relational operators
    int isEqual = (w == x);
    int isGreater = (w > x);
    int isNotEqual = (w != x);

    printf("w == x : %d\n", isEqual);       // 0 = false
    printf("w > x  : %d\n", isGreater);     // 1 = true
    printf("w != x : %d\n", isNotEqual);    // 1 = true

    // Complex expression
    int complex = w * x / ++y + z / y; // caution: order can affect result
    printf("w * x / ++y + z / y = %d\n", complex);

    return 0;
}
