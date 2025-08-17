// 17/08/25
// Add two fractions updated

#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2, resultNum, resultDenom;
    
    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    resultNum = num1 * denom2 + num2 * denom1;
    resultDenom = denom1 * denom2;

    printf("Result: %d/%d\n", resultNum, resultDenom);
    return 0;
}