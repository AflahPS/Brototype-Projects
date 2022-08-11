import java.util.Scanner;

public class App {

    static int[][] getArray(int arrSize) {
        Scanner sc = new Scanner(System.in);
        int[][] array = new int[arrSize][arrSize];

        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                System.out.print((i + 1) + "," + (j + 1) + ":");
                array[i][j] = sc.nextInt();
            }
        }
        return array;
    }

    static int[][] addArray(int[][] array1, int[][] array2, int arrSize) {
        int[][] sum = new int[arrSize][arrSize];
        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                sum[i][j] = array1[i][j] + array2[i][j];
            }
        }
        return sum;
    }

    static void displayArray(int[][] array, int arrSize) {
        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                System.out.print(array[i][j] + "\t");
            }
            System.out.println("\n");
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the matrix-size: \t");
        int arrSize = sc.nextInt();
        int[][] array1 = new int[arrSize][arrSize];
        int[][] array2 = new int[arrSize][arrSize];
        int[][] sum = new int[arrSize][arrSize];
        System.out.println("Enter the values to matrix 1:");
        array1 = getArray(arrSize);
        System.out.println("Enter the values to matrix 2:");
        array2 = getArray(arrSize);
        sum = addArray(array1, array2, arrSize);
        System.out.println("The values in matrix-1: \n");
        displayArray(array1, arrSize);
        System.out.println("The values in matrix-2: \n");
        displayArray(array2, arrSize);
        System.out.println("The sum of matrices is: \n");
        displayArray(sum, arrSize);
    }
}
