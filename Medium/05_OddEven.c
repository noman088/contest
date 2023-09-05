// V.	Write a program to check whether a number is Odd or Even . take input from user..
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);
    return 0;
}