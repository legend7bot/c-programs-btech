#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");

    return 0;
}