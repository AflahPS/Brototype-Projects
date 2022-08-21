#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int limit, i, j, flag;

    printf("Please enter a number: \n");
    scanf("%d", &limit);

    printf("Prime numbers upto %d are: \n",limit);

    for (i = 1; i <= limit; i++)
    {
        flag = 0;
        if (i == 2)
        {
            flag = 1;
        }
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
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
            printf("%d\n", i);
        }
    }

    return 0;
}