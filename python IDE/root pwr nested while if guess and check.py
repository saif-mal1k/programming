ip_no=int(input("enter an integer: "))
pwr=1
rep=0
while(pwr<6):
    root=0
    while(root**pwr<ip_no):
        root+=1
    if(root**pwr==ip_no):
        print("root*pwr= "+str(root)+"*"+str(pwr)+"="+str(ip_no))
        rep+=1
    pwr+=1
if(rep==0):
    print("the pair doesn't exist")





#output:
#enter an integer: 81
#root*pwr= 81*1=81
#root*pwr= 9*2=81
#root*pwr= 3*4=81
