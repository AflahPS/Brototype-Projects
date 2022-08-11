#include <stdio.h>
#include <stdlib.h>

int letterCounter(char word[])
{
    int i;
    for (i = 0; word[i] != '\0'; i++)
        ;
    return i;
}

char wordConcatenator(char word1[], char word2[])
{
    int length;
    length = letterCounter(word1) + letterCounter(word2);
    char ret[length];
    for (int i = 0; i < length; i++)
    {
        if (i < letterCounter(word1))
        {
            ret[i] = word1[i];
        }
        else
        {
            ret[i] = word2[i - letterCounter(word1)];
        }

        return ret[length];
    }
}
char wordReversor(char word[])
{
    int length = letterCounter(word);
    char ret[length];
    for (int i = 0; i < length; i++)
    {
        ret[i] = word[length - i - 1];
    }
    return ret[];
}
int main(void)
{
    int i, input = 0;
    char word1[1000], word2[1000];
    while (input < 1 || input > 3)
    {
        printf("Please select a choice: \n");
        printf("Press 1: Get the string length \n");
        printf("Press 2: Concatenate 2 strings \n");
        printf("Press 3: Reverse a string \n");
        scanf("%d", &input);
    }
    switch (input)
    {
    case 1:
        printf("\nEnter the word:\t");
        scanf("%s", &word1);
        printf("Length of %s is: %d", word1, letterCounter(word1));
        break;
    case 2:
        printf("\nEnter word 1:\t");
        scanf("%s", &word1);
        printf("\nEnter word 2:\t");
        scanf("%s", &word2);
        printf("Result string is: %s", wordConcatenator(word1, word2));
        break;
    case 3:
        printf("\nEnter the word:\t");
        scanf("%s", &word1);
        printf("Reversed string is: %s", wordReversor(word1));
        break;
    }

    return 0;
}
