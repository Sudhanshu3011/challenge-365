f=open('myfile.txt','r')
while True:
    line=f.readline()
    if not line:
        break
    print(line)


f=open('myfile2.txt','w')
lines=['line1\n','line2\n','line3\n']
f.writelines(lines)
f.close()