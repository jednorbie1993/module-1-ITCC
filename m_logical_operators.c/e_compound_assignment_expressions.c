#include <stdio.h>

int main() {
    int x = 12;
    int z;

    z = x += 2;

    printf("x = %d\n", x); // 14
    printf("z = %d\n", z); // 14

    return 0;
}
