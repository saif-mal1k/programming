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
***function declaration:***
```C
	int func(int arr[4]);
	int func(int arr[]);
```

***passing array to function:***
```C
	int arr[] = { 1, 2, 3, 4 };
	func( arr );
	
```

***function can't return array, but you can return pointer to array.***

<br/>

---










