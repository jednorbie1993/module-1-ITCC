#include <stdio.h>

/* SYMBOLIC CONSTANTS (preprocessor) */
#define GRAMS_PER_POUND 454   // parang automatic replace: 454
#define PASSING_GRADE 75

int main() {

    /* VARIABLE DECLARATIONS */
    int year_of_birth;
    int age_in_2000;
    int grade;
    long weight_pounds;
    long weight_grams;

    /* INPUT STATEMENTS */
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);     // %d = specifier for int

    printf("Enter your weight in pounds: ");
    scanf("%ld", &weight_pounds);    // %ld = specifier for long

    printf("Enter your grade: ");
    scanf("%d", &grade);

    /* EXPRESSIONS + ASSIGNMENT */
    age_in_2000 = 2000 - year_of_birth;            // expression: 2000 - year_of_birth
    weight_grams = weight_pounds * GRAMS_PER_POUND; // uses symbolic constant

    /* OUTPUT */
    printf("\nYou were %d years old in year 2000.", age_in_2000);
    printf("\nYour weight in grams is %ld.", weight_grams);

    /* RELATIONAL + IF STATEMENT + COMPOUND STATEMENT (BLOCK) */
    if (grade >= PASSING_GRADE) {
        printf("\nStatus: PASSED ");
    } else {
        printf("\nStatus: FAILED ");
    }

    /* LOGICAL + COMPLEX EXPRESSION */
    if (age_in_2000 > 0 && grade >= 60) {
        printf("\nYou are eligible for evaluation.");
    }

    return 0;
}
