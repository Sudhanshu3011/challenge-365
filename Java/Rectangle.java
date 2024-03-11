class Rectangle_data {
    private double width;
    private double height;
    
    // Default constructor
    public Rectangle_data() {
        this.width = 1;
        this.height = 1;
    }

    public Rectangle_data(double width, double height) {
        this.width = width;
        this.height = height;
    }
    
    
    public double getArea() {
        return width * height;
    }
    
    
    public double getPerimeter() {
        return 2 * (width + height);
    }
    
    
    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }
}

public class Rectangle {
    public static void main(String[] args) {
        Rectangle_data Rectangle_data1 = new Rectangle_data(4, 40);
        Rectangle_data Rectangle_data2 = new Rectangle_data(3.5, 35.9);
        
        System.out.println("Rectangle_data 1:");
        System.out.println("Width: " + Rectangle_data1.getWidth());
        System.out.println("Height: " + Rectangle_data1.getHeight());
        System.out.println("Area: " + Rectangle_data1.getArea());
        System.out.println("Perimeter: " + Rectangle_data1.getPerimeter());
        System.out.println();
        
        System.out.println("Rectangle_data 2:");
        System.out.println("Width: " + Rectangle_data2.getWidth());
        System.out.println("Height: " + Rectangle_data2.getHeight());
        System.out.println("Area: " + Rectangle_data2.getArea());
        System.out.println("Perimeter: " + Rectangle_data2.getPerimeter());
    }
}
