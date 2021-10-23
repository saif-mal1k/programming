def prime():
	steps=0
	limit=int(input("enter the max prime no you'd like :"))
	for i in range(2,limit+1):
		flag=0
		for j in range(2,(i//2)+1,1):
			if(i%j==0):
				flag=1
				steps+=1
				break	
		if flag==0:
			print(" ",i,end=" ")
		steps+=1
	print("steps"+str(steps))
prime()

