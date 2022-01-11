listt=[12,23,11,78,9,76,45,89,65,43]
print("given listt is:",listt)
ele=input("enter the no you want to search:")
for i in range(0,10):
    if(ele==str(listt[i])):
        print("element found at",i+1,"location")
