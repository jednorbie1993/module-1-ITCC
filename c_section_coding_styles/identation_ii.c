#include <stdio.h>

int main() {
    int input;
    int array[5] = {5, 4, 3, 2, 1};
    int i = 0;
    int count = 0;

    printf("Enter 1 for yes, 0 for no: ");
    scanf("%d", &input);

    if (input == 1) {
        do {
            array[i++] = 0;
            count++;
        } while (i < 5);

        printf("All array elements set to zero.\n");
        printf("Total elements modified: %d\n", count);
    } 
    else {
        for (i = 0; i < 5; i++) {
            printf("Array[%d] = %d\n", i, array[i]);
        }
    }

    return 0;
}
