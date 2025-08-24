// 24/08/25
// Computes a universal product code check code

#include <stdio.h>

int main() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int firstSum, secondSum, total;

    printf("Enter the first digit: ");
    scanf("%d", &d);
    printf("Enter first group of five digits: ");
    scanf("%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of 5 digits: ");
    scanf("%d%d%d%d%d", &j1, &j2, &j3, &j4, &j4, &j5);

    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = 3 * firstSum + secondSum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}