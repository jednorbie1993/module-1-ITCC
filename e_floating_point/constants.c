#include <stdio.h>

int main(void) {
    // Constant na may "." → double type
    double f = 50000000000.0;  

    // Constant na walang "." → integer type
    // Sa karamihan ng compilers, lalabas ang overflow dahil lumampas sa int range
    double g = 50000000000;    

    // Ipakita ang values
    printf("f = %lf\n", f);  // double, tama ang value
    printf("g = %lf\n", g);  // integer overflow nag-assign sa g, kaya mali ang value

    // **Aral:**
    // 1. Constants sa C may type depende sa format:
    //    - May "." o "e" → double
    //    - May "F" → float
    //    - May "L" → long double
    //    - Walang "." o "e" → int (o long int kung malaki)
    // 2. Importante ito para maiwasan ang **overflow** ng integers
    // 3. Kung gusto ng decimal type, lagyan ng ".0" o "F" o "L" depende sa precision
    // 4. Pag hindi naintindihan, malaking constants na walang "." o "F/L" ay magdudulot ng error

    return 0;
}
