#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    int count;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count = n+1-i;
        for (j = 1; j <= i; j++)
        {
           printf("%d",count);
           count++;
        }
        printf("\n");
    }

    return 0;
}