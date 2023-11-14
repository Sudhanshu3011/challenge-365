#in set the data doesn't repeats
#the order is not also maintained in the set

s={3,4,5,6,7}
print(s)

#it can stores different type
set_={"me",56,67,9.08,56,True}
print(set_)
#the order is kept changing  
print(set_)

#creating a empty set
empty={}
#this is a empty dictionary because both of set and dictioanry are written in
#curly braces {}
print(type(empty))

#here by making the set()
empset=set()
print(type(empset))

#set operation
s1={4,5,6,7,3}
s2={3,4,1,2,9}
print(s1.union(s2))
print(s1.intersection(s2))
s1.update(s2)
print(s1,s2)

#intersection update
s1.intersection_update(s2)
print(s1)

#symetric difference
s3=s1.symmetric_difference(s2)
print(s3)

#Disjoint set and the super set
s5={44,56,73,89,34}
s6={12,32,45,21}
s7={1,2,3,4,5}
s8={2,3}
print(s5.isdisjoint(s6))
print(s7.issubset(s8))
s8.add(9)

#discard and remove
#while using the remove if the element is not in the set the it throws the eror
# meanwhihle if the discard function is runing it doesnt throws error
s5.discard(2)
print(s5)
s5.remove(44) 
print(s5)

#pop will cause to remove the last element of the set ,where the sequence of the 
#set is unknown to us but we can access the element which is poped out 
element=s5.pop()
print(element)

#if we want to delete the whole set the use del and if we want to delete only the 
#elements and need to use the set further

del(s5)
s6.clear()
print(s6)
