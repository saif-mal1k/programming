n=int(input("enter your choice: 2..squareRoot 3..cubeRoot "))
x=int(input("enter the no you wanna insert: "))
numGuesses=0
testEle=0.1
ans=0
while(abs(ans**n-abs(x)) >= testEle and ans<=abs(x)):
    ans+=testEle
    numGuesses+=1
    print("numGuesses: ",numGuesses)
#if():

else:
    print("the "+str(n)+"be root is: ",ans)
    
