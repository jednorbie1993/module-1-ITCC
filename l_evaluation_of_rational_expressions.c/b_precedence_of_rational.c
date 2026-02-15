#include <stdio.h>

int main() {
    int x = 5, y = 6, z = 3;

    // Mathematical operators first, then relational
    if (x + 2 > y) 
        printf("x + 2 is greater than y\n");
    else
        printf("x + 2 is NOT greater than y\n");

    // Relational operators precedence
    if (x == y > z) // same as x == (y > z)
        printf("x equals (y > z)\n");
    else
        printf("x does NOT equal (y > z)\n");

    return 0;
}
