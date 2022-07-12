// 23
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 1; i < n; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
}
