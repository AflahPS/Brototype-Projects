#include <stdio.h>
#include <stdlib.h>

void getArray(int array[], int arrSize);
void displayArray(int array[], int arrSize);

int main(void)
{
    int arrSize, i;
    printf("Enter array-size: ");
    scanf("%d", &arrSize);
    int array[arrSize];
    getArray(array, arrSize);
    displayArray(array, arrSize);

    return 0;
}
void getArray(int array[], int arrSize)
{
    printf("Please enter the numbers of array: \n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t", i + 1);
        scanf("%d", &array[i]);
    }
}
void displayArray(int array[], int arrSize)
{
    printf("Numbers of array are: \n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("number-%d: \t%d\n", i + 1, array[i]);
    }
}