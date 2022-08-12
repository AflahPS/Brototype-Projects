#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, i, j;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= 2 * h - 1; i++)
    {
        for (j = 1; j <= 2 * h - 1; j++)
        {
            if (i <= h && j == h + (i - 1) || j == h - (i - 1))
            {
                printf("*");
            }
            else if (i > h && j == h + ((2 * h - 1) - i) || j == h - ((2 * h - 1) - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}