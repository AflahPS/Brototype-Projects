#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int height, i, j,n,count=1;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &n);
    

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\n",i);
        }
        for (j = 1; j <= i+1; j++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }

    return 0;
}