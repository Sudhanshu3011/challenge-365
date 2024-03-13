import java.util.Scanner;

public class Array_addition {
    public static void main(String[] args) {
        
        int Array1[][] = new int[3][3];
        int Array2[][] = new int[3][3];

        Scanner scanner = new Scanner(System.in);

        
        System.out.println("Enter values for Array1:");
        for(int i = 0; i < Array1.length; i++) {
            for(int j = 0; j < Array1[i].length; j++) {
                System.out.print("Enter value for Array1[" + i + "][" + j + "]: ");
                Array1[i][j] = scanner.nextInt();
            }
        }

        
        System.out.println("Enter values for Array2:");
        for(int i = 0; i < Array2.length; i++) {
            for(int j = 0; j < Array2[i].length; j++) {
                System.out.print("Enter value for Array2[" + i + "][" + j + "]: ");
                Array2[i][j] = scanner.nextInt();
            }
        }

        
        System.out.println("Array1:");
        for(int i = 0; i < Array1.length; i++) {
            for(int j = 0; j < Array1[i].length; j++) {
                System.out.print(Array1[i][j] + " ");
            }
            System.out.println();
        }

        
        System.out.println("Array2:");
        for(int i = 0; i < Array2.length; i++) {
            for(int j = 0; j < Array2[i].length; j++) {
                System.out.print(Array2[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("Addition of Array1 and Array2");
        for(int i = 0; i < Array2.length; i++) {
            for(int j = 0; j < Array2[i].length; j++) {
                System.out.print(Array2[i][j] +Array1[i][j] +" ");
            }
            System.out.println();
        }
        
        scanner.close();
    }
}
