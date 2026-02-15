#include <stdio.h>

int main() {

    // Declare variable for age
    int age;

    // Ask user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if user is adult
    if (age >= 18) {
        printf("You are an adult.\n");
    } 
    else {
        printf("You are a minor.\n");
    }

    /*
        This program demonstrates:
        - Single line comments
        - Multi-line comments
        - Clear explanation of code
    */

    return 0;
}

