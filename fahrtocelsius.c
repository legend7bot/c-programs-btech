#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf(" Enter temperature in fahrenite: \n");
    scanf(" %f", &Fahrenheit);
    Celsius = ((Fahrenheit - 32) * 5) / 9;
    printf("\n\n Temperature in Celsius is : %f", Celsius);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return (0);
}