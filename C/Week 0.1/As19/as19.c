#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float amt, tax;
    printf("Enter the amount: \t");
    scanf("%f", &amt);
    if (amt <= 250000)
    {
        tax = 0;
        printf("Income tax amount = %f\n", tax);
    }
    else if (amt > 250000 && amt <= 500000)
    {
        tax = amt * .05;
        printf("Income tax amount = %f\n", tax);
    }
    else if (amt > 500000 && amt <= 1000000)
    {
        tax = amt * .2;
        printf("Income tax amount =%f\n", tax);
    }
    else if (amt > 1000000 && amt <= 5000000)
    {
        tax = amt * .3;
        printf("Income tax amount =%f\n", tax);
    }
    else
    {
        printf("Amount is over 50 Lakh !!");
    }

    return 0;
}