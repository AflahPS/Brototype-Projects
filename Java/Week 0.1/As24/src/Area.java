import java.util.Scanner;

public abstract class Area {
    Scanner s = new Scanner(System.in);
    public void circle() {
        System.out.println("Enter the radius of the circle: ");
        float radius = s.nextInt();
        float circle_area = 3.14f * radius * radius;
        System.out.println("Area of the circle is: " + circle_area);
    }
    public void square() {
        System.out.println("Enter the length of one side  of the square: ");
        float sq_length = s.nextInt();
        float square_area = sq_length * sq_length;
        System.out.println("Area of the square is: " + square_area);
    }
    public void rectangle() {
        System.out.println("Enter the length of the rectangle: ");
        float rect_length = s.nextInt();
        System.out.println("Enter the breadth of the rectangle: ");
        float rect_breadth = s.nextInt();
        float rect_area = rect_length * rect_breadth;
        System.out.println("Area of the rectangle is: " + rect_area);
    }
    public void triangle() {
        System.out.println("Enter the length of base of the triangle : ");
        float tri_base = s.nextInt();
        System.out.println("Enter the perpendicular length to base : ");
        float tri_height = s.nextInt();
        float triangle_area = 0.5f * tri_height * tri_base;
        System.out.println("Area of the triangle is: " + triangle_area);
    }
}
