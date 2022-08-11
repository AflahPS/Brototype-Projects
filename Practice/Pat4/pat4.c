#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int h, i, j;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= 2 * h; i++)
    {
        for (j = 1; j <= h; j++)
        {
            if (i <= h && i > j || i > h && 2 * h - i+1  > j)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}