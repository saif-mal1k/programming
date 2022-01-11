#include<conio.h>
#include<stdio.h>
/*#include<iostream>
using namespace std;
*/
int main()
{
	int b=10;
	int a = &b;
//	int &c = b;
//	cout<<a<<"\t"<<b;
	printf("%d",a);
	printf("\n%d",*a);
}