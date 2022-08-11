import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the matrix-size: \t");
        int arrSize = sc.nextInt();
        int[][] array = new int[arrSize][arrSize];

        Array_2D a1 = new Array_2D(arrSize, array);
        System.out.println("Enter array elements: \n");
        a1.getArray();
        System.out.println("Entered array is: \n");
        a1.displayArray();
    }
}
