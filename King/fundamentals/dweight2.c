// 15/08/25
// Dimensional weight of a box from the input provided by user

#include <stdio.h>

int main() {
    int height, length, width, weight, volume;

    printf("Enter the height, length, width of box: ");
    scanf("%d%d%d", &height, &length, & width);
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensional weight: %d", weight);
    return 0;
}