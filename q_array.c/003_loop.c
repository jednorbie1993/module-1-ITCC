#include <stdio.h>

int main()
{
    int count;
    int array[1000];

    for (count = 0; count < 1000; count++) {
        array[count] = 50;
    }

    printf("Done!\n");
    return 0;
}
