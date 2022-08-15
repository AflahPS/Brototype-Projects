import java.util.Scanner;

public class App {

    static int letterCounter(String word) {
        int i;
        for (i = 0; word[i] != '\0'; i++)
            ;
        return i;
    }

    void Concatenator(char word1[], char word2[]) {
        int word1_len = letterCounter(word1);
        int word2_len = letterCounter(word2);
        int length = word1_len + word2_len;
        char ret[] = new char[length];
        for (int i = 0; i < word1_len; i++) {
            ret[i] = word1[i];
        }
        for (int i = word1_len; i < length; i++) {
            ret[i] = word2[i - word1_len];
        }
        System.out.println("The word after concatenation is: " + ret[length]);
    }

    static void Reversor(char word[]) {
        int length = letterCounter(word);
        char ret[] = new char[length];
        for (int i = 0; i < length; i++) {
            ret[i] = word[length - 1 - i];
        }
        System.out.println("Reversed string is: " + ret[length]);
    }

    static int Exit(char in) {
        if (in == 'y' || in == 'Y') {
            return 1;
        } else if (in == 'n' || in == 'N') {
            return 0;
        } else {
            return 2;
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner s=new Scanner(System.in);
        int i, input;
        int length;
        String word1,word2;
        // char word1[]=new char[1000];
        // char word2[]= new char[1000];
jump1:

    input=0;
    while (input < 1 || input > 3)
    {
        System.out.println("Please select a choice: \n");
        System.out.println("Press 1: Get the string length \n");
        System.out.println("Press 2: Concatenate 2 strings \n");
        System.out.println("Press 3: Reverse a string \n");
        input=s.nextInt();
    }
    switch (input)
    {
    case 1:
        System.out.println("\nEnter the word:\t");
        word1=s.next();
        length = letterCounter(word1);
        System.out.println("Length of %s is: %d\n", word1, length);
        break;
    case 2:
        System.out.println("\nEnter word 1:\n");
        s.next("%s", &word1);
        System.out.println("\nEnter word 2:\n");
        s.next("%s", &word2);
        Concatenator(word1, word2);
        break;
    case 3:
        System.out.println("\nEnter the word:\t");
        s.next("%s", &word1);
        Reversor(word1);
        break;
    }
    
jump2:

    char in;
    System.out.println("Exit (y/n): \t");
    s.next("%c", &in);
    if (Exit(in) == 1)
    {
        return 0;
    }
    else if (Exit(in) == 0)
    {
        goto jump1;
    }
    else if (Exit(in) == 2)
    {
        goto jump2;
    }
}
}}
