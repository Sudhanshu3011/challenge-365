class Employee {
    private String name;
    private int salary;

    public Employee(String name, int salary) {
        this.name = name;
        this.salary = salary;
    }

    public void getdata(String name, int salary) {
        this.name = name;
        this.salary = salary;

    }

    public void putdata() {
        System.out.println("Name : " + name + " Salary :" + salary);
    }
}

public class Company {

    public static void main(String[] args) {

        Employee obj1 = new Employee(null, 0);
        obj1.getdata("Sushanshu Shekhar", 150000);
        obj1.putdata();

        Employee obj2 = new Employee(null, 0);
        obj2.getdata("Mahindra Suthar", 150000);
        obj2.putdata();

        Employee obj3 = new Employee(null, 0);
        obj3.getdata("Chetan Sharama", 150000);
        obj3.putdata();

        Employee obj4 = new Employee(null, 0);
        obj4.getdata("Vineet Vankar", 150000);
        obj4.putdata();
    }

}
