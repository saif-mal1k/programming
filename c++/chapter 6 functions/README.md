# function in c :

### prototype / declaration
```C
	int func-name ( int arg….)		//parameters called formal parameter
```
### definition
```C
	void sayhellow(){ 
		cout<<”hellow” ; 
	 }
```
### calling
```
	sayhellow();		        	// parameters are called actual parameters
```

💡 ***tip:*** _in c function definition can't have default arguements, but **C++ allow us to add default arguements to functions.**_


<br/>

## type of  function calling : -

### call by value 
**note: *during call by value , when a function is called by passing arguments , it creates the copy of passed arguments to work upon . any change in the formal parameter is not reflected back to actual parameter.***	

### call by reference
**note: *during call by reference, function is called by passing reference to variable any change in the formal parameter are reflected back to actual parameter.***
```C++
		void swap(int &, int &);
		swap(a,b);
		void swap (int &x, &y)
		{
			statement ;
		} 
```




