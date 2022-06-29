#include <string.h>
#include <stdio.h>

void strreverse(char str[]);

int main()
{
    char str[100];
    printf("Enter string: \n");
    scanf("%s", &str);
    strreverse(str);
    return 0;
}

void strreverse(char str[])
{
    str= strrev(str);
    printf("\nReversed string is: %s\n", str);
}