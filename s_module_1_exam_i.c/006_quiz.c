#include <stdio.h>

/*
This program prints a 10x10 block of X.
*/

int main() {

    int x, y;

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
} //block_x.c