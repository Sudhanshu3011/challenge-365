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
# to pass out the statement and use in furhter calls  
def lcm(a):
    pass

a=int(input("Enter the A:"))
b=int(input("Enter the B:"))
calculatesum(a,b)
comaprision(a,b)
table(a)

#different types of function calls 
def reamainder(a=10, b=2):
    c=a%b
    print(c)
reamainder(b=5)
reamainder(a=12)
reamainder(b=6,a=36)

def average(*num):
    sum=0
    for i in num:
        sum=sum+i
    # print("Average of the number is :",sum/len(num))
    # return sum/len(num)

average(5,6,9,10,53)

#return functions
c=average(1,2,3,4,5)
print(c)