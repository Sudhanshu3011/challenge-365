//inheritance in java 

//single inheritance

class Box {
    double width;
    double length;
    double height;

    Box(double w, double l, double h) {
        width = w;
        length = l;
        height = h;
    }

    void show(){

        System.out.println("Width= "+width+" Length= "+length+" Height= "+height);
    }


}

class Boxweight extends Box {
    double weight;

    Boxweight(double w, double l, double h, double wigh) {

        super(w, l, d);
        weigth = weigh;
     
    }

    void show(){

        System.out.println("Width= "+width+" Length= "+length+" Height= "+height+" Weight= "+weight);
    }


}

//Heirarchical Inheritance 
class Employee{
    int id;
    double salary;

    
}

public class practice1 {
    public static void main(String[] args) {
        Box box=new Box(0, 0, 0);
        box.show();

        Boxweight boxweight =new Boxweight(0, 0, 0, 0);
        boxweight.show();
    }
}
