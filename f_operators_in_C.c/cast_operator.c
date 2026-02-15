#include <stdio.h>

int main() {
    int a = 5, b = 4;
    double result;

    result = (double)a / b;
    printf("Result: %.2f\n", result);  // 1.25

    return 0;
}
//(double)a temporarily makes a a double.