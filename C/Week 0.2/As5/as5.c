#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wordLength, i, j, k, f;
    char word[100];
    printf("\nPlease enter a string : \n");
    scanf("%s", &word);
    for (i = 0; word[i] != '\0'; i++)
        wordLength = i + 1;
    printf("\nGiven String is is: \n");
    for (i = 0; i < wordLength; i++)
    {
        printf("%c", word[i]);
    }
    printf("\n SubSets of the String is\n");
    for (k = 0; k < wordLength; k++)
    {
        for (i = k; i < wordLength; i++)
        {
            f = k;
            for (j = i; j < wordLength; j++)
            {
                printf("%c", word[f]);
                f++;
            }
            printf(",");
        }
        printf("\n");
    }

    return 0;
}
