#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, i, j, count = 1;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= 2 * h - 1; i++)
    {
        count = 1;
        for (j = 1; j <= 2 * h - 1; j++)
        {
            if (i <= h && j <= 2 * i - 1)
            {
                if (j == 1 || j == 2 * i - 1)
                {
                    printf("* ");
                }
                else if (j > 1 && j < 2 * i - 1 && j < i)
                {
                    printf("%d ", count++);
                }
                else if (j > 1 && j < 2 * i - 1 && j == i)
                {
                    printf("%d ", count);
                }
                else if (j > 1 && j < 2 * i - 1 && j > i)
                {
                    count--;
                    printf("%d ", count);
                }
            }
            else if (i > h && j <= 2 * (2 * h - i) - 1)
            {
                if (j == 1 || j == 2 * (2 * h - i) - 1)
                {
                    printf("* ");
                }
                else if (j > 1 && j < 2 * (2 * h - i) - 1 && j < 2 * h - i)
                {
                    printf("%d ", count++);
                }
                else if (j > 1 && j < 2 * (2 * h - i) - 1 && j == 2 * h - i)
                {
                    printf("%d ", count);
                }
                else if (j > 1 && j < 2 * (2 * h - i) - 1 && j > 2 * h - i)
                {
                    count--;
                    printf("%d ", count);
                }
            }
        }
        printf("\n");
    }

    return 0;
}