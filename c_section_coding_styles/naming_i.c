#include <stdio.h>

#define MAX_SCORE 100

int main() {

    int studentAge;
    int totalStudents;
    float averageScore;

    studentAge = 20;
    totalStudents = 30;
    averageScore = 89.5;

    printf("Student Age: %d\n", studentAge);
    printf("Total Students: %d\n", totalStudents);
    printf("Average Score: %.1f\n", averageScore);
    printf("Max Score Allowed: %d\n", MAX_SCORE);

    return 0;
}
