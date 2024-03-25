class User_built_Exception extends Exception{

    public User_built_Exception(String string)
    {
        System.out.println("User defined Error occurred");
    }
}

public class Exception_Handling2 {
    public static void main(String[] args) throws User_built_Exception {

        int i = 0;
        int j = 0;
        int k = 0;
        int Array[] = new int[5];
        String string = null;

        try {
            // Arithmetic error
            j = 18 / i;

            // Array out of bound
            Array[5] = 11;

            // String 
            string.length();

            // throw 
            if (k == 0) {
                throw new User_built_Exception("Error");
            }

        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception " + e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Exception " + e);
        } catch (NullPointerException e) {
            System.out.println("String Exception " + e);
        } catch (Exception e) {
            System.out.println("Something went wrong " + e);
        } finally {
            System.out.println("Inside finally block Exeption is handeled");
        }

    }
}
