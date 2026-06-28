import java.util.Scanner;

public class DiameterFromArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter area of circle: ");
        double area = sc.nextDouble();

        double radius = Math.sqrt(area / Math.PI);
        double diameter = 2 * radius;

        System.out.println("Diameter of circle = " + diameter);

        sc.close();
    }
}