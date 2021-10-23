x=int(input("print the no: "))
epsilon=0.1
step=epsilon**2
numGuesses=0
ans=0.0
while abs(ans**2-x) >= epsilon and ans <= x:
    print("guess: ",ans)
    ans+=step
    numGuesses+=1
print("numGuesses =", numGuesses)
if abs(ans**2 - x) >= epsilon:
    print("failed on square root of ", x)
else:
    print(ans,"is close to square root of",x)



#this programme find the square root of a no: using guess enumeration technique
