#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;

    printf("Enter the Length of Rectangle: ");
    scanf("%d", &length);

    printf("\nEnter the Breadth of Rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea or Rectangle : %d", area);
    printf("\nPerimeter of Rectangle : %d", perimeter);

    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}