import java.util.Scanner;

class Account {
    int account_id;
    String name;
    double balance;

    public void setAccount(int accountId, String name, double balance) {
        this.account_id = accountId;
        this.name = name;
        this.balance = balance;
    }

    public void display() {
        System.out.println("Name : " + name + " Account_id : " + account_id + " Balance : " + balance);
    }

    // public boolean find(int account_id) {
    //     return this.account_id == account_id;
    // }
    public boolean find(int account_id) {
        return this.account_id == account_id;
    }
    
}

public class BankData {

    public static void main(String[] args) {
        Account[] accounts = new Account[5];

        // Initialize accounts
        accounts[0] = new Account();
        accounts[0].setAccount(7137, "Sudhanshu Shekhar", 70000000);

        accounts[1] = new Account();
        accounts[1].setAccount(1304, "Vanshika Chauhan", 90000000);

        accounts[2] = new Account();
        accounts[2].setAccount(7153, "Vineet Vnakar", 50000000);

        accounts[3] = new Account();
        accounts[3].setAccount(7129, "Chetan Sharma", 60000000);

        accounts[4] = new Account();
        accounts[4].setAccount(7140, "Mahindra Suthar", 50000000);

        
        System.out.println("All Accounts:");
        for (int i = 0; i < accounts.length; i++) {
            accounts[i].display();
        }

        
        Scanner scanner = new Scanner(System.in);
        System.out.println("\nEnter the Account id to search:");
        int searchAccountId = scanner.nextInt();
        boolean found = false;
        for (int j = 0; j < accounts.length; j++) {
            if (accounts[j].find(searchAccountId)) {
                found = true;
                break;
            }
        }

        if (found) {
            System.out.println("The Account_id is found.");
        } else {
            System.out.println("The Account_id is not found.");
        }
        scanner.close();
    }
}
