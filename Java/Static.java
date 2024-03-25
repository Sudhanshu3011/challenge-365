
class College {
    int Enroll_no;
    String name;
    //static statement
    static String collegeName = "VGEC";

    //static as a block 
    static{
        collegeName = "VGEC";
        //it is always called once irrespective of the number of times the object is created   

    }
    
    public void show() {
        System.out.println("Enrollment no: " + Enroll_no + "  Name: " + name + " College Name: " + collegeName);
    }
}

public class Static {
    public static void main(String[] args) {

        College stu2 = new College();
        stu2.Enroll_no = 124;
        stu2.name = "Chetan Sharma";
        stu2.show();

        College stu4 = new College();
        stu4.Enroll_no = 125;
        stu4.name = "Mahindra Suthar";
        stu4.show();

        College stu1 = new College();
        stu1.Enroll_no = 123;
        stu1.name = "Sudhanshu Shekhar";
        stu1.show();

        College stu3 = new College();
        stu3.Enroll_no = 121;
        stu3.name = "Vanshika Chauhan";
        College.collegeName = "SSS";

        stu3.show();

    }
}
