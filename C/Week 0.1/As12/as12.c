#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &arrSize);
    int array[arrSize];
    printf("Please enter the numbers of array: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t", i + 1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < arrSize; i++)
    {
        for (j = i + 1; j < arrSize; j++)
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
    }
    printf("Sorted array is : \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d \t", array[i]);
    }

    return 0;
}