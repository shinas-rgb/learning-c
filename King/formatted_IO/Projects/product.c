// 17/08/25
// display product information table

#include <stdio.h>

int main() {
    int productNum, dd, mm, yy;
    float price;

    printf("Enter the product number: ");
    scanf("%d", &productNum);

    printf("Enter the price of product: ");
    scanf("%f", &price);

    printf("Enter the purchased date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%.3d\t%.2f\t%.2d/%.2d/%d\n", productNum, price, dd, mm, yy);
    return 0;
}