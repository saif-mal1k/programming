def fact(n):
    if(n==1):
        return 1
    else:
        return(n*fact(n-1))
n=int(input("enter the no whose factorial you want:"))
ans=fact(n)
print("the answer to your factorial is:",ans)
