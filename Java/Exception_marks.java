// A marklist containing reg.no and marks for a subject is given.if the marks are <0,user
// defined IllegalMarkException is thrown out and handled with the message "Illegal Mark". 
// For all valid marks, the candidate will be declared as "PASS" if the marks are equal to or 
// greater than 40, otherwise it will be declared as "FAIL".Write a class called 
// IllegalMarkException. 

class IllegalMarkException extends Exception {
    public IllegalMarkException() {
        super("Illegal Mark");
    }

}

class Marks {
    int reg_no;
    int mark;

    public Marks(int reg_no, int mark) {
        try{
            if (mark < 0) {
            throw new IllegalMarkException();
              }
             this.reg_no = reg_no;
             this.mark = mark;
          }
        catch(IllegalMarkException e)
        {
            System.out.println(e.getMessage());
        }
    }

    public String result() {

        if (mark > 40) {
            return "PASS";
        } else {
            return "FAIL";
        }
    }

}

public class Exception_marks {

    public static void main(String[] args) {

        Marks Student1 = new Marks(1234, -2);
        System.out.println("Student1 :"+Student1.result());

        Marks Student2 = new Marks(1235, 45);
        System.out.println("Student2"+Student2.result());

    }

}
