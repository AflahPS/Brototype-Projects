#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j;
    printf("Please enter the height of the figure: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            if (i == j)
            {
                printf("1");
            }
            else
            {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
    }
    return 0;
}
