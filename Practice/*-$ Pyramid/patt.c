#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    printf("Enter the size : \n");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            (j % 2 == 0) ? printf("$ ") : printf("* ");
        }
        printf("\n");
    }
    return 0;
}