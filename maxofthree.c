#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers to check maximum: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            printf("\n%d is greater", num1);
        }
        else
        {
            printf("\n%d is greater", num3);
        }
    }
    else
    {
        if (num2 >= num3)
        {
            printf("\n%d is greater", num2);
        }
        else
        {
            printf("\n%d is greater", num3);
        }
    }

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}