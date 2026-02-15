#include <stdio.h>  // Nag-iimport ng standard input/output functions

int main() {
    // Integer variable: buong numero
    int edad = 32;  // /**/ edad ng isang tao

    // /**/ Float variable: may decimal
    float taas = 5.9;  // taas sa talampakan

    //  Double variable: mas precise na decimal
    double timbang = 68.75;  // timbang sa kilo

    // Constant: value na hindi pwedeng baguhin
    const int TAON_IPINANGANAK = 1993;  // taon ng kapanganakan

    //  Ipakita ang values sa screen
    printf("Edad: %d taon\n", edad);  // %d para sa integer
    printf("Taas: %.1f talampakan\n", taas);  //  %.1f para sa float, 1 decimal
    printf("Timbang: %.2f kg\n", timbang);  //  %.2f para sa double, 2 decimal
    printf("Taon ng Kapanganakan: %d\n", TAON_IPINANGANAK);  //  constant

    //  Pagbabago ng variable
    edad = 33;  // pwede baguhin kasi variable
    printf("Edad sa Susunod na Taon: %d\n", edad);

    // TAON_IPINANGANAK = 2004; 
    //  Error: constant hindi pwedeng baguhin

    return 0;  //  tapos na ang program
}
