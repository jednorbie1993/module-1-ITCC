#include <stdio.h>

int main() {
    int array[5];
    int count;

    for (count = 0; count < 5; array[count++] = 50)
        ;

    for (count = 0; count < 5; count++) {
        printf("%d\n", array[count]);
    }

    return 0;
}
