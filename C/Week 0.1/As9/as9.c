#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j;

    printf("Please enter a number: \t");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}