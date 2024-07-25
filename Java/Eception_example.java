// Write an application that contains a method named average () has one argument that is an
// array of strings. It converts these to double values and returns their average. The method
// generates a NullPointerException,if an array elements is null or a
// NumberFormatException, if an element is incorrectly formatted. Include throws statement
// in method declaration

public class Exception_example  {

    public static double average(String[] array) throws NullPointerException, NumberFormatException {
        if (array == null) {
            throw new NullPointerException("Array is null");
        }

        double sum = 0;
        int count = 0;
        for (String str : array) {
            if (str == null) {
                throw new NullPointerException("Array element is null");
            }
            try {
                sum += Double.parseDouble(str);
                count++;
            } catch (NumberFormatException e) {
                throw new NumberFormatException("Array element is not a valid double: " + str);
            }
        }
        if (count == 0) {
            throw new NumberFormatException("No valid elements in the array");
        }
        return sum / count;
    }

    public static void main(String[] args) {
        String[] array = {"1.5", "2.0", "3.5", "4.2"};
        try {
            double avg = average(array);
            System.out.println("Average: " + avg);
        } catch (NullPointerException | NumberFormatException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
