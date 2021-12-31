def gcd(no1,no2):
	smaller = no1 if (no1<no2) else no2
	bigger = no1 if (no1>no2) else no2
	if (smaller == 0):
		return bigger
	else:
		reminder = bigger%smaller
		return gcd(smaller,reminder)


print("GCD calculator using Euclidean Algorithm:")
no1 = int(input("Enter 1st number:"))
no2 = int(input("Enter 2nd number:"))

print("GCD of",no1,",",no2,"is:",gcd(no1,no2))



"""
#using while loop above code will look like

def gcd(no1,no2):
	bigger = no1 if (no1>no2) else no2
	smaller = no1 if (no1<no2) else no2
	while (smaller>0):
		reminder = bigger % smaller
		bigger = smaller
		smaller = reminder
	return bigger

""" 