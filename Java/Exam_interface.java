// Write a java program to implement an interface called Exam with a method Pass (int 
// mark) that returns a boolean. Write another interface called Classify with a method 
// Division (int average) which returns a String. Write a class called Result which 
// implements both Exam and Classify. The Pass method should return true if the mark is 
// greater than or equal to 50 else false. The Division method must return "First" when the 
// parameter average is 60 or more, "Second" when average is 50 or more but below 60, "No 
// division" when average is less than 50.

/**
 * Exam_interface
 */
interface Exam {

       boolean Pass(int marks);
}

/**
 * Classify
 */
 interface Classify {

    String Division(int average);

    
}

class Result implements Exam,Classify{

    @Override
    public boolean Pass(int marks)
    {
        if(marks>=50)
        return true;
        else 
        return false;
    }

    public String Division(int average)
    {
        if(average>=60)
        {
            return "First Divison";
        }
        else if(average>=50)
        {
            return "Second Division";
        }
        else{
            return "No Division";
        }
    }
}
public class Exam_interface {

    public static void main(String[] args) {
        
        Result result=new Result();

        System.out.println("Result: ");
        System.out.println("70: " + result.Pass(70)); 
        System.out.println("45: " + result.Pass(45)); 

        
        System.out.println("Division average: ");
        System.out.println("Average 65: " + result.Division(65)); 
        System.out.println("Average 55: " + result.Division(55)); 
        System.out.println("Average 40: " + result.Division(40)); 
    }
    
}
