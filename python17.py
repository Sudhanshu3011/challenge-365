#list are mutable
marks=[23,45,67,8,99,0,23,43,64]
print(marks)
#printing the whole marks list
print(marks[:])
print(type(marks))

#list can store different data types 
collection=["sudhashu",12,True,4.5]
print(collection)
print(type(collection))

#indicing is always given
print(marks[4])
print(collection[0])

#searching
if 99 in marks:
    print("yes")
else:
    print("no")
#searching
if 4.5 in collection:
    print("yes")
else:
    print("no")

#List comprehension
lst=[i for i in range(5) if i % 2==0]
# we can the value of list as a function of i in the given format
print(lst)


