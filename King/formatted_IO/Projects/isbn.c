// 17/08/25
// write a program that breakdown a isbn entered by user

#include <stdio.h>

int main() {
    int gs1Prefix, grpIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN code: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &grpIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n", gs1Prefix);
    printf("Group identifier: %d\n", grpIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
    return 0;
}