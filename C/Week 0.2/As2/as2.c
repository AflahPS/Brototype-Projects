#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrSize, array[1000], count, i, j;

    printf("Please enter array-size : \n");
    scanf("%d", &arrSize);
    printf("Please enter numbers : \n");
    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i=0;i<arrSize;i++){
        count=1;
        for(j=0;j<arrSize;j++){
            if(array[i]==array[j] && i!=j){
                count++;
            }
        }

        printf("Count of %d is: %d\n",array[i],count);
    }
    return 0;
}
