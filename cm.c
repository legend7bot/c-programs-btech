#include <stdio.h>

int main()
{
    float cm, m, km;
    printf("Enter length in centimeter: \n");
    scanf("%f", &cm);
    m = cm / 100.0;
    km = cm / 100000.0;
    printf("Length in Meter = %.2f m \n", m);
    printf("Length in Kilometer = %.2f km \n", km);
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return (0);
}