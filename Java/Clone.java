//cloning of the class and automatic type conversion of the constructor
class Shapes {
    double height;
    double width;

    Shapes(double height, double width) {
        this.height = height;
        this.width = width;

    }

    Shapes() {
        height = 0.0;
        width = 0.0;
    }
    
    //cloning the class
    Shapes(Shapes ob) {
        height = ob.height;
        width = ob.width;
    }

    void increase(double value) {
        height += value;
        width += value;

    }

    void increase(double value1, double value2) {
        height = height + value1;
        width = width + value2;
    }

    void display()
    {
        System.out.println("Height= "+height+" Width= "+width);
    }
}

public class Clone {

    public static void main(String[] args) {

        Shapes shape1= new Shapes(12, 13);
        Shapes shape2=new Shapes();

        shape1.display();
        shape2.display();

        //cloning of the class
        Shapes shape3 = new Shapes(shape2);
        shape3.display();

        //integer value is passed in the double parameter type
        shape3.increase(5);
        shape3.display();

        shape3.increase(1.3, 3.4);
        shape3.display();

    }
}
