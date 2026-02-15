#include <stdio.h>   // Input/Output functions
#include <float.h>   // Constants para sa floating point types tulad ng FLT_MAX, DBL_MAX

int main(void) {
    // Floating point variables
    float a = 3.1416f;               // maliit at mabilis, ~6 decimal places
    double b = 1.2e-5;               // mid-sized, ~12 decimal places
    long double c = 5000000000.0L;   // pinakamalaki at pinaka-accurate, ~18 decimal places

    // Ipakita gamit ang "fixed-point" notation (%f)
    printf("a=%f\tb=%f\tc=%Lf\n", a, b, c);

    // Ipakita gamit ang "exponential" notation (%e)
    printf("a=%e\tb=%e\tc=%Le\n", a, b, c);

    // Ipakita gamit ang "general" notation (%g)
    printf("a=%g\tb=%g\tc=%Lg\n", a, b, c);

    // Ipakita gamit ang specific precision
    printf("a=%7.6f\tb=%.21e\tc=%.18Lg\n", a, b, c);

    // **Aral:** 
    // 1. Float - mabilis pero limitado ang accuracy (~6 decimal places)
    // 2. Double - mas accurate (~12 decimal places), mas malaki ang storage
    // 3. Long double - pinaka-accurate (~18 decimal places), pinaka-malaking range
    // 4. %f - fixed decimal
    // 5. %e - exponential notation
    // 6. %g - general, pinipili shortest at accurate representation

    return 0;
}
/*
\n ay pababa
\t ay pahalang
*/