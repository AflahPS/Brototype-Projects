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
    // Sorting descending
    for (i = 0; i < arrSize; i++)
    {
        for (j = i + 1; j < arrSize; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nArrayafter sorting is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }
    // Making the array unique (Sorted array)
    // limit is given arrSize-1 since inside for loop trying to access/compare array[i+1].
    for (i = 0; i < arrSize - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            for (j = i + 1; j < arrSize - 1; j++)
            {
                array[j] = array[j + 1];
            }
            arrSize--;
            i--;
        }
    }
    printf("\nUnique Sorted Array is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\nSeconfd largest element is : %d", array[1]);

    return 0;
}
