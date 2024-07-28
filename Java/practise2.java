public class practise2 {
    
}

// Demonstrating the usage of import, new, this, break, and continue keywords

// import keyword is used to import classes from other packages
import java.util.Scanner;

class Parent {
    // This is a simple parent class
}

class Child extends Parent {
    private String name;

    // Constructor using 'this' keyword to refer to the current object
    public Child(String name) {
        this.name = name;
    }

    public void printName() {
        System.out.println("Child's name is: " + this.name);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create an instance of Scanner using 'new' keyword
        Scanner scanner = new Scanner(System.in);

        // Demonstrating 'new' keyword to create an instance of Child class
        System.out.print("Enter child's name: ");
        String name = scanner.nextLine();
        Child child = new Child(name);
        child.printName();

        // Demonstrating 'break' and 'continue' keywords
        System.out.println("Enter numbers (enter -1 to stop):");
        while (true) {
            int number = scanner.nextInt();

            // break keyword to exit the loop
            if (number == -1) {
                break;
            }

            // continue keyword to skip the even numbers
            if (number % 2 == 0) {
                continue;
            }

            System.out.println("Odd number entered: " + number);
        }

        scanner.close();
    }
}
