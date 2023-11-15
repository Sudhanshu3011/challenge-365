colours={"red","green","yellow","blue","black"}
for color in colours:
    print(color)
    for i in color:
        print(i)
#for with the range
for k in range(10):
    print(k)

for k in range(1,10):
    #1<=k<10
    print(k)
for k in range(0,10,2):
    #1<=k<10 incrmented with the +2
    print(k)

for i in range(5):
    print(i)
else:
    print ("we are out of the for loop.")

#the else statement execute with the compeletion of the for loop not on the break of the 
# loop 
for i in range(5):
    print(i)
    if i==4:
        break
else:
    print("You are out of thr loop.")
    