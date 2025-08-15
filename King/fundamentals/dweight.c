//15/08/25
//Computes the dimensional weight of a 12" x 10" x 8" box

#include <stdio.h>

int main() {
    int height = 10;
    int length = 12;
    int width = 8;
    int volume, weight;

    volume = height * length * width;
    weight = ((volume + 165) / 166);
    printf("Dimensional weight of 12 x 10 x 8 box: %d\n", weight);
    return 0;
}