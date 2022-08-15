#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    int flag, i;
    if (num == 0 || num == 1)
    {
        flag = 0;
        return flag;
    }
    else if (num == 2)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
                continue;
            }
        }
    }
    return flag;
}
int main(void)
{
    int i, j, arrSize, count = 0, sum = 0;
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
        if (isPrime(array[i]) == 1)
        {
            printf("%d is prime\n", array[i]);
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
        sum += after[i];
    }
    printf("Array after deletion is: \n");
    for (i = 0; i < sizeAfter; i++)
    {
        printf("%d  ", after[i]);
    }
    printf("\nSum of the elements are: %d\n", sum);

    return 0;
}