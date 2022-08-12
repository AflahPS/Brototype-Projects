#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, i, j, count = 1;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        count = 0;
        for (j = 1; j <= h - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
            if (j < i)

            {
                printf("%d", i + count);
                count++;
            }
            else if (j == i)
            {
                printf("%d", i + count);
            }
            else if (j > i)
            {
                count--;
                printf("%d", i + count);
            }
        printf("\n");
    }

    return 0;
}