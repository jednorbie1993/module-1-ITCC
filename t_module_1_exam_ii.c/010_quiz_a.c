#include <stdio.h>

/*
MODULE 1 - LESSON 2
Questions and Answers
*/

int main() {

    printf("SECTION 1\n\n");

    printf("1. Integer stores whole numbers, float stores decimal numbers.\n\n");

    printf("2. Reasons to use double:\n");
    printf("- More precision\n");
    printf("- Can store larger decimal values\n\n");

    printf("3. ANSI size rules (always true):\n");
    printf("- sizeof(char) == 1\n");
    printf("- short <= int <= long\n");
    printf("- float < double\n");
    printf("- char is smallest unit\n");
    printf("- Data types have fixed minimum ranges\n\n");

    printf("4. Advantages of symbolic constant:\n");
    printf("- Easier to change value\n");
    printf("- Makes code readable\n\n");

    printf("5. Two ways to define MAXIMUM = 100:\n");
    printf("#define MAXIMUM 100\n");
    printf("const int MAXIMUM = 100;\n\n");

    printf("6. Allowed characters in variable names:\n");
    printf("- Letters\n- Digits\n- Underscore (_)\n\n");

    printf("7. Guidelines:\n");
    printf("- Use meaningful names\n");
    printf("- Follow naming style (camelCase or underscore)\n\n");

    printf("8. Symbolic constant = named constant\n");
    printf("Literal constant = actual number like 10 or 3.14\n\n");

    printf("9. Minimum int value depends on system (commonly -2147483648).\n\n");

    printf("10. Best variable types:\n");
    printf("a. Age -> int\n");
    printf("b. Weight -> float\n");
    printf("c. Radius -> double\n");
    printf("d. Salary -> double\n");
    printf("e. Cost -> float\n");
    printf("f. Highest grade -> int\n");
    printf("g. Temperature -> float\n");
    printf("h. Net worth -> double\n");
    printf("i. Distance to star -> double\n\n");

    printf("SECTION 2\n\n");

    printf("1. x = 5 + 8; is an assignment statement.\n\n");

    printf("2. Expression = combination of values and operators.\n\n");

    printf("3. Operator precedence determines order.\n\n");

    printf("4. If x=10:\n");
    printf("a = x++; -> a=10, x=11\n");
    printf("a = ++x; -> x=11, a=11\n\n");

    printf("5. 10 %% 3 = 1\n\n");

    printf("6. 5 + 3 * 8 / 2 + 2 = 19\n\n");

    printf("7. (5 + 3) * 8 / (2 + 2) = 16\n\n");

    printf("8. False = 0\n\n");

    printf("9. Higher precedence:\n");
    printf("a. <\n");
    printf("b. *\n");
    printf("c. == and != same\n");
    printf("d. > and >= same level\n\n");

    printf("10. Compound operators: += -= *= /= %%=\n\n");

    return 0;
}