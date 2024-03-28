class Node {
    int data;
    Node next;
    Node prev;

    public Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }

}

class Doubly_LinkedList {

    Node head;

    public Doubly_LinkedList() {
        this.head = null;
    }

    public void append(int data) {
        Node newNode = new Node(data); // Corrected to use the passed data
        if (head == null) {
            head = newNode;
            return;
        }
        Node current = head;
        Node temp = head;
    
        while (current.next != null) {
            current = current.next;
            current.prev = temp;
            temp = temp.next;
        }
        current.next = newNode;
        newNode.prev = temp;
    }
    

    public void displayForward() {
        Node current = head;
        System.out.println("Display in the forward direction");
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public void displayBackward() {
        Node current = head;
        System.out.println("Display in the Backward direction");
        
        while (current.next != null) {
            current = current.next;
        }
        
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.prev;
        }
        System.out.println("null");
    }
    

        

}

public class DSA_LinkedList2 {

    public static void main(String[] args) {
        Doubly_LinkedList list = new Doubly_LinkedList();
        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.displayForward();
        list.displayBackward();
    }

}
