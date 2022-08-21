#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j, size;
    printf("Please enter a number: \n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        size = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", size);
            size = size * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}