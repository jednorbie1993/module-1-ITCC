#include <stdio.h>  // Import ng functions para sa input at output
#include <limits.h> // Import ng mga constants tulad ng INT_MAX, INT_MIN

int main(void) {
    // Itakda ang pinakamataas na value ng unsigned long
    unsigned long big = ULONG_MAX;  

    // Ipakita ang pinakamababang int
    printf("minimum int = %i\n", INT_MIN);  // INT_MIN = pinakamababang value ng int

    // Ipakita ang pinakamataas na int
    printf("maximum int = %i\n", INT_MAX);  // INT_MAX = pinakamataas na value ng int

    // Ipakita ang pinakamataas na unsigned int
    printf("maximum unsigned = %u\n", UINT_MAX);  // UINT_MAX = pinakamataas na value ng unsigned int

    // Ipakita ang pinakamataas na long int
    printf("maximum long int = %li\n", LONG_MAX);  // LONG_MAX = pinakamataas na long int

    // Ipakita ang pinakamataas na unsigned long
    printf("maximum unsigned long = %lu\n", big);  // ULONG_MAX = pinakamataas na unsigned long

    // **Aral:** Alamin ang limit ng bawat numeric type para maiwasan ang overflow at errors
    // **Aral:** INT_MIN, INT_MAX, LONG_MAX, UINT_MAX, ULONG_MAX ay useful sa programming

    return 0; // Tapusin ang program
}
