#recursion in the python is similar as the function call its self until the terminating condition
def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)

print(factorial(5))

#fibbonaci series
def fibbonaci(n):
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return fibbonaci(n-1)+fibbonaci(n-2)

print(fibbonaci(6))

#sum recursively
def sum(n):
    if n==0:
        return 0
    else:
        return n+sum(n-1)
    
print(sum(11))

    