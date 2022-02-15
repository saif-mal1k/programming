# include<stdio.h>

int fibo(int n,int a, int b)
{
	if(n==0)
		return 1;

	if (b==0)
	{
		printf("%d ",b);
		fibo(n-1, 0, 1);
	}
	else
	{
		printf("%d ",b);
		fibo(n-1, b, a+b);
	}	
}

int main()
{
	fibo(10,0,0);
	return 0;
}