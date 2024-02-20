x=10

#the x is globaly assigned as the 10

def func():
    global x
    x=1
    y=12
    print(y)
    print(x)

print(x)
#the value odf the x changes to 1
func()
print(x)
