#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, i, count = 0;
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
        if (array[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("Number of even numbers in the given array is: %d\n", count);

    return 0;
}