#include <stdio.h>
#include <math.h>

float MonthlyPayment(float principle, float rate, int periods) {
    if (periods <= 0) {
        return -1;
    }

    float payment = (principle * rate) / (1 - (1 / pow(1 + rate, periods)));

    return payment;
}

int main() {
    float loanAmount;
    float interestRate;
    int months;
    float payment;

    printf("Ilagay ang halaga ng loan: ");
    scanf("%f", &loanAmount);

    printf("Ilagay ang interest rate (decimal, halimbawa 0.05 = 5%%): ");
    scanf("%f", &interestRate);

    printf("Ilagay ang bilang ng months: ");
    scanf("%d", &months);

    payment = MonthlyPayment(loanAmount, interestRate, months);

    if (payment == -1) {
        printf("Error: Mali ang bilang ng periods.\n");
    } else {
        printf("Monthly payment: %.2f\n", payment);
    }

    return 0;
}
