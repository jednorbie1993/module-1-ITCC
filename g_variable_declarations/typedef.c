#include <stdio.h>

typedef int integer;   // gumawa ng alias ng int

int main() {
    // Variable declarations
    int age = 20;
    float grade = 92.5;
    char letter = 'A';

    // Using typedef
    integer count = 5;

    // Output
    printf("Age: %d\n", age);
    printf("Grade: %.1f\n", grade);
    printf("Letter: %c\n", letter);
    printf("Count: %d\n", count);

    return 0;
}
