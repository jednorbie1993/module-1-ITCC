/*
MODULE 1 – INTRODUCTION TO PROGRAMMING
Answers with short English explanation
May Tagalog explanation sa comments para mas maintindihan mo.
*/

#include <stdio.h>
#include <string.h>

/* ---------- SECTION 1 ANSWERS (Printed) ---------- */

void section1() {

    printf("SECTION 1 ANSWERS\n\n");

    printf("1. Three advantages of C language:\n");
    printf("- Fast and efficient\n");
    printf("- Portable (can run on many systems)\n");
    printf("- Close to hardware (good for system programming)\n\n");
    // Tagalog: Mabilis, pwede sa iba't ibang OS, at malapit sa hardware kaya powerful.

    printf("2. The compiler translates C source code into machine code.\n\n");
    // Tagalog: Ginagawang 0 at 1 ang code para maintindihan ng computer.

    printf("3. Program development cycle:\n");
    printf("- Write code\n- Compile\n- Fix errors\n- Run\n- Test/Debug\n\n");

    printf("4. Command to compile PROGRAM1.C (using gcc):\n");
    printf("gcc PROGRAM1.C -o program1\n\n");

    printf("5. Most modern compilers (like gcc) do compiling and linking in one command.\n\n");

    printf("6. C source files use .c extension.\n\n");

    printf("7. FILENAME.TXT is NOT a valid C source file (wrong extension).\n\n");

    printf("8. If program does not work, debug and check your logic.\n\n");

    printf("9. Machine language is binary (0s and 1s) understood by CPU.\n\n");

    printf("10. The linker combines object files and libraries into one executable file.\n\n");

    printf("12. Program computes the area of a circle using radius input.\n\n");

    printf("13. Program prints a 10x10 block of X characters.\n\n");

    printf("14. Error is in line 3: main(); should be main()\n\n");

    printf("15. Error: do_it() is not defined.\n\n");

    printf("16. printf(\"%%c\", 1); prints a character with ASCII value 1.\n\n");
}


/* ---------- SECTION 2 ANSWERS ---------- */

void section2() {

    printf("\nSECTION 2 ANSWERS\n\n");

    printf("1. A group of statements inside braces is called a block.\n\n");

    printf("2. Every C program must have main().\n\n");

    printf("3. Comments are added using // or /* */ and are used for explanation.\n\n");

    printf("4. A function is a reusable block of code.\n\n");

    printf("5. Two types of functions:\n");
    printf("- Library functions (e.g., printf)\n");
    printf("- User-defined functions\n\n");

    printf("6. #include is used to include header files.\n\n");

    printf("7. Comments cannot be nested.\n\n");

    printf("8. Yes, comments can be multi-line using /* */\n\n");

    printf("9. Another name for include file is header file.\n\n");

    printf("10. An include file contains function declarations and macros.\n\n");

    printf("11. Smallest program possible:\n");
    printf("int main(){return 0;}\n\n");

    printf("14. Program prints capital letters A to Z.\n\n");

    printf("15. Program asks for name and counts characters.\n\n");
}


/* ---------- SECTION 3 ANSWERS ---------- */

void section3() {

    printf("\nSECTION 3 ANSWERS\n\n");

    printf("1. Variable name ratings:\n");
    printf("mlpp - Bad (not clear)\n");
    printf("MaximumNumberOfprintLinesPerPage - Too long\n");
    printf("MaxLinesPerPage - Best choice\n\n");

    printf("2. Use camelCase or underscores.\nExample: maxLinesPerPage or max_lines_per_page\n\n");

    printf("3. pachNames (Hungarian notation):\n");
    printf("pa = pointer to array\nch = character\n");
    printf("It refers to pointer to array of characters (string).\n\n");

    printf("4. If code is too long on screen:\n");
    printf("- Break into multiple lines\n");
    printf("- Use smaller indentation\n");
    printf("- Increase editor width\n\n");
}


/* ---------- EXTRA: SAMPLE PROGRAMS FROM QUESTIONS ---------- */

// 10x10 X pattern (Exercise 13 demo)
void printBlock() {
    int x, y;

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("X");
        }
        printf("\n");
    }
}

// Print A-Z (Exercise 14 demo)
void printAlphabet() {
    int ctr;
    for (ctr = 65; ctr < 91; ctr++) {
        printf("%c", ctr);
    }
    printf("\n");
}


int main() {

    section1();
    section2();
    section3();

    printf("\n--- DEMO OUTPUTS ---\n\n");

    printf("10x10 Block:\n");
    printBlock();

    printf("\nAlphabet A-Z:\n");
    printAlphabet();

    return 0;
}
