// 15/08/25
// find value of polynomial

#include <stdio.h>

int main() {
    int x, result;

    printf("Enter a number for x: ");
    scanf("%d", &x);
    result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("Result: %d", result);
    return 0;
}