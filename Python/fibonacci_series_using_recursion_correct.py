def fibo(n):

	if n==1 or n==2:
		return 1
	else:
		return fibo(n-1)+fibo(n-2)
i=1
n=int(input("enter how many no youd like:"))

while(i<=n):
	print(fibo(i),end=" ")
	i+=1