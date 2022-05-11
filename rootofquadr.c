#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c of quadratic equation: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root-1 = %.2lf and Root-2 = %.2lf", root1, root2);
    }

    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Root-1 = Root-2 = %.2lf;", root1);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root-1 = %.2lf+%.2lfi and Root-2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");

    return 0;
}