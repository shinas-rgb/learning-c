// 15/08/25
// Volume of the sphere

#include <stdio.h>
#define PI 3.14f
#define FRACTION (4.0f / 3.0f)

int main() {
    int r = 10, vol;
    vol = FRACTION * PI * (r * r * r);
    printf("Volume of sphere: %d", vol);
    return 0;
}