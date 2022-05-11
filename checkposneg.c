#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number: \n");
    scanf("%d", &num1);
    if (num1 > 0)
    {
        printf("Number is positive");
    }
    if (num1 < 0)
    {
        printf("Number is negative");
    }
    if (num1 == 0)
    {
        printf("Number is zero");
    }
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}