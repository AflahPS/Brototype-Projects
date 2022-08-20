#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, array[1000], temp, i, j;

    printf("\nPlease enter array-size : \n");
    scanf("%d", &arrSize);
    printf("\nPlease enter numbers : \n");
    // Getting the array
    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nGiven array is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }
    // Deleting Duplicate
    for (i = 0; i < arrSize; i++)
    {
        for (j = 0; j < arrSize; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                array[j] = array[j + 1];
                arrSize--;
            }
        }
    }
    printf("\nUnique element Array is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}
