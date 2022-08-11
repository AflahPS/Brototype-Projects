#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int prnc_amt;
    float intr_rate, no_yr, smpl_intr;

    printf("Please enter the Principal amount: \n");
    scanf("%d", &prnc_amt);
    printf("Please enter the Interest rate: \n");
    scanf("%f", &intr_rate);
    printf("Please enter the Number of years: \n");
    scanf("%f", &no_yr);
    smpl_intr = (prnc_amt * intr_rate * no_yr) / 100;
    printf("Simple interest is : %f\n", smpl_intr);

    return 0;
}