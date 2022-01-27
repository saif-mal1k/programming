## Conditional Statements
### 1. if else
<table>
<tr>
<td>
<img width=300 "using it to set column width"/>
  
***Syntax:***
```C
if (expression)
{
  Statement
}
else
{
  Statement
}
```
</td>
<td>
<img width=300 "using it to set column width"/>

  
***example:***
```C
if(a>b)
{
  printf("a is greater ");
}
else
{
  printf("b is greater ");
}
```
  </td>
</tr>
</table>

**note:** simple if else can be replaced using _ternary operator_.
  
### 2. else-if ladder
<table>
  <tr>
  <td>
    <img width=300 "using it to set column width"/>
    
***Syntax:***
```C
if (expression)
{
  Statement
}
else if (expression)
{
  Statement
}
else if (expression)
{
  Statement
}
else
{
  Statement
}
```
  </td>
  <td>
    <img width=300 "using it to set column width"/>

***example:***
```C
if(a==0)
{
  printf("a is 0 ");
}
else if (a == 1)
{
  printf("a is 1 ");
}
else if (a == 2)
{
  printf("a is 2 ");
}
else
{
  printf("don't know value of a ");
}
```
  </td>
</tr>
</table>  
  
  
### 3. Switch Case
***Syntax:***
```C
Switch(expression)
{
  Case <const-expression1> :
    Statement;
    break;
  Case <const-expression1> :
    Statement;
    break;
  Case <const-expression1> :
    Statement;
    break;
  default:
    Statement;
}
```

<br/>

## Looping
### 1. for loop
***Synatx:***
```C 
for(initialization; Condition; Updation)
{
  Statement;
}
```

### 2. While loop
***Syntax:***
```C
While (expression)
{
  Statement;
}
```

### 3. do While loop
***Syntax:***
```C
do
{
  Statement;
} While (expression);
```

<br/>

## Break and Continue
<table>
  <tr>
    <td width=500> <b><em> Break; </em></b></td>
    <td width=500> <b><em> Continue; </em></b></td>
  </tr>
  <tr>
    <td>
      The <b>break</b> is a keyword in C which is used to bring the program control out of the loop.
      The break statement is used inside loops or switch statement. The break statement breaks the loop one by one, i.e., in the case of nested loops, it breaks the inner loop first and then proceeds to outer loops.
    </td>
    <td> 
      unlike break statement Instead of forcing termination, it forces the next iteration of the loop to take place, skipping any code in between.
    </td>
  </tr>
  <tr>
  <td>
      
```C
for(n=0; n>=0; n++)
{
  if(n>4)
  {
    break;
  }
}
```
  </td>
  <td>
      
```C
for(n=0; n>=0; n++)
{
  if(a[i]<0)
  {
    Continue;           
  }
}
```
  </td>
  </tr>
</table>
  
<br/>

## go to and labels
for breaking out of two or more nested loops at once. the break statement cannot be used directly since it only exits from the innermost loop.

thus, something like is better
```C
for(expression)
{
  for(expression)
  {
    if(fault)
    {
      goto error;
    }
  }
}

error:
  statements;
  /* clean up the mess */
```


