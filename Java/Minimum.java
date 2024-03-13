
public class Minimum {

    public static void main(String[] args) {

        int Array[][] = new int[5][5];

        for (int i = 0; i < Array.length; i++) {
            for (int j = 0; j < Array[i].length; j++) {
                Array[i][j] = (int) (Math.random() * 100);
            }
        }

        int minimum = Array[0][0];
      
        for (int n[] : Array) {
            for (int m : n) {
                System.out.print(m + " ");
                if (m < minimum) {
                    minimum = m;
                }
  
            }
 System.out.println();
        }

        int index_i = 0;
        int index_j = 0;
        for (int n = 0; n < Array.length; n++) {
            for (int m = 0; m < Array[n].length; m++) {

                if (Array[n][m] == minimum) {
                    index_i = n;
                    index_j = m;
                }
            }
         
        }
        System.out.println("The minimum of the Array is " + minimum+" is at index Array["+index_i+"]["+index_j+"]");
    }
}
