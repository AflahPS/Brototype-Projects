#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, n, i, j;
    printf("Enter the size of the butterfly: \n");
    scanf("%d", &n);
    size = 2 * n - 1;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            // Center point of the buttrfly
            if(i==n && j== n){
                printf("O ");
                continue;
            }
            else if(j==1 || j==size){
                printf("| ");
                continue;
            }
            // check if diagonal-1
            else if(i==j ){
                printf("\\ ");
                continue;
            }
            // check if diagonal-2
            else if(i+j==size+1){
                printf("/ ");
                continue;
            }
            //intersection of elements under diagonal-1 & over diagonal-2 or vice-versa
            else if (j <= i && i + j <= size+1 || j >= i && i + j >= size+1)
            {
                printf("* ");
                continue;
            }
            else
            {
                printf("  ");
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}