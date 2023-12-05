class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display_info(self):
        print(f"Name: {self.name}, Age: {self.age}")

class Student(Person):
    def __init__(self, name, age, student_id):
        # Call the constructor of the base class (Person)
        super().__init__(name, age)
        self.student_id = student_id

    def display_student_info(self):
        # Reusing the display_info method from the base class
        self.display_info()
        print(f"Student ID: {self.student_id}")

class UniversityStudent(Student):
    def __init__(self, name, age, student_id, major):
        # Call the constructor of the immediate base class (Student)
        super().__init__(name, age, student_id)
        self.major = major

    def display_university_student_info(self):
        # Reusing the display_student_info method from the immediate base class (Student)
        self.display_student_info()
        print(f"Major: {self.major}")


uni_student = UniversityStudent("John Doe", 20, "12345", "Computer Science")
uni_student.display_university_student_info()
