#include <iostream>
#include <iomanip> // For formatting output

// Define a structure for the item details
struct Item {
    std::string itemName;
    int quantity;
    double pricePerUnit;
};

// Define a structure for the bill
struct Bill {
    std::string customerName;
    int itemCount;
    Item items[100]; // Assuming a maximum of 100 items in the bill
};

// Function to calculate the total cost of an item
double calculateItemTotal(const Item& item) {
    return item.quantity * item.pricePerUnit;
}

// Function to calculate the total cost of the bill
double calculateBillTotal(const Bill& bill) {
    double total = 0.0;
    for (int i = 0; i < bill.itemCount; ++i) {
        total += calculateItemTotal(bill.items[i]);
    }
    return total;
}

// Function to display the bill
void displayBill(const Bill& bill) {
    std::cout << "Customer: " << bill.customerName << std::endl;
    std::cout << std::setw(20) << "Item" << std::setw(10) << "Quantity" << std::setw(15) << "Price per Unit" << std::setw(15) << "Total" << std::endl;
    std::cout << std::setfill('-') << std::setw(60) << "" << std::setfill(' ') << std::endl;

    for (int i = 0; i < bill.itemCount; ++i) {
        const Item& currentItem = bill.items[i];
        double itemTotal = calculateItemTotal(currentItem);

        std::cout << std::setw(20) << currentItem.itemName
                  << std::setw(10) << currentItem.quantity
                  << std::setw(15) << currentItem.pricePerUnit
                  << std::setw(15) << itemTotal << std::endl;
    }

    std::cout << std::setfill('-') << std::setw(60) << "" << std::setfill(' ') << std::endl;

    double totalBill = calculateBillTotal(bill);
    std::cout << std::setw(45) << "Total" << std::setw(15) << totalBill << std::endl;
}

int main() {
    // Create a sample bill
    Bill customerBill;
    customerBill.customerName = "John Doe";
    customerBill.itemCount = 2;

    // Item 1 details
    customerBill.items[0].itemName = "Product A";
    customerBill.items[0].quantity = 3;
    customerBill.items[0].pricePerUnit = 12.5;

    // Item 2 details
    customerBill.items[1].itemName = "Product B";
    customerBill.items[1].quantity = 2;
    customerBill.items[1].pricePerUnit = 8.75;

    // Display the bill
    displayBill(customerBill);

    return 0;
}
