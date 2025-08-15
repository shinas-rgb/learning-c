// 15/08/25
// Volume of the sphere from user input

#include <stdio.h>
#define PI 3.14f
#define FRACTION (4.0f / 3.0f)

int main() {
    int r, vol;

    printf("Enter radius: ");
    scanf("%d", &r);
    vol = FRACTION * PI * (r * r * r);
    printf("Volume of sphere: %d", vol);
    return 0;
}