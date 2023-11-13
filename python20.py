#if you need to perform any changes in the tupple we need to first 
#convert it into the list and perform changes after that again change it 
#into the tupple
 
tup=("anjali","vc","ss",13,11)
print(tup)
temp=list(tup)
temp.append("star")
# temp.pop[1]
temp[0]="list"

tup2=tuple(temp)
print(tup2)

#concating the tupple using the list
marks1=(23,53,73,94,42)
marks2=(3,5,7,4,2)
marks3= marks1 + marks2
print(marks3)
print(type(marks3))

#count function
print("The number of times 3 appear in marks",marks3.count(3))

#index method the first occurance in the tupple 
print("The index of times 3 appear in marks",marks3.index(3))
#index can also be call as ,index(3,4,7) so the valus 3 from the index
#4 till the sixth element 
