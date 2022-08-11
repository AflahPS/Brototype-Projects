import java.util.Scanner;

public class MyClass extends Area {

    public static void Mcircle() {
        MyClass a = new MyClass();
        a.circle();
    }

    public static void Msquare() {
        MyClass b = new MyClass();
        b.square();
    }

    public static void Mrectangle() {
        MyClass c = new MyClass();
        c.rectangle();
    }

    public static void Mtriangle() {
        MyClass d = new MyClass();
        d.triangle();
    }

    public static void main(String[] args) throws Exception {
        Scanner s = new Scanner(System.in);

        System.out.println("Please select a shape you want to calculate the area: \n");
        System.out.println("\tPress 1 for Circle\n");
        System.out.println("\tPress 2 for Square\n");
        System.out.println("\tPress 3 for Rectangle\n");
        System.out.println("\tPress 4 for Triangle\n");
        int input = s.nextInt();
        switch (input) {
            case 1:
                Mcircle();
                break;
            case 2:
                Msquare();
                break;
            case 3:
                Mrectangle();
                break;
            case 4:
                Mtriangle();
                break;
        }
    }
}
