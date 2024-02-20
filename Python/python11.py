a=int(input("Enter a no:"))
if(a>0):
    if(a<10):
        print("The number is one digit")
    elif(a>=10 and a<100):
        print("The number is Two digit")
    else:
        print("The no is larger number.")
elif(a<0):
    print("The number is negative number.")
else:
    print("The number is 0.")

