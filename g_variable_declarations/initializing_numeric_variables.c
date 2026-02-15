#include <stdio.h>

int main() {
    // Declaration muna, saka initialization
    int count;
    count = 0;

    // Declaration with initialization agad
    int age = 18;
    double percent = 0.01;
    float taxrate = 28.5;

    // Output
    printf("Count: %d\n", count);
    printf("Age: %d\n", age);
    printf("Percent: %.2lf\n", percent);
    printf("Tax Rate: %.1f\n", taxrate);

    return 0;
}
