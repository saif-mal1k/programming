## references:
***syntax:***  
```C++
dataType &refVar = varName; 
```
***example:***	
```C++
	int total;
	int &sum = total;		// address of sum is equal to address of total
	total = 100;
	cout<<sum;			// will produce output 100
```
***note:*** _sum is declared as reference variable for a variable total, then both sum and total will represent the same and can be used interchangeably. 	
<br/> note, there can be no references to references, no array of references, and no pointer to references._

<br/>

## pointers:
###  programme to understand references and pointers :
```C++
#include<iostream>
using namespace std;

int main()
{
    int a, b=10;
    cout<<&a<<"\t"<<&b;   	 // print address of a 0x61fe0c and address of b 0x61fe08
    int &c = b;           	 // address of c is equal to address of b 	 “ c is a reference variable”
    cout<<"\n"<<c<<"\t"<<&c; 	 // print value at c 10 and address of c  	“ same characteristics as b”
    int * p = &b;          	 // value of p is equal to address of b  	“ p is a pointer variable”
    cout<<"\n"<<p<<"\t"<<*p;	 // print value of p, i.e address it hold and value at (value of p) 10
}
```
***Output:***
```C++
0x61fe0c	0x61fe08
10		0x61fe08
0x61fe08	10
```

<br/>

<details>
	<summary><b><em> Que: </em></b>  but what does <b>int d = & b;</b> , <b>int &c = &b;</b> , <b>int *p = d;</b>  mean ? </summary>
<p>

---
```C++
	int *p = d;
```	

<br/>**in c++:**  <b><em>``error: invalid conversion from 'int' to 'int*'``</em></b>
><b><em>"here we meant for pointer to hold the value doesn’t make sense. we could have said p=d."</em></b>

<br/>**in c:** &nbsp;&nbsp;&nbsp; <b><em>``warning: initialization of 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]``</em></b>
><b><em>"if use printf p it will print value of d."</em></b>
---
```C++
        int d = & b;
```

<br/>**in c++:**  <b><em>``error: invalid conversion from 'int*' to 'int'``</em></b>
	
<br/>**in c:** &nbsp;&nbsp;&nbsp; <b><em>``warning: initialization of 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]``</em></b>
><b><em>"if use printf d will print address of b."</em></b>
><br/><b><em>"if use printf *d will give ``error: invalid type argument of unary '*' (have 'int')`` , btw b was initialized as int b=10;"</em></b>
---
```C++
	int &c=&b;	
```
<br/>**in c++:**  <b><em>``error: invalid conversion from 'int*' to 'int'``</em></b>
<br/>**in c++:**  <b><em>``error: cannot bind rvalue '(int)(& b)' to 'int&'``</em></b>
><b><em>"actually int &c=b; means address of c to be address of b, hence above line will be compiled as, address of c to be address of (address of b) doesn’t make sense."</em></b>
	
<br/>**in c:** &nbsp;&nbsp;&nbsp; <b><em>``in c we don’t have reference data type.``</em></b>
	
---
</p>
</details>

<br/>

### pointer’s in c,c++:-
```C++
int *p,*q,**r,*s;   	//three pointer's , one pointer to pointer
int val = 5;    	// one varibale
p = &val;   		// p hold address of val
q = p;      		// q hold value of p( value  of p is the address of val) therefore q hold address of val

/*_____important________________________________________________________________*/

r = &p;     	// r is a pointer to pointer (r to p) r has address of p and p has
		//	address of val, since r is a pointer to pointer you can 
		//	dereference to val from r.
s = &p;     	//in C: s is a pointer it contains address of p, by dereferencing
		//	s you will get to address hold by p, and you won’t be 
		//	able to dereference that also from s , however you can 
		//	derefernce address hold by p from p.
s = &p;  	// error: cannot convert 'int**' to 'int*' in assignment

```

### pointer arithmetic : 
<table>
<tr>
	<td>	p + integer (increment)	</td><td>	p - integer (decrement)	</td><td>	pointer - pointer (distance between two) </td>
</tr>
</table>

<br/>


### void pointers & null pointer
_a **void pointer** can point to any data type , 
<br/> and is dereferenced after type casting to appropriate pointer  type._
<br>***example:***
```C++
	void *ptr ;		// declaration
	int  val = 10;
	ptr  = &val;	

	printf(“value is: %d” , *(int *)ptr);		// dereferencing after type casting
```

### Null Pointer: 
_We try to ensure that a pointer always points to an object so that dereferencing it is valid. 
<br/> When we don’t have an object to point to or if we need to represent the notion of “no object available” (e.g., for an end of a list), 
<br/> we give the pointer the value nullptr (“the null pointer”)._
<br/>***example:***
```C++
	double* pd = nullptr; 
	Link* lst = nullptr; 		// pointer to a Link to a Record 
	int x = nullptr; 		// error: nullptr is a pointer not an integer
	int *name = nullptr		// pointer to int to name
```

<br/>


### Dynamic Memory mgmt... ( “new” & “delete” keywords) :
_The new operator allocates memory from an area called the free store (also known as dynamic memory and heap). 
<br/> Objects allocated on the free store are independent of the scope from which they are created and “live” until they are destroyed using the delete operator._





