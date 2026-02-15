#include <stdio.h>

int main() {
    // Integer variable
    int edad = 32;

    // Float variable
    float taas = 5.9;

    // Double variable
    double timbang = 68.75;

    // Constant (hindi pwedeng baguhin)
    const int TAON_IPINANGANAK = 1993;

    // Ipakita ang values
    printf("Edad: %d taon\n", edad);
    printf("Taas: %.1f talampakan\n", taas);
    printf("Timbang: %.2f kg\n", timbang);
    printf("Taon ng Kapanganakan: %d\n", TAON_IPINANGANAK);

    // Pagbabago ng variable
    edad = 33;  // Pwede ito
    printf("Edad sa Susunod na Taon: %d\n", edad);

    // TAON_IPINANGANAK = 2004; // ❌ Error: constant hindi pwedeng baguhin

    return 0;
}
