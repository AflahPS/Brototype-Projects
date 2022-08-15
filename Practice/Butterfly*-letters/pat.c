#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, i, j;
    char let = 'A';
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= h - i + 1; j++)
        {
            (j % 2 == 0) ? printf("%c ", let++) : printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= h -1; i++)
    {
        for (j = 1; j <= h - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i+1; j++)
        {
            (j % 2 == 0) ? printf("%c ", let++) : printf("* ");
        }
        printf("\n");
    }

    return 0;
}