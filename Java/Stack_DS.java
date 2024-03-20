class Stack {
    int top;
    int size;
    int[] arr;

    Stack(int size) {
        this.top = -1;
        this.size = size;
        this.arr = new int[size];
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == (size - 1);
    }

    public void push(int value) {
        if (!isFull()) {
            top++;
            arr[top] = value;
        } else {
            System.out.println("Stack Overflow can't enter"+value+" without increasing size");
            increaseSize();
            push(value); 
        }
    }

    public void pop() {
        if (!isEmpty()) {
            System.out.println("Item popped: " + arr[top]);
            top--;
        } else {
            System.out.println("Stack Empty");
        }
    }

    public void display() {
        if (!isEmpty()) {
            System.out.print("Stack elements:");
            for (int i = 0; i <= top; i++) {
                System.out.print(" " + arr[i]);
            }
            System.out.println();
        } else {
            System.out.println("Stack Empty");
        }
    }

    private void increaseSize() {
        System.out.println("Size is increased");
        int newSize = size * 2;
        int[] newArr = new int[newSize];
        System.arraycopy(arr, 0, newArr, 0, size);
        arr = newArr;
        size = newSize;
    }
}

public class Stack_DS {
    public static void main(String[] args) {
        Stack stack = new Stack(5);

        stack.push(12);
        stack.push(19);
        stack.push(15);
        stack.push(1);
        stack.push(18);
        stack.push(90);
        stack.pop();
        stack.pop();
        stack.pop();
        stack.display();
    }
}
