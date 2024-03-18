// Abstract class
abstract class Shape {
    // Abstract method (does not have a body)
    public abstract double calculateArea();

    // Regular method
    public void display() {
        System.out.println("This is a shape.");
    }
}

// Concrete subclass
class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Override the abstract method
    @Override
    public double calculateArea() {
        return length * width;
    }
}

// Concrete subclass
class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    // Override the abstract method
    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

public class Main1 {
    public static void main(String[] args) {
        // Cannot instantiate abstract class directly
        // Shape shape = new Shape(); // This will cause a compilation error

        // But you can create instances of concrete subclasses
        Rectangle rectangle = new Rectangle(5, 3);
        Circle circle = new Circle(2);

        // Calling methods
        rectangle.display();
        System.out.println("Area of Rectangle: " + rectangle.calculateArea());

        circle.display();
        System.out.println("Area of Circle: " + circle.calculateArea());
    }
}
