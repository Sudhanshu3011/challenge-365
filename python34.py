f=open('myfile3.txt','r')
text=f.read()
print(text)
#f.close()

#the seek tell and the truncate statements 
f.seek(134)
#tell statement
print(f.tell())

data=f.read(100)
print(data)

#truncate statements truncate the output to the given no of words only
#f.truncate(5)
f.close()