def calculatesum(a,b):
    sum= a+b
    print(sum)

def comaprision(a,b):
    if(a >b):
        print(a)
    elif(a<b):
        print(b)
    else:
        print("Equal numbers.")
def table(a):
    for k in range(1,11):
        print(a,"*",k,"=",a*k)
#to pass out the statement and use in furhter calls  
def lcm(a):
    pass

a=int(input("Enter the A:"))
b=int(input("Enter the B:"))
calculatesum(a,b)
comaprision(a,b)
table(a)
