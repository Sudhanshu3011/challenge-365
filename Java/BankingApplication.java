class ErrorOccur extends Exception {
    public ErrorOccur() {
        super("Not Sufficient Fund");
    }
}

class Bank {
    double amt;

    public Bank() {
        amt = 0.0; 
    }

    public void Deposits(double amount) {
        amt = amt + amount;
        System.out.println("Deposits Amount :"+amount);
    }

    public void Withdraw(double amount) {
        try {
            if (amount > amt) {
                throw new ErrorOccur();
            }
            amt = amt - amount;
            System.out.println("Withdrwal Amount :"+amount);
        } catch (ErrorOccur e) {
            System.out.println(e.getMessage());
        }
    }
}

public class BankingApplication {
    public static void main(String[] args) {
        Bank account = new Bank();
        account.Deposits(1000.00);
        account.Withdraw(400.00);
        account.Withdraw(300.00);
        account.Withdraw(500.00); 
    }
}
