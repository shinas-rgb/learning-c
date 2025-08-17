// 17/08/25
// Display a date in yymmdd

#include <stdio.h>

int main() {
    int dd, mm, yy;

    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("%d%d%d", yy, mm, dd);
    return 0;
}