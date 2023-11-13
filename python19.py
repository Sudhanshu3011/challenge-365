#tupples are immutable very much similar to the lists
tup=(1,2,5,7,8,)
print(type(tup),tup)

#tup[3]=45
# this throw an error

if 7 in tup:
    print("yes")
else:
    print("no")

#slicing can be done but the main tupple doesn't changes
tup2= tup[1:4]
print(tup2)