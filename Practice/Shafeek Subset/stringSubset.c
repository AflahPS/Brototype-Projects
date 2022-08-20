#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	char str[100];

	int i,j,k;


	printf("Enter A String : ");


	scanf("%s",str);

	for(i=0; i<strlen(str); i++){

		for(j=strlen(str); j>i; j--){

			for(k=i; k<j; k++){

				printf("%c",str[k]);

			}

			printf(",");

		}

		printf("\n");

	}

	return 0;

}