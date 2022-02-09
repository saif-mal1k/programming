n,maxx=10,0
while(n>0):
    ip_no=int(input("enter the no: "))
    if(ip_no%2!=0 and ip_no>maxx):
        maxx=ip_no
    n-=1
if maxx==0:
    print("no odd no")
else:
    print("maxx odd no: "+str(maxx))
