ip_no=int(input("enter the no: "))
for test in range(1,10,1):
    if(test**3==abs(ip_no)):
        print("it's cube root is:",test)
        break
    elif(test**3>abs(ip_no)):
        print("***the no isn't a perfect cube***")
        break
