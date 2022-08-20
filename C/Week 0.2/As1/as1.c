#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3,smallest;

    printf("Please enter 3 numbers : \n");
    scanf("%d", &num1);
    printf("Please enter 3 numbers : \n");
    scanf("%d", &num2);
    printf("Please enter 3 numbers : \n");
    scanf("%d", &num3);

    smallest = (num1<num2) ? num1 : num2;
    smallest = (smallest<num3) ? smallest : num3;

    printf("Smallest is : %d\n",smallest);
    return 0;
}
