a=int(input("Enter your age:"))
print("Your age is ",a)
if(a>18):
 print("You can drive.")
else:
 print("You can't drive.")
# indentation while using the if else statemnts 

b=int(input("Your marks in maths:"))
print("Your marks is:",b)
if(b>100 or b<0 ):
 print("Invalid marks input.")
 print("Enter less than 100.")
elif(b<=30):
 print("Fail")
elif(b>30 and b<=40):
 print("Grade:C")
elif(b>40 and b<=50):
 print("Grade:C+")
elif(b>50 and b<=60):
 print("Grade:B")
elif(b>60 and b<=80):
 print("Grade:B+")
elif(b>80 and b<=90):
 print("Grade:A")
elif(b>90 and b<100):
 print("Grade:A+")
else:
 print("The grade of your marks is given.")