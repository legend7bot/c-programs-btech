#include <stdio.h>

int main() {
    // Write C code here
    int num1, num2;
    printf("Enter two numbers to check maximum: \n");
    scanf("%d%d", &num1, &num2);
    if (num1>num2){
        printf("%d is greater", num1);
    }
    else if(num2>num1){
        printf("%d is greater", num2);
    }
    else{
        printf("Given numbers are equal");
    }
    printf("\033[1;33m");
    printf("\n Harsh Vardhan Sharma \n IT-C \n 119-ITC-21");
    return 0;
}