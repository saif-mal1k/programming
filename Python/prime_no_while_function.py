

def prime():
	step=0
	end=int(input("enter the max value for prime no:"))
	i=2
	while(i<=end):
		j=2
		flag=0
		while(j<=i//2):
			if (i%j==0):
				flag=1
				step+=1
				break
			else:
				step+=1
				j+=1
		if(flag==0):
			print(" ",i,end=" ")

		i+=1
		step+=1

	print("\ntotal steps:",step)
		
prime()
