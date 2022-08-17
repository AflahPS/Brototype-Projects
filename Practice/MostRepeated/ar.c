#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, arrSize, count, maxcount = 1, index;
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
        count = 1;
        for (j = 0; j < arrSize; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            index = i;
        }
    }
    if(maxcount==1){
        printf("\nAll numbers are unique\n");
    }else{
        printf("%d is the most repeating element. \n",array[index]);

    }


    return 0;
}