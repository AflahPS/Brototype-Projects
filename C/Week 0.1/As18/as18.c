#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wtn_test, lab_exm, assmt;
    float grade;

    printf("Please enter the marks obtained in written test: \t");
    scanf("%d", &wtn_test);
    printf("Please enter the marks obtained in lab exam: \t");
    scanf("%d", &lab_exm);
    printf("Please enter the marks obtained from assignments: \t");
    scanf("%d", &assmt);
    grade = (wtn_test * .7) + (lab_exm * .2) + (assmt * .1);
    printf("Grade of the student is : %f\n", grade);

    return 0;
}