#include <stdio.h>

int main() {
    int a;

    // Relational expressions evaluating to 0 or 1
    a = (5 == 5);        // True, evaluates to 1 or true equal to 1 
    printf("a = (5 == 5) -> a = %d\n", a);

    a = (5 != 5);        // False, evaluates to 0 or false equal to 0
    printf("a = (5 != 5) -> a = %d\n", a);

    a = (12 == 12) + (5 != 1);  // 1 + 1 = 2
    printf("a = (12 == 12) + (5 != 1) -> a = %d\n", a);

    return 0;
}
