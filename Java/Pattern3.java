public class Pattern3 {

    public static void main(String[] args) {

        int num = 1;
        for (int i = 4; i > 0; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num);
                num = (num + 1) % 10;
            }
            System.out.println("");
        }
    }
}
