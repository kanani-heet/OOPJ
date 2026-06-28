import java.util.Scanner;

public class AdditionOfThreeNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();

        System.out.print("Enter third number: ");
        int num3 = sc.nextInt();

        int sum = num1 + num2 + num3;

        System.out.println("Addition of three numbers = " + sum);

        sc.close();
    }
}