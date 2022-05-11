#include <stdio.h>
int main()
{
    int num, i;
    printf(" Enter a number: ");
    scanf(" %d", &num);

    printf("\n Table of %d", num);

    for (i = 1; i <= 12; i++)
    {
        printf("\n %d * %d = %d", num, i, (num * i));
    }
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}
