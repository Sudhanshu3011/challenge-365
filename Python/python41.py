class numbers:

    def __init__(self,number):
        self.num=number
        
        
    def multiply(self,n):
         self.num=self.num *n

    @staticmethod
    def add(a,b):
        return a+b
    

a=numbers(5)
print(a.num)
a.multiply(5)
print(a.num)
# no self is passed automatically
print(a.add(5,3))
# add(13,56)