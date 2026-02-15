#include <stdio.h>

int main(void) {
    // Named constants gamit ang const
    const long double pi = 3.141592653590L;  // long double constant
    const int days_in_week = 7;              // integer constant
    const int sunday = 0;                     // integer constant (default type)

    // Subukan i-assign sa constant → magka-error
    // days_in_week = 5;  // ❌ Error: "invalid lvalue", constant hindi pwedeng baguhin

    // Ipakita ang values
    printf("Pi = %.12Lf\n", pi);
    printf("Days in a week = %d\n", days_in_week);
    printf("Sunday = %d\n", sunday);

    // **Aral:**
    // 1. `const` keyword ginagamit para gumawa ng named constants
    // 2. Constants ay **rvalues** → hindi pwedeng lagyan ng bagong value
    // 3. Ordinary variables ay **lvalues** → puwede ilagay sa kaliwa ng "="
    // 4. Type ng constant explicit kung gumamit ng suffix o keyword
    //    Hal: L → long double, F → float, default → int
    // 5. Mas malinaw gamitin `const` kaysa i-rely sa "." o "F/L" lang sa constants

    return 0;
}
