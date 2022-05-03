#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping: x = %d, y= %d", x, y);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}