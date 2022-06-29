#include <string.h>
#include <stdio.h>

void strlength(char str1[], char str2[]);
void strcopy(char str1[], char str2[]);
void strconcat(char str1[], char str2[]);
void strcompare(char str1[], char str2[]);

int main()
{
    char str1[100], str2[100];
    printf("Enter string-1: \n");
    scanf("%s", &str1);
    printf("Enter string-2: \n");
    scanf("%s", &str2);
    strlength(str1, str2);
    strcompare(str1, str2);
    strconcat(str1, str2);
    strcopy(str1, str2);
    
    return 0;
}

void strlength(char str1[], char str2[])
{
    int stringlen1, stringlen2;
    stringlen1 = strlen(str1);
    stringlen2 = strlen(str2);
    printf("\nLength of string-1 is %d", stringlen1);
    printf("\nLength of string-2 is %d\n", stringlen2);
}

void strcopy(char str1[], char str2[])
{
    strcpy(str1, str2);
    printf("\nAfter copying str-2 to str-1, str-1 is: %s\n", str1);
}

void strconcat(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("\nAfter concatenating string-2 to string-1, string-1 is: %s\n", str1);
}

void strcompare(char str1[], char str2[]){
    int result;
    result = strcmp(str1, str2);
    if (result == 0)
        printf("\nBoth strings are same\n");
    else if (result > 0)
        printf("\nString-1 is greater than string-2\n");
    else
        printf("\nString-2 is greater than string-1\n");
}