class student:
    def input(self):
        self.name=str(input("enter your name: "))
        self.roll_no=int(input("enter roll no: "))
        self.percentage=input("enter %age: ")
        return(self.percentage)
    def display(self):
        print("data you entered:")
        print(self.name,roll_no,percentage)
n=int(input("enter the no of students: "))
z=n
avg=z
sum=0
while(n>0):
    n=student()
    n.input()
    n+=1
    sum+=n.input()
print("the details you passed")
while(z>0):
    z.display()
    sum+=
    z+=1

print("average is:",avg)
