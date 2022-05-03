#include <stdio.h>
#include <math.h>

int main()
{
    int p, t;
    float r, si, amount, ci;

    printf("Enter prinipal, time and rate of interest \n");

    scanf("%d%d%f", &p, &t, &r);
    si = p * t * r / 100;
    printf("Simple interest = %.3f", si);

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("\n Compound interest = %.3f", ci);
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}