#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, word_len, bool = 0;
    char word[100];

    printf("Please enter a word: \t");
    scanf("%s", &word);
    word_len = strlen(word);
    for (i = 0; i < word_len; i++)
    {
        if (word[i] == word[word_len - 1 - i])
        {
            bool = 1;
        }
        else
        {
            bool = 0;
            break;
        }
    }

    if (bool == 0)
    {
        printf("Entered word IS NOT palindrome\n");
    }
    else if (bool == 1)
    {
        printf("Entered word IS palindrome\n");
    }

    return 0;
}
