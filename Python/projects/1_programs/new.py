class student:
    def __init__(self):
        self.name=input("enter the name: ")
        self.roll=int(input("enter the roll no: "))
        self.per=float(input("enter the percentage: "))
sum=0.0
a=[]
for i in range(5):
    b=student()
    a.append(b)
    sum=sum + a[i].per
print ("average percentage =", sum/5)    
