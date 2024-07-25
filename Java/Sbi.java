abstract class BankAccount {
    protected double accountNumber;
    protected String name;
    protected double balance;

    public BankAccount(double accountNumber, String name, double balance) {
        this.accountNumber = accountNumber;
        this.name = name;
        this.balance = balance;
    }

    public abstract void deposit(double amount);
    public abstract void checkBalance();
    public abstract void withdraw(double amount);
    public abstract void callInterest();
}

class SavingAccount extends BankAccount {
    public SavingAccount(double accountNumber, String name, double balance) {
        super(accountNumber, name, balance);
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void checkBalance() {
        System.out.println("Your Current Balance of Account_no :" + accountNumber + " is " + balance);
    }

    public void withdraw(double amount) {
        balance -= amount;
    }

    public void callInterest() {
        
        double interest = balance * 0.08;
        System.out.println("The amount of interest given on your Account is " + interest);
    }
}

class FixedDepositAccount extends BankAccount {
    public FixedDepositAccount(double accountNumber, String name, double balance) {
        super(accountNumber, name, balance);
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void checkBalance() {
        System.out.println("Your Current Balance of Account_no :" + accountNumber + " is " + balance);
    }

    public void withdraw(double amount) {
        balance -= amount;
    }

    public void callInterest() {
        
        double interest = balance * 0.1;
        System.out.println("The amount of interest given on your Account is " + interest);
    }
}

public class Sbi {
    public static void main(String[] args) {
        
        SavingAccount savingAccount = new SavingAccount(123456789, "Sudhanshu Shekhar", 10000000);
        savingAccount.checkBalance();
        savingAccount.deposit(500);
        savingAccount.checkBalance();
        savingAccount.callInterest();

    
        FixedDepositAccount fixedDepositAccount= new FixedDepositAccount(123456788," Virat Kohli ", 100000000);
        fixedDepositAccount.checkBalance();
        fixedDepositAccount.deposit(500);
        fixedDepositAccount.checkBalance();
        fixedDepositAccount.callInterest();
            
    }

}
