ex:
// Anonymous Class : Class is not having any name
class
{
	// data member
	int i;
public:
	void setData(int i)
	{
		// this pointer is used to differentiate between data member and formal argument.
		this->i = i;
	}
	void print()
	{
		cout << "Value for i : " << this->i << endl;
	}
	
} obj1;	 // object for anonymous class

// Driver function
int main()
{
	obj1.setData(10);
	obj1.print();
	return 0;
}
