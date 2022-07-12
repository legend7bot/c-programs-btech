// 18
#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    printf("%d", i);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}