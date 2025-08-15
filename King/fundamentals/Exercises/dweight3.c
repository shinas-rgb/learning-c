// 15/08/25
// remove weight variable and print directly

#include <stdio.h>

int main () {
    int height = 10, width = 12, length = 8, volume;

    volume = height * width * length;
    printf("Dimensional weight: %d", (volume + 165) / 166);
    return 0;
}