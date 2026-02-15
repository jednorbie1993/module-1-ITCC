#include <stdio.h>

/*
MODULE 1 - LESSON 3
Structured Programming
Questions and Answers
*/

int main() {

    printf("LESSON 3 - SECTION 1\n\n");

    printf("1. Why is structured programming an advantage?\n");
    printf("Answer: It makes programs easier to read, test, debug, and maintain.\n\n");

    printf("2. How does structured programming work?\n");
    printf("Answer: By dividing a program into small functions or modules.\n\n");

    printf("3. How do C functions fit into structured programming?\n");
    printf("Answer: Functions allow breaking the program into reusable modules.\n\n");

    printf("4. What must be the first line of a function definition?\n");
    printf("Answer: The function header (return type, name, parameters).\n\n");

    printf("5. How many values can a function return?\n");
    printf("Answer: One value.\n\n");

    printf("6. If a function does not return a value, what type?\n");
    printf("Answer: void\n\n");

    printf("7. Difference between function definition and prototype?\n");
    printf("Answer: Prototype declares function. Definition contains actual code.\n\n");

    printf("8. What is a local variable?\n");
    printf("Answer: A variable declared inside a function.\n\n");

    printf("9. How are local variables special?\n");
    printf("Answer: They only exist inside the function where declared.\n\n");

    printf("10. Header for do_it():\n");
    printf("float do_it(char a, char b, char c);\n\n");

    printf("11. Header for print_a_number():\n");
    printf("void print_a_number(int x);\n\n");

    printf("12a. int print_error(float err_nbr); returns int\n");
    printf("12b. long read_record(int rec_nbr, int size); returns long\n\n");

    printf("13. Errors in listing:\n");
    printf("- print_msg() declared void but returns 0\n");
    printf("- print_msg() takes no argument but called with argument\n\n");

    printf("14. Error: Semicolon after function header.\n\n");

    return 0;
}