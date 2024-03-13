public class Selection_sort {

    public static void main(String[] args) {

        int Array[] = new int[15];

        for (int i = 0; i < Array.length; i++) {
            
            Array[i]=(int )(Math.random()*100);
        }

        System.out.println("Array is:");
        for (int i = 0; i < Array.length; i++) {
            
           System.out.print(Array[i]+" ");
        }

        //selection sort
        int temp;
        for(int i=0;i<Array.length-1;i++)
        {
            int min=i;

            for(int j=i+1;j<Array.length;j++)
            {
                if(Array[min]>Array[j])
                {
                   temp=Array[min];
                   Array[min]=Array[j];
                   Array[j]=temp;
                }
            }
        }
        
        System.out.println();
        System.out.println("Sorted Array is:");
        for (int i = 0; i < Array.length; i++) {
            
           System.out.print(Array[i]+" ");
        }
    }
}
