// 20
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact = 1;
    while (n != 1)
    {
        fact = fact * n;
        n--;
    }
    printf("Factorial is %d", fact);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
}