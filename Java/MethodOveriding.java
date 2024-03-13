class Dimension {

    double  dem1;
    double dem2;

    Dimension(double dem1, double dem2) {
        this.dem1 = dem1;
        this.dem2 = dem2;
    }

    Dimension(double dem1) {
        this.dem1 = dem1;
        this.dem2 = dem1;
    }

    void area() {
        System.out.print("The Area of");
    }
    // abstract void area(){};
}

class Square extends Dimension {
    
  
    Square(double dem1)
    {
        super(dem1);
    }

    void area()
    {
        super.area();
        System.out.print(" Square "+(dem1*dem1));

        System.out.println();
    }
}

class Rectangle extends Dimension {
    
    Rectangle(double dem1, double dem2)
    {
        super(dem1,dem2);
    }

    void area()
    {
        super.area();
        System.out.print(" Rectangle "+(dem1*dem2));

        System.out.println();
    }
}
class Triangle extends Dimension {
    
    
    Triangle(double dem1,double dem2)
    {
        super(dem1,dem2);
    }

    void area()
    {
        super.area();
        System.out.print(" Triangle "+(0.5*dem1*dem1));

        System.out.println();
    }
}

public class MethodOveriding {
 
    public static void main(String[] args) {

        Dimension obj1= new Dimension(1,1);
        Square obj2=new Square(5);
        Rectangle obj3=new Rectangle(5, 4);
        Triangle obj4 =new Triangle(3, 4);
       
        //refrencing 
        Dimension R;
        //call only this for the confirmation that the super class is giving area
        R=obj1;
        R.area();
        R=obj2;
        R.area();
        R=obj3;
        R.area();
        R=obj4;
        R.area();
        
    }
}
