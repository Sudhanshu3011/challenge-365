#rock paper scissor game 
import random

#make a satement for the draw situation in the last score draw


mwin=0
cwin=0


def display():
    print(f"The scoreboard is {cwin}-{mwin}.")

for i in range(1,6):
    comp= random.randint(1,10)
    
    
    if comp<=3 and comp>=1:
        cplay="ROCK"
        cval=1
    elif comp<=6 and comp>=4:
        cplay="PAPER"
        cval=2
    else:
        cplay="SCISSOR"
        cval=3
    
    print("Its your turn now choose:\n1)for->""ROCK""\n2)for->""PAPER""\n3)for->""SCISSOR""")
    cman=int(input("Press the number:"))
    
    match cman:
        case 1:
            print("You selected ROCK")
            cmval=1
        case 2:
            print("You selected PAPER")
            cmval=2
        case 3:
            print("You selected SCISSOR")
            cmval=3
    
    print(f"Computer slected {cplay}")
    
    #the code for the game working
    
    if cval==cmval:
        print("The match is drawn.")
    elif cval==1 and cmval==2:
        print("You won the match.")
        mwin+=1
    elif cval==1 and cmval==3:
        print("You lost the match.")
        cwin+=1
    elif cval==2 and cmval==1:
        print("You lost the match.")
        cwin+=1
    elif cval==2 and cmval==3:
        print("You won the match.")
        mwin+=1
    elif cval==3 and cmval==1:
        print("You win the match.")
        mwin+=1
    else:
        print("You lost the match.")
        cwin+=1
if cwin>mwin:
    print("Computer win the match.")
elif mwin>cwin:
    print("You win the match.")
else:
    print("The match is drawn.")

display()