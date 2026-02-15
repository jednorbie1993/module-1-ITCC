#include <stdio.h>

float MonthlyPayment(float principle, float rate, int periods) {
    if (periods <= 0) {
        return -1;
    }

    float result = principle;
    for (int i = 0; i < periods; i++) {
        result = result * (1 + rate);  // dagdagan ng interest bawat period
    }

    float payment = result / periods; // hatiin sa total periods para sa approximate monthly payment

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
        printf("Approximate monthly payment: %.2f\n", payment);
    }

    return 0;
}
