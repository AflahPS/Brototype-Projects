#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int size, i, j;
    printf("Please enter the size of 2D Array: ");
    scanf("%d", &size);
    int array1[size][size], array2[size][size], sum[size][size];
    printf("Please enter the values to array 1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Array 1(%d,%d): ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Please enter the values to array 2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Array 2(%d,%d): ", i + 1, j + 1);
            scanf("%d", &array2[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("Sum of the 2 array is:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Sum(%d,%d): %d\n", i + 1, j + 1, sum[i][j]);
        }
    }

    return 0;
}