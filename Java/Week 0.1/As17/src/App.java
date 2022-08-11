import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int input = 0;
        float num1, num2;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1: \t");
        num1 = sc.nextInt();
        System.out.println("Enter number 2: \t");
        num2 = sc.nextInt();

        System.out.println("\nPress 1- Addition\n");
        System.out.println("Press 2- Subtraction\n");
        System.out.println("Press 3- Multiplication\n");
        System.out.println("Press 4- Division\n");

        while (input < 1 || input > 4) {
            System.out.println("Select the operation (1-4):\n");
            input = sc.nextInt();
        }
        if (input == 1) {
            Addition a = new Addition(num1, num2);
        } else if (input == 2) {
            Subtraction s = new Subtraction(num1, num2);
        } else if (input == 3) {
            Multiplication m = new Multiplication(num1, num2);
        } else if (input == 4) {
            Division d = new Division(num1, num2);
        }

    }
}
