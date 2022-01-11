n="T"
while(n):
    ip_no=int(input("enter the no you wanna insert: "))
    n=int(input("input which root you like: "))
    step=0
    if ip_no<0:
        low=ip_no
        high=0
    else:
        low=0
        high=ip_no
    mid=(high+low)/2
    while(mid):
   # print(step," ",mid)
        if mid**n==ip_no:
            print(mid,"is the square root of",ip_no)
            n=1
            break
        elif mid**n<ip_no:
            low=mid
            mid=(high+low)/2
        elif mid**n>ip_no:
            high=mid
            mid=(high+low)/2
        if (step>ip_no-2):
            break
        step+=1
    if(n!=1):
        print(mid,"is the square root of",ip_no)
    n=int(input("press ( any key ) to go ""or""again ( else f/0 )to exit"))
