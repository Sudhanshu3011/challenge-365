
class DivideByZeroException extends Exception {
    public DivideByZeroException(String message) {
        super(message);
    }
}


class Divider {

    public static double divide(double numerator, double denominator) throws DivideByZeroException {
        if (denominator == 0) {
            throw new DivideByZeroException("Division by zero error!");
        }
        return numerator / denominator;
    }
}


public class Exeption_Handling1 {
    public static void main(String[] args) {
        double numerator = 10;
        double denominator = 0;

        try {
            double result = Divider.divide(numerator, denominator);
            System.out.println("Result of division: " + result);
        } catch (DivideByZeroException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}
