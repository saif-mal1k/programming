## pointer and 1D array
***given:***
```C
	int arr[5] = { 5 , 10, 15, 20, 25 }
```


### program: <em>print value of each element in an array and their address.</em>
```C
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] = %d", i , arr[i]);
		
		printf("address = %p", &arr[i]);
	}
```

***note: ``arr`` is the reference to the array.
<br/>here, ``arr`` is acting a pointer variable storing address of 1st element of array.***

<br/>

### program: <em>to do same but using pointer notation.</em>
```C
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] = %d", i , *(arr+i));
		
		printf("address = %p", arr+i);
	}
```

<br/>

## Subscripting pointer Variables
- ***arr is a pointer that holds the address of ist element of array.***
- hence, from ponter arithmetic **``arr+i``** holds the addresss of i<sup>th</sup> element of array.
- on dereferencing this pointer **``*(arr+i)``** we get i<sup>th</sup> element of array.

writing **``*(arr+i)``** as **``arr[i]``** or **``i[arr]``** is known as writing in subscript notation.

since, <b>```*(arr+i) = arr[i]  or   i[arr]```	//subscript notation</b>

therefore, if <b>```int *ptr = arr;```</b> then <b>```*(ptr+i) = ptr[i]```</b>.
	
<br/>




