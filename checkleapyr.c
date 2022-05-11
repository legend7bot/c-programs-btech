#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);

    else if (year % 100 == 0)
        printf("%d is not a leap year.\n", year);

    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);

    else
        printf("%d is not a leap year.\n", year);
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}