#include<iostream>
using namespace std;

class myclass{
	public: 
	void mymethod() {			// method def
		cout<<"hello";
	}
};	

int main() {
	myclass myobj;		// create an object
	myobj.mymethod() ;		// access method 	
}
