class Animal:
    def __init__(self, species):
        self.species = species

    def display_info(self):
        print(f"Species: {self.species}")

class Dog(Animal):
    def __init__(self, breed):
        # Call the constructor of the base class (Animal)
        super().__init__("Dog")
        self.breed = breed

    def bark(self):
        print("Woof! Woof!")

    def display_dog_info(self):
        # Reusing the display_info method from the base class (Animal)
        self.display_info()
        print(f"Breed: {self.breed}")

class Cat(Animal):
    def __init__(self, color):
        # Call the constructor of the base class (Animal)
        super().__init__("Cat")
        self.color = color

    def meow(self):
        print("Meow!")

    def display_cat_info(self):
        # Reusing the display_info method from the base class (Animal)
        self.display_info()
        print(f"Color: {self.color}")


dog = Dog("Golden Retriever")
cat = Cat("Black")

dog.display_dog_info()
dog.bark()

cat.display_cat_info()
cat.meow()
