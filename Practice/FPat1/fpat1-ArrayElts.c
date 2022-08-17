#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s = 2, i, k, j, arrSize, array[1000], count = 0;
    printf("Please enter array size: \n");
    scanf("%d", &arrSize);
    printf("Enter numbers: \n");

    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    // Delete duplucate
    for (i = 0; i < arrSize; i++)
    {

        for (j = 0; j < arrSize; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                for (k = j; k < arrSize - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                arrSize--;
                i--;
            }
        }
    }
    printf("Array after deletion: \n");
    for (i = 0; i < arrSize; i++)
    {
        printf("%d-", array[i]);
    }
    printf("Final Pattern: \n");
    //For printing pattern
    for (i = 0; count < arrSize; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (count < arrSize)
            {
                printf("%d\n", array[count]);
                count++;
            }
        }
        for (j = 1; j <= s; j++)
        {
            if (count < arrSize)
            {
                printf("%d ", array[count]);
                count++;
            }
        }
        printf("\n");
        s *= 2;
    }

    return 0;
}
