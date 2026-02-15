#include <stdio.h>

/*
QUESTION 16:
Input integers into an array.
Stop when 0 is entered or array is full.
Display largest and smallest values.
*/

int main() {

    int numbers[100];
    int i = 0, value;
    int largest, smallest;

    printf("Enter integers (0 to stop):\n");

    while (i < 100) {
        scanf("%d", &value);

        if (value == 0)
            break;

        numbers[i] = value;
        i++;
    }

    if (i == 0) {
        printf("No numbers entered.\n");
        return 0;
    }

    largest = smallest = numbers[0];

    for (int j = 1; j < i; j++) {
        if (numbers[j] > largest)
            largest = numbers[j];

        if (numbers[j] < smallest)
            smallest = numbers[j];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}// ex16_min_max.c