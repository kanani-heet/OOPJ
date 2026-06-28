import java.util.Scanner;

public class SecondsToTime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter total seconds: ");
        int seconds = sc.nextInt();

        int hours = seconds / 3600;
        int minutes = (seconds % 3600) / 60;
        int sec = seconds % 60;

        System.out.printf("Time = %02d:%02d:%02d", hours, minutes, sec);
    }
}