# Functions
## declaration
<table>
<tr>
<td width=300>
  
***Syntax:***
```C
returnType functionName(parameterType, ...);
```  
</td>
<td width=300>

***example:***
```C
int add(int, int);
``` 
</td>
</tr>
</table>
  
## definition
<table>
<tr>  
<td width=300>
  
***Syntax:***
```C
returnType functionName(parameterType parameter, ...)
{
  // statements 
  return value;
}
```
</td>
<td width=300>
  
***example:***
```C
int add(int no1, int no2)
{
  sum = no1 + no2 ; 
  return sum;
}
```
</td>
</tr>
</table>

***note:*** function can have as many return Statements as you want, but only one that is encountered first will be executed. 
<br/>then the control will flow out of the function.


## Calling
<table>
<tr>
<td width=300>

***Syntax:***
```C
functionName(arguement,...)
```
</td>
<td width=300>

***example:***
```C
add(1, 5);
```  
</td>
</tr>
</table>

<br/>

## types of function
<table>
<tr>
<td width=300>  

***type:***
</td>
<td width=300>

***example: (declaration)***
</td>
</tr>
<td>  

***withoutReturn  withoutArguement***   
</td>
<td>

```C
  void functionName(void);
```
</td>
</tr>
<tr>
<td>  

***withReturn  withoutArguement***   
</td>
<td>

```C
  returnType functionName(void);
```
</td>
</tr>
<tr>
<td>  

***withoutReturn  withArguement***   
</td>
<td>

```C
  void functionName(parameterType);
```
</td>
</tr>
<tr>
<td>  

***withReturn  withArguement***   
</td>
<td>

```C
  returnType functionName(paramType);
```
</td>
</tr>
</table>

<br/>

# the main function
***declaration:*** by C compiler.

***definition:*** by Programmer.

***calling:*** by Operating System.


<br/>


# External Variables & Automatic Variables
***external variables*** are defined outside of any function and thus, potentially available to many functions.
<br/>function themselves are always external.
<br/> C does not allow function to be defined inside other functions.

***automatic variables*** are internal to function. they come into existance when the function is external and disappear when left.

***example:***
```C
# define MAX 100 , # define NO '99'
```
**note:** don't use **;**

<br/>


# Local , Global and Static Variables
## Local variables:
```C
void func(void)
{
  int a=2, b=4;
  //here, a & b are local to function. they can't be accessed outside this function
}
```

## global variables:
<table>
<tr>
<td width=500>

```C
#include<stdio.h>
void func(void);
int a=2, b=4;
/* here a & b are global variables they,
  can be accessed anywhere inside this program. */
int main()
{
  b=4;
}
void func()
{
  b=2;
}
```
</td>
<td width=500>

```C
# define max 3
/* creates a macro , which is like a global constant.
  it can be accessed anywhere, but value can't be changed. */ 
```
</td>
</tr>
</table>

## Static Variables
***Static Variables*** is initialized only once and its value can be retained between function calls.
<table>
<tr>
<td width=300>
  
```C
  # include <stdio.h>
  
  void func()
  {
    int a=10;
    static int b=10;
    printf("a=%d, b=%d\n",a,b);
    a++;
    b++;
  }
  
  int main()
  {
    func();
    func();
    func();
    return 0;
  }
```
</td>
<td width=300>

***Output:***
<br/> a=10, b=10
<br/> a=10, b=11
<br/> a=10, b=12
  
***explanation:***
here, b is initialized only Once but value is retained again & again.
<br/> it is like a global variable but can be accessed inside function where declared.
</td> 
</tr>
</table>


