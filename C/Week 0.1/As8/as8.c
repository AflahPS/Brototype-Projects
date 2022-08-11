#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum = 0, i;

    printf("Please enter a limit: \t");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 > 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of odd numbers upto %d is: %d \n", num, sum);

    return 0;
}
