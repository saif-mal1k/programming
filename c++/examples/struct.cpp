#include<iostream>
using namespace std;

struct employee{
	string name = "arun";
	double salary = 10000;
	char visa = 'A';
};

int main()
{
	employee e;
	cout<<"name:"<<e.name<<"\nsalary:"<<e.salary<<"\nvisa:"<<e.visa<<"1";
}