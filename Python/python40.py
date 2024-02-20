#if now we need to add the company name to the details
class employee:

    def __init__(self,name,id):
        self.name=name
        self.id=id

    def details(self):
        print(f"The name of the employee is {self.name} and thenid is {self.id}")

#inheritance
class company(employee):
    def detailof(self):
        print(f"The name of the employee is {self.name} and thenid is {self.id} and the company is HCL")

Emp1=employee('iugadigeid',1234)
Emp2=employee('khkdbjb',123)
Emp3=company('egkdbvjcv',12344)


Emp3.detailof()
Emp1.details()

#Access specifiers 

class Empt:
    def __init__(self):
        self.__name="SSK"

a=Empt()
#a.name this throws an error
print(a._Empt__name)
#name mangling
print(a.__dir__())

