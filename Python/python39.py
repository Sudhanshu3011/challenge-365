# getter and setter
class detail:
    
    def __init__(self,name,age):
        self.name=name
        self.age=age
    
    # def drive(self)decorators @classmethod
    @property
    def value(self):
        return self.age*2
    
    #setter
    @value.setter
    def value(self,new_age):
        self.age=new_age/2

    def info(self):
        print(f"Name: {self.name}, Age: {self.age}")


per1=detail('Sudanshu shekhar',19)
per2=detail('hwfieifuhe',1)
per3=detail('kjbdcbjdhcv',45)
per4=detail('kqjbbsdiuqgwdb',23)
per5=detail('erigjernkb',17)



per1.info()    
per1.value=22
print(per1.value)
per1.info()  
