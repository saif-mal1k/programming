#include<iostream>
#include<math.h>
using namespace std;

double factorial(int);
int main()
{
	int x=10,n,j=-1;
	double sum=1;
	cout<<"enter the no of terms:";
	cin>>n;
	n-=1;
	for(int i=1; i<=n ; i++)
	sum += pow(j,i)*(pow(x,i*2)/factorial(i*2));
	cout<<"sum is:"<<sum;
	return 0;
}

double factorial(int n)
{
	double ans=1;
	while(n>1)
	{
		ans=ans*n;
		n--;
	}
	return ans;		
}