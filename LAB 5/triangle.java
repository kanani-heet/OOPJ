import java.util.Scanner;

class TriangleType
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first side: ");
        int a = sc.nextInt();

        System.out.print("Enter second side: ");
        int b = sc.nextInt();

        System.out.print("Enter third side: ");
        int c = sc.nextInt();

        if(a == b && b == c)
        {
            System.out.println("Triangle is Equilateral");
        }
        else if(a == b || b == c || a == c)
        {
            System.out.println("Triangle is Isosceles");
        }
        else
        {
            System.out.println("Triangle is Scalene");
        }

        if((a*a + b*b == c*c) ||
           (a*a + c*c == b*b) ||
           (b*b + c*c == a*a))
        {
            System.out.println("Triangle is also Right-Angled");
        }

        sc.close();
    }
}