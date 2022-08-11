#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number_1;
    float number_2, sum;

    printf("Please enter number 1 (Integer): \n");
    scanf("%d", &number_1);
    printf("Please enter number 2 (Float): \n");
    scanf("%f", &number_2);
    sum = number_1 + number_2;
    printf("Sum of the entered digits are: %f\n", sum);

    return 0;
}
