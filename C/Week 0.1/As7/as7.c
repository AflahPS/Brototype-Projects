#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, num, prod;

    printf("Please enter a number: \t");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        prod = num * i;
        printf(" %dx%d = %d\n", i, num, prod);
    }
    return 0;
}
