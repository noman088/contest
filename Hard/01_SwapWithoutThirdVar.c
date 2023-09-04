
// I.Write a Program to swap two numbers without using third variable

// Input:			Output :
// A= 10			A=20 
// B= 20			B=10

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number ");
    scanf("%d", &a);
    printf("Enter Second Number ");
    scanf("%d", &b);
    printf("Before Swap the Numbers are : a =  %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap the Numbers are : a =  %d  and  b = %d", a, b);
    return 0;
}

