#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int inNum, useNum, dig, numCount, check, i, j, mult;
    int a[10000];

    printf("Please enter a number: \n");
    scanf("%d", &inNum);
    useNum = inNum;
    for (i = 0; useNum > 0; i++)
    {
        dig = useNum % 10;
        a[i] = dig;
        useNum = (useNum - dig) / 10;
    }
    numCount = i;
    check = 0;
    for (i = 0; i < numCount; i++)
    {
        mult = 1;
        for (j = 0; j < numCount; j++)
        {
            mult *= a[i];
        }
        check += mult;
    }
    if (check == inNum)
    {
        printf("%d is an Amstrong number !!", check);
    }
    else
    {
        printf("NO !!");
    }

    return 0;
}