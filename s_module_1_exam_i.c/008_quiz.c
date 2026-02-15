#include <stdio.h>
#include <string.h>

/*
This program asks for a name
and counts how many characters it has.
*/

int main() {

    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name has %lu characters.\n", strlen(name) - 1);

    return 0;
}// count_name.c