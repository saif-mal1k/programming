# Array 


## 1D array

### declaration:
```C
	int arr[5];	//this array can hold 5 integers
```

### initialization:
***syntax:*** <b><em>```datatype arrayName[size] = { val1, val2, .....};```</em></b>

```C
	int mark[5] = { 45, 20, 25, 30, 42 };	
```


### examples:

❌  <b>```int arr[3] = { 1, 2, 3, 4, 5, 6, 7, 8 };	//error```</b> 

✔️  <b>```int a[3] = { 1, 2, 3 };```</b> 

✔️  <b>```int b[3];```</b> 

❌  <b>```b = a;	//not Valid have to copy all elements one by one.```</b> 

✔️  <b>```int brr[] = { 1, 2, 3, 4 };	//auto set size 4```</b> 

❌  <b>```int brr[] = { 1, 2, 3, 4 };	//invalid Size can't be determined```</b> 




<br/>

### 1D Arrays and functions
***declaration:***
```C
	int func(int arr[4]);
	int func(int arr[]);
```

***passing array to function:***
```C
	int arr[] = { 1, 2, 3, 4 };
	func( arr );
	
```

***note: function can't return array, but you can return pointer to array.***

<br/>

---



## 2D array

### declaration:
***syntax:*** <b><em>```datatype arrayName[rowSize][columnSize];```</em></b>
```C
	int arr[4][5];	//this array has 4 rows and 5 columns, and it can hold 20 integers
```

***examples:***

❌  <b>```arr[][];	//In-Valid have to specify at least column.```</b> 

✔️  <b>```int arr[][3];	/*its better to specify both rows & columns.```</b>

<br/>

### initialization:
***syntax:*** 
<b><em>
```
	datatype arrayName[rowSize][columnSize] = { 	{ r0c0, r0c1, r0c2, .....},
							{ r1c0, r1c1, r1c2, .....},
							{ r2c0, r2c1, r2c2, .....},
							.....
						  };
```
</em></b>

```C
	int mark[4][3] = { { 1, 2, 3}, { 4, 5, 6}, { 7, 8, 9}, {10, 11, 12} };	
```

<br/>

### taking input in 2D array:
```C
	for(i=0; i<rowSize; i++)
		for(j=0; j<colSize ; j++)
			scanf("%d", &arr[i][j]);
```

### Displaying values of 2D array:
```C
	for(i=0; i<rowSize; i++)
	{
		for(j=0; j<colSize ; j++)
		{
			printf("%d", arr[i][j]);
		}
	}
```

<br/>

### 2D Arrays and functions
***declaration:***
```C
	int func(int arr[][5]);		// ✔️
	int func(int arr[3][5]);	// ✔️
```

***passing array to function:***
```C
	func( arr );	
```



## program for matrix multiplication:
```C
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2 ; j++)
		{
			c[i][j] = 0;
			for(k=0; k<c1; k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
```



