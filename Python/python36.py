class student:
    
    #defining the class instances
    def __init__(self,first,last,rollno):
        self.first=first
        self.last=last
        self.rollno=rollno
        self.email=first+last+'@vgec@.in'
    
    def fullname(self):
        return '{} {}'.format(self.first,self.last)


stu_1=student('Sudhanshu','Shekhar',18)
stu_2=student('Vanshika','Chauhan',13)
stu_3=student('Anjali','Kumari',19)



print(student.fullname(stu_1),stu_1.rollno)
print(stu_1.email)

print(student.fullname(stu_2),stu_2.rollno)
print(stu_2.email)

print(student.fullname(stu_3),stu_3.rollno)
print(stu_3.email)

