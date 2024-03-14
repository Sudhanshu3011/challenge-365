import java.util.Random;

public class Matrix_0_1 {
    public static void main(String[] args) {

        int Array[][] = new int[6][6];

        Random random=new Random();

        for (int i = 0; i < Array.length; i++) {
            
            for(int j=0;j<Array[i].length;j++){
                Array[i][j]=random.nextInt(2);
            }

        }

        display(Array);

        int sum=0;

        for(int i=0;i<Array.length;i++)
        {
            for(int j=0;j<Array[i].length;j++)
            {
                sum+=Array[i][j];
            }
            if(sum%2==0)
            {
                System.out.println("The row "+(i+1)+" have even number of 1's.");
            }
        }

        for(int j=0;j<Array.length;j++)
        {
            for(int i=0;i<Array[j].length;i++)
            {
                sum+=Array[i][j];
            }
            if(sum%2==0)
            {
                System.out.println("The column "+(j+1)+" have even number of 1's.");
            }
        }
    }

    public static void display(int Arr[][])
    {
        for (int i = 0; i < Arr.length; i++) {
            
            for(int j=0;j<Arr[i].length;j++){
                System.out.print(Arr[i][j]+" ");
            }
            
            System.out.println();
        }

    }

}
