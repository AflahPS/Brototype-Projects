#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float mark;

    printf("Please enter the total mark of the student (0-100): \n");
    scanf("%f", &mark);
    if (mark >= 90)
    {
        printf("Grade: A\n");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("Grade: B\n");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("Grade: C\n");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("Grade: D\n");
    }
    else if (mark >= 50 && mark < 60)
    {
        printf("Grade: E\n");
    }
    else if (mark < 50)
    {
        printf("Failed\n");
    }

    return 0;
}