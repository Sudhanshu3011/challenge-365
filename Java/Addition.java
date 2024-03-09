class Addnumber {
    public int Add(int n1, int n2) {
        
        return n1 + n2;
    }
}

public class Addition {
    public static void main(String[] args) {
        int operand1 = 12;
        int operand2 = 13;

        Addnumber calc = new Addnumber();
        int ans = calc.Add(operand1, operand2);

        System.out.println("Addition: " + ans);
    }
}
