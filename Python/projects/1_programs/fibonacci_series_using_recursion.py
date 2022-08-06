def fibo (n):
    ans=1
    while n>0:
        if n==1 or n==2:
            return ans
        else:
            return fibo(n-2)+fibo(n-1)
n=int(input("enter the no of terms"))
for i in range(1,n):
    print(fibo(i))
