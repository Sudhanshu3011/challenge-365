# Define a class
class Car:
    # Class variable
    wheels = 4

    # Constructor method (initialize the object)
    def __init__(self, make, model):
        # Instance variables
        self.make = make
        self.model = model
        self.speed = 0

    # Instance method
    def accelerate(self, increment):
        self.speed += increment
        print(f"The car is now moving at {self.speed} km/h.")

    # Instance method
    def brake(self, decrement):
        self.speed -= decrement
        print(f"The car is now moving at {self.speed} km/h.")

# Create objects (instances) of the class
car1 = Car("Toyota", "Camry")
car2 = Car("Honda", "Civic")

# Accessing attributes and calling methods
print(f"{car1.make} {car1.model} has {Car.wheels} wheels.")
car1.accelerate(20)
car2.accelerate(15)
car1.brake(5)
car2.brake(10)
