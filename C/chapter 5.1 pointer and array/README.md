## pointer and 1D array
***given:***
```C
	int arr[5] = { 5 , 10, 15, 20, 25 }
```


### programm to print value of each element and their address in array
```C
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] = %d", i , arr[i]);
		
		printf("address = %p", &arr[i]);
	}
```

***note: ``arr`` is the reference to the array.
<br/>here, ``arr`` is acting a pointer variable storing address of 1st element of array.***


### programm to do same but using pointer notation
```C
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] = %d", i , *(arr+i));
		
		printf("address = %p", arr+i);
	}
```



## Subscripting pointer Variables
since, <b>```*(arr+i) = arr[i]  or   i[arr]	//subscript notation```</b>

therefore, if <b>```int *ptr = arr;```</b> then <b>```*(ptr+i) = ptr[i]```</b>.
	


