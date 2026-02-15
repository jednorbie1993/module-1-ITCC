#include <stdio.h>

int main() {
    int a = 5, b = 10, x; // kaya tinawag na comma operator kasi ung dulo lang kukunin kasi may ganto , 
    // so na sa lang ng x ung value b = 10 katabi ni x so x = 10 ganun lang kinuha lng un katabi
    x = (a++, b++);

    printf("x = %d\n", x); // 10
    printf("a = %d\n", a); // 6
    printf("b = %d\n", b); // 11

    return 0;
}
