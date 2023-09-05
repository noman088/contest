// III.Write a Program to print  the following  pattern  ..

//    *
// * * * *
//  *   *
// * * * *
//    *

// Logic
// first divide every * with row and column
// suppose i is row and j is column
// Now write down what is the value of i and j where you need to print * otherwise print _ (space)

// Here is what it looks like
// i=0  j=3
// i=1  j=0,2,4,6
// i=2  j=1,5
// i=3  j=0,2,4,6
// i=4  j=3

// Now convert the logic into code

// if You still don't understand properly then and only then look following code that's how you can build logic

#include <stdio.h>
int main()
{
    int a;
    printf("How many Star do you want to print : ");
    scanf("%d", &a);
    while (a--)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (i % 2 != 0)
                {
                    if (j % 2 == 0)
                        printf("*");
                    else
                        printf(" ");
                }
                if (i == 2)
                {
                    if (j == 1 || j == 5)
                        printf("*");
                    else
                        printf(" ");
                }
                if (i % 4 == 0)
                    if (j == 3)
                        printf("*");
                    else
                        printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}