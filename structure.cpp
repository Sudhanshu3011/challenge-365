#include <iostream>
#include <string>

// Define a structure
struct Person {
    std::string name;
    int age;
    double height;
};

int main() {
    // Declare an instance of the structure
    Person person;

    // Assign values to the structure members
    person.name = "John";
    person.age = 25;
    person.height = 175.5;

    // Display the structure values
    std::cout << "Person Information:" << std::endl;
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << " cm" << std::endl;

    return 0;
}
