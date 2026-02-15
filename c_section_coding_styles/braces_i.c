#include <stdio.h>

int main() {
    char input;

    printf("Gusto mo bang magpatuloy? (y/n): ");
    scanf(" %c", &input);

    if (input == 'y') {
        int x = 0;
        int y = 1;

        printf("Pinili mo ang oo.\n");
        printf("x = %d, y = %d\n", x, y);
    } else {
        printf("Pinili mo ang hindi.\n");
    }

    printf("Tapos na ang programa.\n");

    return 0;
}
