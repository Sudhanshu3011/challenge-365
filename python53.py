import time

def FOR_():
   
    for i in range(10):
        print(i)

def WHILE_():

    i=0
    while(i<10):
        print(i)
        i=i+1

init=time.time()
FOR_()
t1=time.time()-init
init=time.time()
WHILE_()
t2=time.time()-init

print(t1)
print(t2)

t=time.localtime()
Current=time.strftime("%Y-%m-%d %H:%M:%S",t)
print(Current)
    
