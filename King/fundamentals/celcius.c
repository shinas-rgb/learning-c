// 15/08/25
// Converting fahrenheit temperature to celcius

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FAC (9.0f / 5.0f)

int main(){
    float f, c;
    printf("Enter Fahrenheit to convert it into celcius: ");
    scanf("%f", &f);
    c = (f - FREEZING_PT) / SCALE_FAC;
    printf("%.2ff = %.2fc\n", f, c); 
    return 0;
}