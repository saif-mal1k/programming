start=float(input("enter the first no:"))
end=int(input("enter the no of digits:"))
d=float(input("enter the value of d:"))
def get_ap(start,d):
    start=start+d
    return(start)
for i in range(1,end):
    start=get_ap(start,d)
    print(start)
