#include <stdio.h>

/*
MODULE 1 - LESSON 4
Questions and Answers
*/

int main() {

    printf("SECTION 1\n\n");

    printf("1. Index of first element in array?\n");
    printf("Answer: 0\n\n");

    printf("2. Difference between for and while?\n");
    printf("Answer: for is usually used when number of repetitions is known.\n");
    printf("        while is used when condition controls repetition.\n\n");

    printf("3. Difference between while and do...while?\n");
    printf("Answer: do...while runs at least once.\n");
    printf("        while may not run at all.\n\n");

    printf("4. Can while replace for?\n");
    printf("Answer: Yes.\n\n");

    printf("5. What must be remembered when nesting?\n");
    printf("Answer: Proper use of braces and correct logic structure.\n\n");

    printf("6. Can while be nested in do...while?\n");
    printf("Answer: Yes.\n\n");

    printf("7. Declaration for array of 50 long values:\n");
    printf("long numbers[50];\n\n");

    printf("8. Assign 123.456 to 50th element:\n");
    printf("numbers[49] = 123.456;\n\n");

    printf("9. for (x = 0; x < 100; x++);\n");
    printf("Answer: x = 100\n\n");

    printf("10. for (ctr = 2; ctr < 10; ctr += 3);\n");
    printf("Answer: ctr = 11\n\n");

    printf("11. How many Xs printed?\n");
    printf("Answer: 50\n\n");

    printf("12. For loop from 1 to 100 by 3s:\n");
    printf("for (x = 1; x <= 100; x += 3)\n\n");

    printf("13. While loop from 1 to 100 by 3s:\n");
    printf("x = 1;\nwhile (x <= 100) { x += 3; }\n\n");

    printf("14. Do...while from 1 to 100 by 3s:\n");
    printf("x = 1;\ndo { x += 3; } while (x <= 100);\n\n");

    printf("15. Error: Missing closing brace }\n\n");

    printf("16. Error: Semicolon after for loop.\n\n");

    printf("SECTION 2\n\n");

    printf("1. puts vs printf?\n");
    printf("Answer: puts prints string only.\n");
    printf("        printf allows formatting.\n\n");

    printf("2. Header file for printf?\n");
    printf("Answer: #include <stdio.h>\n\n");

    printf("3. Escape sequences:\n");
    printf("\\\\  = backslash\n");
    printf("\\b  = backspace\n");
    printf("\\n  = new line\n");
    printf("\\t  = tab\n");
    printf("\\a  = alert sound\n\n");

    printf("4. Conversion specifiers:\n");
    printf("string = %%s\n");
    printf("signed int = %%d\n");
    printf("float = %%f\n\n");

    printf("5. Differences: plain letters print normally.\n");
    printf("Escaped versions perform special actions.\n\n");

    return 0;
}