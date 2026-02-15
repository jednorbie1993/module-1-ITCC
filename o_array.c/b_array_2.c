#include <stdio.h>

int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
