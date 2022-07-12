#include <string.h>
#include <stdio.h>

void strreverse(char str[]);

int main()
{
    char str[100];
    printf("Enter string: \n");
    scanf("%s", &str);
    strreverse(str);
    
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}

void strreverse(char str[])
{
    str= strrev(str);
    printf("\nReversed string is: %s\n", str);
}