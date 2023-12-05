class Employee:
    def __init__(self,name):
        self.name=name

    def show(self):
        print(f"The name of the Employee {self.name}")

class Developer:

    def __init__(self,language):
        self.language=language

    def show(self):
        print(f"The Developer is of language {self.language}")


class multi(Employee,Developer):
# class multi(Developer,Employee):
    def __init__(self,name,language):
        self.name=name
        self.language=language

E1=multi("Sudhanshu","Python")
print(E1.language)
print(E1.name)
E1.show()
print(multi.mro())

