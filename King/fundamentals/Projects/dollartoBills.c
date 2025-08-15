// 15/08/25
// Convert dollar to smallest bills

#include <stdio.h>

int main() {
    int amount, _20, _10, _5, _1;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    _20 = amount / 20;
    amount = amount - (_20 * 20);
    _10 = amount / 10;
    amount = amount - (_10 * 10);
    _5 = amount / 5;
    amount = amount - (_5 * 5);
    _1 = amount / 1;
    printf("$20: %d\n", _20);
    printf("$10: %d\n", _10);
    printf("$5: %d\n", _5);
    printf("$1: %d\n", _1);
    return 0;
}