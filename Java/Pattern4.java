public class Pattern4 {
    public static void main(String[] args) {

        for (int i = 0; i < 4; i++) {
            for (int l = 3 - i; l > 0; l--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i + 1; j++) {
                System.out.print("*");
            }
            System.out.println("");
        }
        for (int i = 3; i > 0; i--) {
            for (int m = 3 - i + 1; m > 0; m--) {
                System.out.print(" ");
            }
            for (int k = 2 * i - 1; k > 0; k--) {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
