#include <stdio.h>
#include <stdlib.h>
 
int letterCounter(char word[])
{
   int i;
   for (i = 0; word[i] != '\0'; i++)
       ;
   return i;
}
int wordSimpilarity(char word1[], char word2[])
{
   int flag = 2;
   int length;
   if (letterCounter(word1) == letterCounter(word2))
   {
       length = letterCounter(word1);
       for (int i = 0; i < length; i++)
       {
           if (word1[i] == word2[i])
           {
               flag = 1;
               continue;
           }
           else if ((word1[i] != word2[i]))
           {
               flag = 0;
               break;
           }
       }
   }
   else
   {
       flag = 0;
   }
   return flag;
}
 
int main(void)
{
   int i;
   char word1[1000], word2[100];
 
   printf("\nEnter 2 words you want to compare: \n");
   printf("\nEnter word 1:\t");
   scanf("%s", &word1);
   printf("\nEnter word 2:\t");
   scanf("%s", &word2);
   if (wordSimpilarity(word1, word2) == 1)
   {
       printf("\n%s and %s are identical !!\n", word1, word2);
   }
   else if ((wordSimpilarity(word1, word2) == 0))
   {
       printf("\n%s and %s are NOT identical !!\n", word1, word2);
   }
   return 0;
}
