#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int height, i, j,n,count=1;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &n);
    height=2*n-1;    

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= height; j++)
        {
            if(i+j==n+1){
                printf("*");
            }
            else if(i-j==1-n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}