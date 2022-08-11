#include <stdio.h>
#include <stdlib.h>

int main(void){

    int height=5;
    int n,i,j,k;
    for( n=1; n<=height;n++){
        for(i=1;i<=2*n-1;i++){
            if(i%2==0){
                printf("$ ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
        for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}   