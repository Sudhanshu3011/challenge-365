class Emplyoee:

    company="Strac Industries"
    
    def show(self):
        print(f"The emplyoee {self.name} is working in the {self.company}")

    def Changecompany(cls,newcompany):
        cls.company=newcompany
    
    # after using the same function as the class method we can change the value
    # of the Changecompany to change the company name in the class
    # @classmethod
    # def Changecompany(cls,newcompany):
    #     cls.company=newcompany

e1=Emplyoee()
e1.name="Sudhanshu"
e1.show()
e1.Changecompany("Space X")
e1.show()
print(Emplyoee.company)
