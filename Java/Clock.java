// Define a class Time with hours and minutes astwo data members, add necessary member 
// functions to initialize and display data of class. Do not use constructors in a class. Define a 
// member function sum () which adds two Time objects. (Use the statements like T3.sum 
// (T1, T2)). 

class Time {

    int hours;
    int minutes;

    void set(int hh, int mm) {
        this.hours = hh;
        this.minutes = mm;
    }

    void display() {
        System.out.println(hours + ":" + minutes);
    }

    void sum(Time T1, Time T2) {
        int totalMinutes = T1.hours * 60 + T1.minutes + T2.hours * 60 + T2.minutes;

        Time T3=new Time();
        T3.hours=totalMinutes/60;
        T3.minutes=totalMinutes%60;

        T3.display();
    }

}

public class Clock {
    public static void main(String[] args) {

        Time obj1 = new Time();
        Time obj2 = new Time();
        obj1.set(3, 45);
        obj2.set(2, 30);

        System.out.println("Time 1:");
        obj1.display();
        System.out.println("Time 2:");
        obj2.display();

        System.out.println("\nSum of Time:");
        Time obj3 = new Time();
        obj3.sum(obj1, obj2);
    }
}
