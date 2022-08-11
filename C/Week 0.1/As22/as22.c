#include <stdio.h>
#include <stdlib.h>

int getArray(int arrSize);
void displayArray(int arrSize,int array[arrSize][arrSize]);

int main(void)
{

    int arrSize;
    printf("Enter array size: \t");
    scanf("%d", &arrSize);
    int sum[arrSize][arrSize], array1[arrSize][arrSize], array2[arrSize][arrSize];
    printf("Enter the values of array 1:\n");
    array1[arrSize][arrSize] = getArray(arrSize);
    printf("Enter the values of array 2:\n");
    array2[arrSize][arrSize] = getArray(arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    displayArray(arrSize,sum[arrSize][arrSize]);
    
    return 0;
}

int getArray(int arrSize)
{
    int array[arrSize];
    printf("Please enter the numbers of array: \n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t", i + 1);
        scanf("%d", &array[i]);
    }
    return array[arrSize];
}
void displayArray(int arrSize,int array[arrSize][arrSize])
{
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; i++)
        {
            printf("%d\t", array[i][j]);
        }
    }
    printf("\n");
}