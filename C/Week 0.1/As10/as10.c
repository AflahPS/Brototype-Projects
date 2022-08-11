#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, i, j, temp;
    printf("Please enter the size of arrays: ");
    scanf("%d", &arrSize);
    int array1[arrSize], array2[arrSize];
    printf("Please enter the numbers of array 1: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("Please enter the numbers of array 2: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t", i + 1);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < arrSize; i++)
    {
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }
    printf("After swapping - array 1: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t%d\n", i + 1, array1[i]);
    }
    printf("After swapping - array 2: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t%d\n", i + 1, array2[i]);
    }

    return 0;
}