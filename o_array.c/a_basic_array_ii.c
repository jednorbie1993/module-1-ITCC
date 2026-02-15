#include <stdio.h>

int main() {
    int data[5] = {10, 20, 30, 40, 50};
    int i = 0;

    do {
        printf("%d\n", data[i]);
        i++;
    } while (i < 5);

    return 0;
}
//do while