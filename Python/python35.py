# #map filter reduce 

# #lambda functions 
# # lets declare a list for using with the functions 
# l=[12,4,2,9,0]
# newl=[]
# newl=list(map(lambda x: x*x*x,l))
# print(newl)

# def filter_function(a):
#     return a>100

# #filter function
# newl2=list(filter(filter_function,newl))
# print(newl2)

from functools import reduce

#list 
data=[2,4,6,8,9,0,1]

#reduce calls function in the call 
#reduce(function ,data)
sum=reduce(lambda x,y:x+y,data)

print(sum)