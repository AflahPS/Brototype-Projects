import java.util.Scanner;

public class Array_2D {

    int arrSize;
    int[][] array = new int[arrSize][arrSize];

    Array_2D(int arrSize, int[][] array) {
        this.arrSize = arrSize;
        this.array = array;
    }

    int[][] getArray() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                System.out.print("(" + (i + 1) + "," + (j + 1) + "):\t");
                array[i][j] = sc.nextInt();
            }
            System.out.println("\n");
        }
        return array;
    }

    void displayArray() {

        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                System.out.print(array[i][j] + "\t");
            }
            System.out.println("\n");
        }
    }

}
