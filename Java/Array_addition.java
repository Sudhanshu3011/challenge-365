import java.util.Scanner;

class Operator {

    void Addition(int Array1[][], int Array2[][]) {

        System.out.println("Addition of Array1 and Array2");
        for (int i = 0; i < Array2.length; i++) {
            for (int j = 0; j < Array2[i].length; j++) {
                System.out.print(Array2[i][j] + Array1[i][j] + " ");
            }
            System.out.println();
        }
    }

    void Subtract(int Array1[][], int Array2[][]) {

        System.out.println("Subtraction of Array1 and Array2");
        for (int i = 0; i < Array2.length; i++) {
            for (int j = 0; j < Array2[i].length; j++) {
                System.out.print(Array2[i][j] - Array1[i][j] + " ");
            }
            System.out.println();
        }

    }

    void Multiplication(int Array1[][], int Array2[][]) {
        System.out.println("Multiplication of Array1 and Array2");
        int result[][] = new int[Array1.length][Array2[0].length];
        for (int i = 0; i < Array1.length; i++) {
            for (int j = 0; j < Array2[i].length; j++) {
                for (int k = 0; k < Array1[i].length; k++) {
                    result[i][j] += Array1[i][k] * Array2[k][j];
                }
            }
        }
        for (int i = 0; i < result.length; i++) {
            for (int j = 0; j < result[0].length; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
    
}

public class Array_addition {
    public static void main(String[] args) {

        int Array1[][] = new int[3][3];
        int Array2[][] = new int[3][3];

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter values for Array1:");
        for (int i = 0; i < Array1.length; i++) {
            for (int j = 0; j < Array1[i].length; j++) {
                System.out.print("Enter value for Array1[" + i + "][" + j + "]: ");
                Array1[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Enter values for Array2:");
        for (int i = 0; i < Array2.length; i++) {
            for (int j = 0; j < Array2[i].length; j++) {
                System.out.print("Enter value for Array2[" + i + "][" + j + "]: ");
                Array2[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Array1:");
        for (int i = 0; i < Array1.length; i++) {
            for (int j = 0; j < Array1[i].length; j++) {
                System.out.print(Array1[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("Array2:");
        for (int i = 0; i < Array2.length; i++) {
            for (int j = 0; j < Array2[i].length; j++) {
                System.out.print(Array2[i][j] + " ");
            }
            System.out.println();
        }


        System.out.println("Enter the operand:");
        String ch= scanner.next();
        char operator=ch.charAt(0);

        Operator obj1=new Operator();
        if (operator == '+') {
           
            obj1.Addition(Array1, Array2);

        } else if (operator == '-') {
            
            obj1.Subtract(Array1, Array2);


        } else if (operator == '*') {
           
            obj1.Multiplication(Array1, Array2);


        } else {
            System.out.println("Enter a valid Operation");
        }

        scanner.close();
    }
}
