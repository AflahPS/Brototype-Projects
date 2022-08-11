import java.util.Scanner;

import javax.xml.transform.Source;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner s = new Scanner(System.in);
        int input = 0;
        while (input != 1 && input != 2) {
            System.out.println("Press 1: Enter the elements manually\n");
            System.out.println("Press 2: Enter values form 1 upto a number:\n");
            input = s.nextInt();
        }
        int arrSize = 10000;
        int[] array = new int[arrSize];
        switch (input) {
            case 1:

                System.out.println("Enter the array size: ");
                int arrSize1 = s.nextInt();
                int[] array1 = new int[arrSize1];
                System.out.println("Enter the values into array: ");
                for (int i = 0; i < arrSize1; i++) {
                    array1[i] = s.nextInt();
                }
                arrSize = arrSize1;
                array = array1;
            case 2:
                System.out.println("Enter the limit number: ");
                int arrSize2 = s.nextInt();
                int[] array2 = new int[arrSize2];

                for (int i = 0; i < arrSize2; i++) {
                    array2[i] = i + 1;
                }
                arrSize = arrSize2;
                array = array2;
        }

        System.out.println("Entered array is:\n");
        for (int i = 0; i < arrSize; i++) {
            System.out.print(array[i] + "\t");
        }
        int count = 0;

        for (int i = 0; i < arrSize; i++) {
            if (array[i] % 2 == 0) {
                array[count] = array[i];
                count++;

            } else if (array[i] % 2 != 0) {
                array[count] = array[i];
                count++;
                i = i + 2;
            }
        }
        System.out.println("\n\n\nArray after elimination is: \n");
        for (int i = 0; i < count; i++) {
            System.out.print(array[i] + "\t");
        }
        int num = 0, height = 1;
        System.out.println("\n\n\nPattern: \n");
        for (int i = 0; i < height; i++) {

            for (int j = 0; j < 2 * height; j++) {
                if (num < count) {
                    System.out.print(array[num] + " ");
                    num++;
                } else {
                    break;
                }
            }
            System.out.print("\n");
            for (int k = 0; k < 3 * height; k++) {
                if (num < count) {
                    System.out.print(array[num] + "\n");
                    num++;
                } else {
                    break;
                }
            }
            if (num >= count) {
                break;
            } else {
                height++;
            }
        }

    }
}
