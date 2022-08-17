#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, k,temp, arrSize;
    int array[10000];

    printf("Please enter array size: \n");
    scanf("%d", &arrSize);
    printf("Enter numbers: \n");

    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Please enter the K (k-th large and smaller): \n");
    scanf("%d", &k);
    for (i = 0; i < arrSize; i++)
    {
        for (j = i + 1; j < arrSize; j++)
        {
            if (array[i] > array[j])
            {
                temp=array[i];
                array[i] = array[j];
                array[j]=temp;
            }
        }
    }
    printf("Array after sorting is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }
    for (i = 0; i < arrSize; i++)
    {
        if (array[i] == array[i + 1])
        {
            for (j = i; j < arrSize ; j++)
            {
                array[j] = array[j + 1];
            }
            arrSize--;
            i--;
        }
    }
    printf("Array after deletion is: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n%d-th smallest is: %d\n", k, array[k - 1]);
    printf("%d-th largest is: %d\n", k, array[arrSize - k]);

    return 0;
}