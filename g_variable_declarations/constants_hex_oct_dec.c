#include <stdio.h>

int main() {

    /* =====================================================
       PART 1: Declaring numbers in different bases
       ===================================================== */

    int dec = 25;     // Decimal (base 10)
    int oct = 031;    // Octal   (base 8)  → 031₈ = 25₁₀
    int hex = 0x19;   // Hex     (base 16) → 0x19₁₆ = 25₁₀


    /* =====================================================
       PART 2: Printing the values using FORMAT SPECIFIERS
       ===================================================== */

    // %d → print as decimal
    // %o → print as octal
    // %x → print as hexadecimal (lowercase)
    // %X → print as hexadecimal (uppercase)

    printf("Decimal format (%%d): %d\n", dec);
    printf("Octal format   (%%o): %o\n", dec);
    printf("Hex format     (%%x): %x\n", dec);
    printf("Hex format     (%%X): %X\n\n", dec);


    /* =====================================================
       PART 3: Showing that all are equal inside the program
       ===================================================== */

    printf("dec = %d\n", dec);
    printf("oct = %d\n", oct);
    printf("hex = %d\n", hex);

    // Output ng tatlo ay pare-pareho: 25


    /* =====================================================
       PART 4: The FORMULA behind the scenes (explanation)
       ===================================================== */

    /*
       oct = 031
       = (3 × 8¹) + (1 × 8⁰)
       = (3 × 8)  + (1 × 1)
       = 24 + 1
       = 25

       hex = 0x19
       = (1 × 16¹) + (9 × 16⁰)
       = (1 × 16)  + (9 × 1)
       = 16 + 9
       = 25
    */

    return 0;
}
