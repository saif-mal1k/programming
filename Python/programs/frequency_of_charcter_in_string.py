input_string = str(input("enter the string:"))

dict={}

for i in input_string:
	dict[i]= 0

for i in input_string:
	dict[i]= dict[i]+1


print(dict)