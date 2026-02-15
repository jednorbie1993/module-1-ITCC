#include <stdio.h>

int main(void)
{
    const long double pi = 3.141592653590L;
    const int days_in_week = 7;
    const int sunday = 0;

    // days_in_week = 5;   // ❌ Error ito kasi const na siya

    printf("Pi: %Lf\n", pi);
    printf("Days in week: %d\n", days_in_week);
    printf("Sunday value: %d\n", sunday);

    return 0;
}
