#include <stdio.h>

int main() {
    int numbers[10];

    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of array: %lu bytes\n", sizeof(numbers));

    printf("Number of elements: %lu\n", sizeof(numbers) / sizeof(int));

    return 0;
}
