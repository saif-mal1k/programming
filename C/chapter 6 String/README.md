# String
_in c string is a character array._

### declaration
```C
	char str[10];
```

### initialization
```C
	char str[10] = {'I', 'n', 'd', 'i', 'a', '\0'};
	char str[10] = "India";
```

<br/>


## Input / Output of string:
```C
	int main()
	{
		char str[10];

		/* input: */
		scanf("%s", str);
		// alternatively, you can use.
		gets(str);

		/* Output: */
		printf("%s", str);
		// alternatively, you can use.
		puts(str);
		
	}
```

***note:*** <b><em> act as a pointer storing address of 1st element (char).</em></b>
<b>``%S``</b><em>tells compiler that input will be a string.</em> 

<br/>

## passing String to a function
### difference between ```func(str);``` and ```func(char *str);``` ????





