#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("\n %d is a Leap Year. \n", year);
    else
        printf("\n %d is not a Leap Year. \n", year);
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}