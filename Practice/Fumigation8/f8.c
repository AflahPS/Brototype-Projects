#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit, i, j, flag;
    int array[1000];

    printf("\nPlease enter a number : \n");
    scanf("%d", &limit);

    for (i = 0; i < limit; i++)
    {
        array[i] = i + 1;
    }
    printf("\nGiven array is: \n");
    for (i = 0; i < limit; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\nArray after skipping: \n");
    //Check if prime,if true skip two elements.
    for (i = 0; i < limit; i++)
    {
        flag = 0;
        if (array[i] == 2)
        {
            flag = 1;
        }
        else
        {
            for (j = 2; j < array[i]; j++)
            {
                if (array[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            printf("%d ", array[i]);
            i += 2;
        }
        else
        {
            printf("\n%d ", array[i]);
        }
    }

    return 0;
}
