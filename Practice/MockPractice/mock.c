#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i, j, s;
    char word[] = {'I','N','D','I','A'};
    
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",word[j]);
        }
        printf("\n");
    }

    
    // printf("Please enter a number: \n");
    // scanf("%d", &num);
    // for (i = 1; i <= num; i++)
    // {
    //     for (j = 1; j <= num - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }
    return 0;
}