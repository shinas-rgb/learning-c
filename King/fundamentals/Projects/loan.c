// 15/08/25
// calculating loan after monthly paymants

#include <stdio.h>

int main() {
    float loanAmount, intrestRate, monthlyPayment;
    float perMonth;
    
    printf("Enter loan amount: ");
    scanf("%f", &loanAmount);
    printf("Enter intrest rate: ");
    scanf("%f", &intrestRate);
    printf("Enter monthly payments: ");
    scanf("%f", &monthlyPayment);
    perMonth = loanAmount - monthlyPayment + (loanAmount * intrestRate / 100 / 12);
    printf("After 1st month: %.2f\n", perMonth);
    perMonth = perMonth - monthlyPayment + (perMonth * intrestRate / 100 / 12);
    printf("After 2nd month: %.2f\n", perMonth);
    perMonth = perMonth - monthlyPayment + (perMonth * intrestRate / 100 / 12);
    printf("After 3rd month: %.2f\n", perMonth);
    return 0;
}