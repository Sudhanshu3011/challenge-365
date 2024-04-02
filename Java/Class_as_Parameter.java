class Demo {
    int value1;
    int value2 ;

    Demo(int value1,int value2){
         
        this.value1=value1;
        this.value2=value2;

    }

    //ltes perform a addition of the two axis based on the class is passed as the Parameter 

    void Addition (Demo obj){
        value1=value1+obj.value1;
        value2=value2+obj.value2;
        
        System.out.println("The summation of the two cordinates are ("+value1+","+value2+")");
    }
}

public class Class_as_Parameter{

    public static void main (String args[])
    {

        Demo first = new Demo(12, 23);
        Demo Second = new Demo(12, 23);

        first.Addition(Second);

    }
}