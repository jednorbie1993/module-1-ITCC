#include <stdio.h>

/*
This program prints capital letters A to Z
using ASCII values.
*/

int main() {

    int ctr;

    for (ctr = 65; ctr <= 90; ctr++) {
        printf("%c ", ctr);
    }

    return 0;
}// alphabet.c