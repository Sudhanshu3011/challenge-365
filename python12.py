import datetime

print(datetime.datetime.now())
hours=datetime.datetime.now().hour

print("Hi!!")
str=input("What is your name:")
if(hours>4 and hours<12):
    print("Good morning,",str)
elif(hours>=12 and hours<16):
    print("Good Afternoon,",str)
elif(hours>=16 and hours<19):
    print("Good Evening,",str)
else:
    print("Good Night,",str)

