#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, arrSize, count = 0;
    int array[10000];

    printf("Please enter array size: \n");
    scanf("%d", &arrSize);
    printf("Enter numbers: \n");

    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < arrSize; i++)
    {
        if (array[i]%2==0)
        {
            for (j = i; j < arrSize - 1; j++)
            {
                array[j] = array[j + 1];
            }
            count++;
            i--;
        }
    }
    int sizeAfter = arrSize - count;
    int after[sizeAfter];
    for (i = 0; i < sizeAfter; i++)
    {
        after[i] = array[i];
    }
    printf("Array after deletion is: \n");
    for (i = 0; i < sizeAfter; i++)
    {
        printf("%d  ", after[i]);
    }
    return 0;
}