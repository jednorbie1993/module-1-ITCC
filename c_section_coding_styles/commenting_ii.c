/* COMMENTS.C */
/* Halimbawa ng paggamit ng comments nang maayos sa C */
/* Author: Jed Jarin */
/* Compiler: GCC o iba pang C compiler */
/* Date: January 2026 */
/* Purpose: Ipakita kung paano maglagay ng useful comments sa program */

#include <stdio.h>
#include <math.h>  // ✅ kailangan para sa pow()

/* FUNCTION: MonthlyPayment
   Kinakalkula ang periodic payment sa isang loan
   Arguments:
   - principle: halaga ng loan
   - rate: periodic interest rate
   - periods: bilang ng periods
   NOTE: Siguraduhing ang rate at periods ay pareho ang unit (monthly, yearly, etc.)
   Returns: periodic payment, -1 kung may error
*/
float MonthlyPayment(float principle, float rate, int periods) {
    if (periods <= 0) {
        // Kung walang periods o 0, error
        return -1;
    }

    // Formula para sa monthly payment
    float payment = (principle * rate) / (1 - (1 / pow(1 + rate, periods)));

    return payment;
}

int main() {
    float loanAmount;   // Halaga ng loan
    float interestRate; // Rate ng interest per period
    int months;         // Bilang ng months o periods
    float payment;      // Resulta ng calculation

    // User input
    printf("Ilagay ang halaga ng loan: ");
    scanf("%f", &loanAmount);

    printf("Ilagay ang interest rate (decimal, halimbawa 0.05 = 5%%): ");
    scanf("%f", &interestRate);

    printf("Ilagay ang bilang ng months: ");
    scanf("%d", &months);

    // Tawagin ang function para makuha ang monthly payment
    payment = MonthlyPayment(loanAmount, interestRate, months);

    // Check kung may error
    if (payment == -1) {
        printf("Error: Mali ang bilang ng periods.\n");
    } else {
        printf("Monthly payment: %.2f\n", payment);
    }

    return 0;
}
