#include <stdio.h>

#define PI 3.1415926535
#define DAYS_IN_WEEK 7
#define SUNDAY 0

int main() {
    float radius = 5;
    float area = PI * radius * radius;

    int day = SUNDAY;

    printf("Radius: %.2f\n", radius);
    printf("Area of circle: %.2f\n", area);
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Sunday value: %d\n", day);

    return 0;
}
