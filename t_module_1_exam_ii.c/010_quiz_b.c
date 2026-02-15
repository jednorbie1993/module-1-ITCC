#include <stdio.h>

/*
MODULE 1 - LESSON 2
SECTION 1
Questions and Answers
*/

int main() {

    printf("LESSON 2 - SECTION 1\n\n");

    // 1
    printf("1. What's the difference between an integer variable and a floating-point variable?\n");
    printf("Answer: An integer stores whole numbers, while a floating-point variable stores decimal numbers.\n\n");
    // Tagalog: int = walang decimal, float/double = may decimal.

    // 2
    printf("2. Give two reasons for using double instead of float.\n");
    printf("Answer:\n");
    printf("- Double has more precision.\n");
    printf("- Double can store larger decimal values.\n\n");

    // 3
    printf("3. Five ANSI rules about variable sizes:\n");
    printf("Answer:\n");
    printf("- sizeof(char) is always 1.\n");
    printf("- short <= int <= long.\n");
    printf("- float is smaller than double.\n");
    printf("- char is the smallest addressable unit.\n");
    printf("- Each data type has a defined minimum range.\n\n");

    // 4
    printf("4. Two advantages of symbolic constant over literal constant:\n");
    printf("Answer:\n");
    printf("- Easier to change in one place.\n");
    printf("- Makes code more readable.\n\n");

    // 5
    printf("5. Two ways to define MAXIMUM = 100:\n");
    printf("Answer:\n");
    printf("#define MAXIMUM 100\n");
    printf("const int MAXIMUM = 100;\n\n");

    // 6
    printf("6. What characters are allowed in C variable names?\n");
    printf("Answer: Letters, digits, and underscore (_). Must not start with a digit.\n\n");

    // 7
    printf("7. Guidelines in creating variable names:\n");
    printf("Answer:\n");
    printf("- Use meaningful names.\n");
    printf("- Follow consistent style (camelCase or underscore).\n");
    printf("- Avoid reserved keywords.\n\n");

    // 8
    printf("8. Difference between symbolic and literal constant:\n");
    printf("Answer:\n");
    printf("- Symbolic constant has a name (e.g., MAX = 100).\n");
    printf("- Literal constant is the actual value (e.g., 100).\n\n");

    // 9
    printf("9. Minimum value of int:\n");
    printf("Answer: Usually -2147483648 (depends on system).\n\n");

    // 10
    printf("10. Best variable type for each value:\n");
    printf("a. Age -> int\n");
    printf("b. Weight -> float\n");
    printf("c. Radius -> double\n");
    printf("d. Salary -> double\n");
    printf("e. Cost -> float\n");
    printf("f. Highest grade -> int\n");
    printf("g. Temperature -> float\n");
    printf("h. Net worth -> double\n");
    printf("i. Distance to a star -> double\n\n");

    // 11
    printf("11. Appropriate variable names:\n");
    printf("age, weight, radius, salary, cost, highestGrade,\n");
    printf("temperature, netWorth, starDistance\n\n");

    // 12
    printf("12. Variable declarations:\n");
    printf("int age;\n");
    printf("float weight;\n");
    printf("double radius;\n");
    printf("double salary;\n");
    printf("float cost;\n");
    printf("int highestGrade;\n");
    printf("float temperature;\n");
    printf("double netWorth;\n");
    printf("double starDistance;\n\n");

    // 13
    printf("13. Valid variable names:\n");
    printf("123variable - Invalid\n");
    printf("x - Valid\n");
    printf("total_score - Valid\n");
    printf("Weight_in_#s - Invalid\n");
    printf("one - Valid\n");
    printf("gross-cost - Invalid\n");
    printf("RADIUS - Valid\n");
    printf("Radius - Valid\n");
    printf("radius - Valid\n");
    printf("this_is_a_variable_to_hold_the_width_of_a_box - Valid\n\n");

    return 0;
}