// 15/08/25
// calculate tax 

#include <stdio.h>
#define TAX_PERC 5

int main() {
    float tax, amount;

    printf("Enter amount: ");
    scanf("%f", &amount);
    tax = TAX_PERC * amount / 100;
    printf("Amount with tax: %.2f", tax + amount);
    return 0;
}