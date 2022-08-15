#include <stdio.h>
#include <stdlib.h>

int letterCounter(char word[])
{
    int i;
    for (i = 0; word[i] != '\0'; i++)
        ;
    return i;
}
void Concatenator(char word1[], char word2[])
{
    int word1_len = letterCounter(word1);
    int word2_len = letterCounter(word2);
    int length = word1_len + word2_len;
    char ret[2000];
    for (int i = 0; i < word1_len; i++)
    {
        ret[i] = word1[i];
    }
    for (int i = word1_len; i < length; i++)
    {
        ret[i] = word2[i - word1_len];
    }
    printf("The word after concatenation is: %s\n", ret);
}
void Reversor(char word[])
{
    int length = letterCounter(word);
    char ret[2000];
    for (int i = 0; i < length; i++)
    {
        ret[i] = word[length - 1 - i];
    }
    printf("Reversed string is: %s\n", ret);
}
// int Exit(char in){
//     if (in=='y' || in=='Y'){
//         return 1;
//     }else if(in =='n' || in == 'N'){
//         return 0;
//     }else{
//         return 2;
//     }
// }
int main(void)
{
    int i, input;
    int length;
    char word1[1000], word2[1000];
jump1:
    input = 0;
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
        length = letterCounter(word1);
        printf("Length of %s is: %d\n", word1, length);
        break;
    case 2:
        printf("\nEnter word 1:\n");
        scanf("%s", &word1);
        printf("\nEnter word 2:\n");
        scanf("%s", &word2);
        Concatenator(word1, word2);
        break;
    case 3:
        printf("\nEnter the word:\t");
        scanf("%s", &word1);
        Reversor(word1);
        break;
    }
    char in = 'a';
    do
    {

        printf("Exit (y/n): \t");
        scanf("%c", &in);
        if (in == 'y' || in == 'Y')
        {
            return 0;
        }
        else if (in == 'n' || in == 'N')
        {
            goto jump1;
        }
    } while (in != 'y' || in != 'Y' || in != 'n' || in != 'N');
}
