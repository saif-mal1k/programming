# Control flow Statements

## if else 
<table>
<tr>
<td width="300"><b><em> Syntax: </em></b></td> <td width="300"><b><em> Example: </em></b></td>
</tr>
<tr>
<td>
  
```C++
  if <condition>
    statement
  else if <condition>
    statement
  else
    statement
```
</td>
<td>

```C++
  if (a>b)
    cout<<"a is greater";
  else if (b>a)
    cout<<"b is greater";
  else
    cout<<"both are same";
```
</td>
</tr>
</table>
  
<br/>

💡 ***the Dangling – Else problem:*** 
```C++
    if(ch>=’A’)
        if(ch<=’z’)
            ++upcase;
    else
        ++others;
```
>_"clearly the programmer wants the else to be with the outer if. 
<br/>however, c++ matches this else with the preceding unmatched if."_

***like this:-***
```C++
	if(ch>=’A’)
	if(ch<=’z’)
	++upcase;
	else
	++others;

``` 

***the solution of above problem is:***
```C++
  if(ch>=’A’)
  {
      if(ch<=’z’)
      ++upcase;
  }
  else
  ++others;
```

<br/>
  
### ternary operator /	 conditonal operator:
>_"alternatively we can use ternary operator for simple if else statements"._

***example:***
```C++
  ans = (condition)? expression1 : expression2 ;
```

<br/>
  
## switch case statement
***example:***
```C++  
  switch (expression)
  {
      case constant1:	statement;
          break;
      default: statements;
  }
```  
💡 ***note:*** _switch can be nested, just like nested if else._
***example:***
```C++
  switch(a)
  {	
      case 1: 	   
          switch(b)
          {	
              case 1:
          }
      default:	
  }
```



  
  
