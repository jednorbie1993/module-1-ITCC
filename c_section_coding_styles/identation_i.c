#include <stdio.h>

int main() {

    int number = 10;

    if (number > 0) {
        printf("Positive number\n");

        if (number > 5) {
            printf("Number is greater than 5\n");
        }
    }
    else {
        printf("Negative number\n");
    }

    return 0;
}
