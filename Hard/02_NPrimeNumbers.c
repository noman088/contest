#include <stdio.h>
int main()
{

    int n, a = 0;
    printf("How Many Prime Numbers Do you Want to Print ? \n");
    scanf("%d", &n);
    for (int i = 2; 1; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
            a++;
        }
        if (a >= n)
            break;
    }
    return 0;
}