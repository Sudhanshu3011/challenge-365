#key value pairs is the dictionary
dict={
    "Sudhanshu":"hiiiiii",
    "1c_ka":"robot"

}

print(dict["1c_ka"])

#Ordered collection of items,store multiplr variable in single items 
print(dict.keys())
print(dict.values())

for i in dict.keys():
    print(f"The value of the key {i} is {dict[i]}")

for key,value in dict.items():
    print(f"The values {value} of the corresponding key {key}.")

ep1={1:67,2:89,3:32,4:90}
ep2={5:89,6:98}

ep1.update(ep2)
print(ep1)
ep1.pop(1)

del ep1[122]