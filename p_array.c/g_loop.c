#include <stdio.h>

int main() {
    int array[6] = {5, 3, 7, 2, 0, 9};
    int count;

    for (count = 0; count < 6 && array[count] != 0; count++) {
        printf("%d\n", array[count]);
    }

    return 0;
}
