#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b);
    int addition, subtraction, multiplication, division, modulus;

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    modulus = a % b;

    printf("Addition of two numbers a, b is : %d\n", addition);
    printf("Subtraction of two numbers a, b is : %d\n", subtraction);
    printf("Multiplication of two numbers a, b is : %d\n", multiplication);
    printf("Division of two numbers a, b is : %d\n", division);
    printf("Modulus of two numbers a, b is : %d\n", modulus);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}