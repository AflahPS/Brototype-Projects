#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, k;
    printf("Enter the size of the butterfly: \n");
    scanf("%d", &n);
    printf("* ");

    for (i = 1; i <= n ; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (j = 1; j <= 3 * i; j++)
        {
            (j % 2 == 0) ? printf("* ") : printf("$ ");
        }
        printf("\n");
    }
    return 0;
}