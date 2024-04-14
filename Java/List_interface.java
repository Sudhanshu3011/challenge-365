// import java.util.ArrayList;
// import java.util.Iterator;
// import java.util.LinkedList;
// import java.util.Stack;
// import java.util.Vector;
import java.util.*;

public class List_interface {

    public static void main(String[] args) {
        
         ArrayList<Integer> array = new ArrayList<Integer>();
         LinkedList<String> linkedlist = new LinkedList<String>();
         Vector<Float> vector = new Vector<Float>();
         Stack<Integer> stack = new Stack<Integer>();

        //arraylist
         array.add(34);
         array.add(21);
         array.add(34);
         array.add(23);
         array.add(30);
         
         Iterator<Integer> itrarray = array.iterator();
         while(itrarray.hasNext()) {
            System.out.println(itrarray.next());
         }
         

         //linkedlist
         linkedlist.add("Sudhanshu");
         linkedlist.add("Vanshika");
         linkedlist.add("Shekhar");
         linkedlist.add("Mahindra");
         linkedlist.add("Chetan");

         Iterator<String> linkedIterator = linkedlist.iterator();
         while(linkedIterator.hasNext()) {
            System.out.println(linkedIterator.next());
         }
         

         //vector 
         vector.add(54.98f);
         vector.add(53.98f);
         vector.add(52.98f);
         vector.add(51.98f);
         vector.add(50.98f);

         Iterator<Float> vectorIterator = vector.iterator();
         while(vectorIterator.hasNext()) {
            System.out.println(vectorIterator.next());
         }

         //stack

         
         stack.push(34);
         stack.push(45);
         stack.push(67);
         stack.push(89);
         stack.push(90);
         stack.pop();

         Iterator<Integer> stackIterator = stack.iterator();
         while(stackIterator.hasNext()) {
            System.out.println(stackIterator.next());
         }

    }

}


//the output
// 34
// 21
// 34
// 23
// 30
// Sudhanshu
// Vanshika
// Shekhar
// Mahindra
// Chetan
// 54.98
// 53.98
// 52.98
// 51.98
// 50.98
// 34
// 45
// 67
// 89
