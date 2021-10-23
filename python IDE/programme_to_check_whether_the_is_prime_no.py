no=int(input("enter the no:"))
flag=0
i=2
while(i<no):
    if(no%i==0):
        flag+=1
    i+=1
if(flag==0):
    print("**the no is prime no**")
else:
    print("**the no is not prime no**")
