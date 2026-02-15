#include <stdio.h>

int main() {
    int x = 10;

    printf("%d\n", x > 5 && x < 20);  // 1
    printf("%d\n", x < 5 || x > 8);   // 1
    printf("%d\n", !x);              // 0

    return 0;
}
