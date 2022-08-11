#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float mark;

    printf("Please enter the mark of the student (0-100): \n");
    scanf("%f", &mark);
    if (mark >= 50)
    {
        printf("Passed \n");
    }
    else
    {
        printf("Failed \n");
    }

    return 0;
}
