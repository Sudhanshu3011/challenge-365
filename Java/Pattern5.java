import java.util.Scanner;

public class Pattern5 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        for (int i = 1; i <= 5; i++) {
            if (i == 1 || i == 5) {
                for (int j = 1; j <= 5; j++) {
                    System.out.print("*");
                }
                System.out.println("");
            } else {
                for (int k = 1; k <= 5; k++) {
                    if (k == 1 || k == 5) {
                        System.out.print("*");
                    } else {
                        System.out.print(" ");
                    }
                }
                System.out.println("");

            }
        }
        sc.close();
    }
}
