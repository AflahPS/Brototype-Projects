#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limit, i, j, wordLength, minCount = 100, maxCount = 0, letCount;
    char minChar, maxChar;
    char string[1000];

    printf("\nPlease enter a string : \n");
    scanf("%s", &string);

    for (i = 0; string[i] != '\0'; i++)
        wordLength = i + 1;
    printf("\nGiven string is: \n");
    for (i = 0; i < wordLength; i++)
    {
        printf("%c", string[i]);
    }
    // Counting and comparing.
    for (i = 0; i < wordLength; i++)
    {
        letCount = 0;
        for (j = 0; j < wordLength; j++)
        {
            if (string[i] == string[j])
            {
                letCount++;
            }
        }
        if (letCount > maxCount)
        {
            maxCount = letCount;
            maxChar = string[i];
        }
        else if (letCount < minCount)
        {
            minCount = letCount;
            minChar = string[i];
        }
    }
    printf("\nThe most repeated letter is %c and it repeated %d times\n", maxChar, maxCount);

    printf("The less repeated letter is %c and it is repeated only %d times\n", minChar, minCount);

    return 0;
}
