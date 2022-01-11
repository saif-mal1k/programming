print("enter the range\n")
start = int(input("from:"))
stop = int(input("to:"))		# by default type of input is str

even = []
odd = []

for i in range(start,stop+1):
	if i%2==0:
		even.append(i)
	else:
		odd.append(i)

print("even:",even)
print("odd:",odd)

