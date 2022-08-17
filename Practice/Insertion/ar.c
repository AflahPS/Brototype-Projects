#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, arrSize, value, index;
    int array[10000];

    printf("Please enter array size: \n");
    scanf("%d", &arrSize);
    printf("Enter numbers: \n");

    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Please enter the value: \n");
    scanf("%d", &value);
    printf("Please enter the position: \n");
    scanf("%d", &index);

   
        
        for (j= arrSize; j >index-1 ; j--)
        {
         array[j]=array[j-1];
        }
        
    
    array[index-1]=value;
    printf("After insertion: \n");
    
    for (i = 0; i < arrSize+1; i++)
    {
        printf("%d\n", array[i]);
    }


    return 0;
}