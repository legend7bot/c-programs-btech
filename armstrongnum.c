// 22
#include <stdio.h>
void armstrong(int i)
{
    int c = i, s;
    int sum = 0;
    while (i > 0)
    {
        s = i % 10;
        s = s * s * s;
        sum += s;
        i = i / 10;
    }
    if (sum == c)
    {
        printf("%d ", c);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Armstrong numbers upto %d are\n", n);
    for (int i = 1; i <= n; i++)
    {
        armstrong(i);
    }

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
}