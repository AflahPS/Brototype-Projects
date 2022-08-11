#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, i;
    printf("Please enter the size of Array: ");
    scanf("%d", &arrSize);
    int array1[arrSize], array2[arrSize - 1];
    printf("Insert numbers to Array: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("Number-%d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    for (i = 0; i < arrSize - 1; i++)
    {
        array2[i] = array1[i] * array1[i + 1];
    }
    printf("Product array is: \n");
    for (i = 0; i < arrSize - 1; i++)
    {
        printf("Number-%d: %d\n", i + 1, array2[i]);
    }

    return 0;
}