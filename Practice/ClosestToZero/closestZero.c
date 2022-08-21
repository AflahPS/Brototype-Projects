#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j, size,array[100],dist,minDist=99999,index;
    printf("Please enter the array size: \n");
    scanf("%d", &size);
    printf("Please enter the numbers int0 array: \n");

    for (i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (array[i]<0){
            dist=0-(array[i]);
        }else{
            dist=array[i];
        }
        if(dist<minDist){
            minDist=dist;
            index=i;
        }
    }

    printf("\nThe closest-to-zero numbers in array are:\n");

   for (i = 0; i < size; i++)
    {
        if (array[i]<0){
            dist=0-(array[i]);
        }else{
            dist=array[i];
        }
        if(dist==minDist){
            printf("%d \n",array[i]);
        }
    }


    return 0;
}