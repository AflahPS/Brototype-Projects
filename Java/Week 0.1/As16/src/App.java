import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        boolean isPrime = false;
        Scanner s = new Scanner(System.in);

        System.out.println("Please enter a number: ");
        int num = s.nextInt();

        if (num == 1 || num == 0) {
            isPrime = false;
        } else if (num == 2) {
            isPrime = true;
        } else if (num % 2 == 0) {
            isPrime = false;
        } else {
            for (int i = 3; i < num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                } else {
                    isPrime = true;
                }
            }
        }
        if (isPrime) {
            System.out.println(num + " is Prime !!");
        } else {
            System.out.println(num + " is NOT Prime !!");
        }
    }

}
