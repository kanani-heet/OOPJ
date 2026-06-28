import java.util.Scanner;

public class CompoundInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Principal Amount (P): ");
        double p = sc.nextDouble();

        System.out.print("Enter Annual Interest Rate (R): ");
        double r = sc.nextDouble();

        System.out.print("Enter Time in Years (T): ");
        double t = sc.nextDouble();

        System.out.print("Enter Number of Times Interest is Compounded Per Year (N): ");
        int n = sc.nextInt();

        double amount = p * Math.pow((1 + (r / 100) / n), n * t);
        double ci = amount - p;

        System.out.println("\nAmount = " + amount);
        System.out.println("Compound Interest = " + ci);

        sc.close();
    }
}