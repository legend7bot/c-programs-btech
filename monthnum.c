//16
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of month to fetch number of days: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    case 2:
        printf("28 or 29 days");
        break;
    default:
        printf("Invalid month");
        break;
    }

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}