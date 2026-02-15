#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i, j;

    for (i = 0, j = 4; i < 5; i++, j--) {
        b[j] = a[i];
    }

    for (i = 0; i < 5; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
