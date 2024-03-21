

interface I1 {}
interface I2 {}
interface I3 extends I1, I2 {}
interface I4 {}

class X implements I3 {}
class W extends X implements I4 {}

public class Demo {
    public static void main(String[] args) {
        W obj = new W();

        if (obj instanceof I1) {
            System.out.println("obj implements I1");
        } else {
            System.out.println("obj does not implement I1");
        }


        if (obj instanceof I2) {
            System.out.println("obj implements I2");
        } else {
            System.out.println("obj does not implement I2");
        }

        if (obj instanceof I3) {
            System.out.println("obj implements I3");
        } else {
            System.out.println("obj does not implement I3");
        }

    
        if (obj instanceof X) {
            System.out.println("obj is of type X");
        } else {
            System.out.println("obj is not of type X");
        }

      
        if (obj instanceof I4) {
            System.out.println("obj implements I4");
        } else {
            System.out.println("obj does not implement I4");
        }
    }
}
