# pointers

### <em>( & )"referencing operator"</em>
>***_( & )"referencing operator" means making a pointer point ot a variable._***

### <em>( * )"dereferencing operator"/"indirection operator"</em>
>***_( * )"dereferencing operator"/"indirection operator" means accessing the value of the variable that the pointer points to._***

<br/>

---
## Declaration:
***syntax:***
```C
  datatype *pointerName;
    ^
    '--------- type of value stored at address.
```

***example:***
```C
int *iptr;
float *fptr;
char *cptr;
```

<br/>


## Assigning address:
<table>
<tr>
<td width="400">
  
***example:***
```C
  iptr = &age;
```

💡 ***note:*** 
<br/>_Size of pointer-variable is same for all types of pointers **(i.e 4 bytes)**. in other words a pointer needs 4 bytes to store address._

</td>
<td width="500">
<img src="../images/assigning address of pointer.gif" alt="assigning address of pointer">

</td>
</tr>
</table>

<br/>


## Dereferencing:
_is like getting value from address._
<table>
<tr>
<td width="400">
  
***example:***
```C
printf("value of iptr = Address of age = %p\n", iptr);
printf("Address of iptr = %p\n", &iptr);
printf("value of age = %d , %d, %d\n", a, *iptr, *(&age));
```
</td>
<td width="500">
 
***output:***
  
<img src="../images/output screen for pointers.png">

</td>
</tr>
</table>

<br/>

---
# important note:
***"The size of pointer variable is same for all type(data type) of pointers but the memory that will be accessed while dereferencing is different."***

_"we have to mention the data type because when we use the indirection operator the no of bytes retreived will be different for different data types.
the value of pointer only tells the address of starting byte."_

<details>
<summary><b><em> example: </b></em></summary>
<p>

suppose we have a pointer iptr which contains address 2000 and when we write ``*iptr`` the compiler knows that it has to access the information starting at address 2000.
<br/> so the compiler will look at the base type of the pointer and will retrieve the information depending on that base type. 
<br/> for example if base type is int then 4 bytes information will be retrieved, and if base type is double then 8 bytes will be retreived and soon.
<img src="../images/example pointer base type .png" alt="example" width="500">
</p>
</details>

<br/>

---
# Pointer Arithmetic:
***All types of arithmetic operations are not possible with pointers. the only valid operations that can be performed are:-***
<table>
<tr>
	<td>	p + integer (increment)	</td><td>	p - integer (decrement)	</td><td>	pointer - pointer (distance between two) </td>
</tr>
</table>

***here, all arithmetic is performed relative to the size of base type of pointer.***
***example:***
```C
	int *pi = 4000;
	pi++;			// pi will be 4000 + 4 = 4004 ( +4  since, base type of pi is int)
	pi = pi - 3 ;		// pi will be 4000 - 3*4 = 3992
	pi = pi + 5 ;		// pi will be 4000 + 5*4 = 4012
```

***example:***
```C
  int arr[4] = { 1, 2, 3, 4 };
  int  *p1 = arr[0];
  printf("%d",*(p1 + 2));           // prints 3
```

***we can substract two pointers of the same type, the result is the distance (in array elements) between the two elements.***
<br/>***example:***
```C++
  int arr[10], *p1, *p2;
  p1 = arr + 2 ;
  p2 = arr + 5;
  printf("%d", p2 - p1);      // prints 3
  printf("%d", p1 - p2);      // prints -3
```

***the precedency of ``*`` and ``++`` operator is same (since, unary) and their associativity is right to left.*** 
<br/>***example:***
<table>
<tr>
<td>
  
```C
  x = *ptr++;
  ptr = ptr + 1;      // move pointer to next element
```
</td>
<td>
  
```C
  x = (*ptr)++;
  *ptr = (*ptr) + 1;  // increment element value by 1
```
</td>
</tr>
</table>  


***any relational operator can be used to compare two pointers only if they are of same data type.***

<br/>

---

# pointer to pointer

```C
  int a = 5;
  int *pa = &a;
  int **ppa = &pa;      // ppa is a pointer to pointer and stores address of pa.
```

<br/>







