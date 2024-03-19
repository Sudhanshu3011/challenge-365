abstract class Volume {
    protected double dimension1;
    protected double dimension2;
    protected double dimension3;

    Volume(double dimension1, double dimension2, double dimension3) {

        this.dimension1=dimension1;
        this.dimension2=dimension2;
        this.dimension3=dimension3;

    }

    Volume(double radius)
    {
        this.dimension1=radius;
        this.dimension2=radius;
        this.dimension3=radius;
    }

    public abstract void volume();
}

class Cube extends Volume{

    public Cube(double dimension1)
    {
        super(dimension1);
    }
     
    public  void volume(){
         System.out.println("The volume of the cube is :"+(dimension1*dimension1*dimension1));
    }
}

class Cuboid extends Volume{

    public Cuboid(double dimension1,double dimension2,double dimension3)
    {
        super(dimension1, dimension2, dimension3);
    }
     
    public  void volume(){
         System.out.println("The volume of the cube is :"+(dimension1*dimension2*dimension3));
    }
}

class Sphere extends Volume{

    final double PI=3.14;

    public Sphere(double radius)
    {
        super(radius);
    }
     
    public  void volume(){
         System.out.println("The volume of the sphere is :"+((4*PI*dimension1*dimension1*dimension1)/3));
    }
}
public class Volume_Demo {

    public static void main(String[] args) {
        
        Cube A_cube =new Cube(10);
        A_cube.volume();

        Cuboid A_cuboid= new Cuboid(10,12 ,13 );
        A_cuboid.volume();

       Sphere A_sphere= new Sphere(7);
       A_sphere.volume();
       
    }

}
