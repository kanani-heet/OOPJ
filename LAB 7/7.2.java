import java.util.Scanner;

public class AreaPerimeter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Square
        System.out.print("Enter side of square: ");
        double side = sc.nextDouble();

        double squareArea = side * side;
        double squarePerimeter = 4 * side;

        System.out.println("\nSquare:");
        System.out.println("Area = " + squareArea);
        System.out.println("Perimeter = " + squarePerimeter);

        // Rectangle
        System.out.print("\nEnter length of rectangle: ");
        double length = sc.nextDouble();

        System.out.print("Enter width of rectangle: ");
        double width = sc.nextDouble();

        double rectangleArea = length * width;
        double rectanglePerimeter = 2 * (length + width);

        System.out.println("\nRectangle:");
        System.out.println("Area = " + rectangleArea);
        System.out.println("Perimeter = " + rectanglePerimeter);

        sc.close();
    }
}