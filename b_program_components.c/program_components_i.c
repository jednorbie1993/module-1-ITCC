#include <stdio.h>
// stdio.h = standard input/output
// para gumana ang printf() at scanf()

// Function prototype
// sinasabi nito: may function akong gagamitin na sumint
int sumint(int x, int y);

int main(void) {
    // main = starting point ng program

    int a, b, c;
    // variables:
    // a = first number
    // b = second number
    // c = result (sum)

    printf("Enter first number: ");
    scanf("%d", &a);
    // scanf = tumatanggap ng input mula sa keyboard
    // &a = doon ilalagay yung value

    printf("Enter second number: ");
    scanf("%d", &b);

    c = sumint(a, b);
    // tinawag natin yung function sumint
    // pinasa natin a at b

    printf("\n%d plus %d = %d\n", a, b, c);
    // output: halimbawa 3 plus 5 = 8

    return 0;
    // ibig sabihin: successful natapos ang program
}

/*
Function definition
Ito yung actual na function
*/
int sumint(int x, int y) {
    // x at y = copies ng a at b
    return x + y;
    // ibinabalik yung sum
}

