class Employee:

    def __init__(self,name,id):
        self.name=name 
        self.id=id

    def show(self):
        print(f"The name of emplyoee is {self.name} and the id is {self.id}")

class Programmer(Employee):

    def __init__(self,name,id,lang):
        super().__init__( name,id)
        self.lang=lang

    def show(self):
        print(f"The name of emplyoee is {self.name} and the id is {self.id} and the language is {self.lang}")


E1=Employee("Sudhanshu shekhar",111318)
P1=Programmer("Elon musk",1234,"Python")
E1.show()
P1.show()

        

