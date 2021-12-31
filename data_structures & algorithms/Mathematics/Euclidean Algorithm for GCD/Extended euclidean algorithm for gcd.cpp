#include <iostream>
using namespace std;

int s;
int t;

int gcd(int a, int b){

	int bigger,smaller;

	(a>b)? bigger=a : smaller = b;

	int s1 = 1; 
	int s2 = 0;
	int t1 = 0; 
	int t2 = 1;
	int reminder;

	while (smaller > 0){
		reminder = bigger % smaller;   
		bigger = smaller; 
		smaller = reminder;
		
		s = s1 % s2;
		s1 = s2; 
		s2 = s;

		t = t1 % t2;	
		t1 = t2; 
		t2 = t;
	}
	
	s = s1; 
	t = t1;

	return bigger; 

};

int main(){
	
	int a,b;
	cout<<"\nGCD calculator using Extended Euclidean Algorithm ";
	cout<<"\nEnter the 1st number:";
	cin>>a;
	cout<<"\nEnter the 2nd number:";
	cin>>b;

	cout<<"\nGCD of a,b is: ",gcd(a,b);
		
	return 0;
}

