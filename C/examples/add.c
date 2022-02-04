#include<stdio.h>
#include<conio.h>


int add(int a=2, int b=4)
{
	return a+b;
}


int main()
{
	int c = add();
	printf("%d",c);
	return 0;
}