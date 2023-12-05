class Animal:
    def __init__(self, species):
        self.species = species

    def display_info(self):
        print(f"Species: {self.species}")

class Mammal(Animal):
    def __init__(self, species, mammal_type):
        # Call the constructor of the base class (Animal)
        super().__init__(species)
        self.mammal_type = mammal_type

    def display_mammal_info(self):
        # Reusing the display_info method from the base class (Animal)
        self.display_info()
        print(f"Mammal Type: {self.mammal_type}")

class Pet:
    def __init__(self, name):
        self.name = name

    def play(self):
        print(f"{self.name} is playing.")

class Dog(Mammal, Pet):
    def __init__(self, breed, name):
        # Call constructors of both base classes (Mammal and Pet)
        Mammal.__init__(self, "Dog", "Domestic")
        Pet.__init__(self, name)
        self.breed = breed

    def bark(self):
        print("Woof! Woof!")

    def display_dog_info(self):
        # Reusing the display_mammal_info method from the immediate base class (Mammal)
        self.display_mammal_info()
        print(f"Breed: {self.breed}")


dog = Dog("Golden Retriever", "Buddy")
dog.display_dog_info()
dog.bark()
dog.play()
