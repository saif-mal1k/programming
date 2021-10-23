#include<iostream>
using namespace std;

int main()
{
	int a,b=10;
	cout<<&a<<"\t"<<&b;		// print address of a and address of b
	int &c = b;				// address of c is equal to address of b
	cout<<"\n"<<c<<"\t"<<&c;// print value at c and address of c
	int * p = &b;			// value of p is equal to address of b
	cout<<"\n"<<p<<"\t"<<*p;// print value of p and value at (value of p)
}

