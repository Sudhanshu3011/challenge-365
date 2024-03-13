import java.util.Scanner;

public class Array_manipulation {

    public static void main(String[] args) {

        // int temp;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the length of thr Array:");
        int length = sc.nextInt();

        int Array[] = new int[length];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < Array.length; i++) {
            System.out.print("Element Array[" + i + "] :");
            Array[i] = sc.nextInt();

        }

        System.out.println("Array before deleting the similar element");
        printArray(Array);

        for (int i = 0; i < Array.length; i++) {
            for (int j = i + 1; j < Array.length; j++) {
                if (Array[i] == Array[j]) {

                    for (int k = j; k < Array.length - 1; k++) {

                        Array[k] = Array[k + 1];

                    }

                    length--;

                    j--;
                }
            }
        }

        System.out.println("Array after deleting the similar element");
        printArray(Array);

        sc.close();

    }

    public static void printArray(int[] arr) {
        System.out.println("Array elements:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(); // Add a newline after printing all elements
    }
}