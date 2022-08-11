import java.util.Scanner;

public class App {

    static int n = 1;

    static void loop(int num, String word) {
        if (n <= num) {
            System.out.println(word + "");
            n++;
            loop(num, word);
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a word: ");
        String word = s.nextLine();
        System.out.println("Enter a limit: ");
        int num = s.nextInt();
        loop(num, word);
    }
}
