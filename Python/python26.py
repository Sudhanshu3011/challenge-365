class Item:
    def __init__(self, name, price):
        self.name = name
        self.price = price

class Bill:
    def __init__(self):
        self.items = []
        self.discount = 0

    def add_item(self, item, quantity):
        self.items.append({"item": item, "quantity": quantity})

    def apply_discount(self, discount_percentage):
        self.discount = discount_percentage

    def calculate_total(self):
        total = 0
        for item in self.items:
            total += item["item"].price * item["quantity"]

        # Apply discount
        total -= total * (self.discount / 100)

        return total

    def generate_bill(self):
        print("********** Bill **********")
        for item in self.items:
            print(f"{item['item'].name} \t x{item['quantity']} \t ${item['item'].price * item['quantity']:.2f}")
        print("--------------------------")
        print(f"Total \t\t\t ${self.calculate_total():.2f}")
        print("**************************")


# Create items
item1 = Item("Item1", 10.0)
item2 = Item("Item2", 15.0)

# Create a bill
my_bill = Bill()

# Add items to the bill with quantities
my_bill.add_item(item1, 2)
my_bill.add_item(item2, 1)

# Apply a discount
my_bill.apply_discount(10)  # 10% discount

# Generate and print the bill
my_bill.generate_bill()
