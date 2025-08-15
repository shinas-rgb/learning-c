// 15/08/25
// find value of polynomial using Horner's rule

#include <stdio.h>

int main() {
    int x, result;

    printf("Enter a number for x: ");
    scanf("%d", &x);
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result: %d", result);
    return 0;
}