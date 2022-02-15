# Recursion
recursion is a programming technique using function or algorithm that calls itself,
<br/> one or more times until a specified condition is met.
<details>
  <summary>
    <b><em> example: </em></b>
  </summary>
<p>

```C
// fibonacci series using Recursion
# include<stdio.h>

int fibo(int n,int a, int b)
{
	if(n==0)
		return 1;

	if (b==0)
	{
		printf("%d ",b);
		fibo(n-1, 0, 1);
	}
	else
	{
		printf("%d ",b);
		fibo(n-1, b, a+b);
	}	
}

int main()
{
	fibo(10,0,0);
	return 0;
}
```
</p>
</details>
<br/>

## base Condition for recursive calls
for the recursion to terminate there is a termination condition, where function stops calling itself,
<br> and the recursive calls should proceed in such a way that we finally hit the base condition.

<br/>



## direct vs indirect recursion
<table align=center>
<tr>
<td width=400 align=center>
	
![2](https://user-images.githubusercontent.com/63545175/153750738-5bd2141a-9d2c-4387-8f6c-f998614e7089.png)
</td>
<td width=400 align=center>
	

![1](https://user-images.githubusercontent.com/63545175/153750733-6c71bbf0-5ea2-4921-8eba-74e910a35859.png)
</td>
</tr>
</table>


<br/>

## the Call Stack
- when a function is called, the system sets aside space in memory for that function to do its necessary work.
<br/> these chunks of memory are called stack frames or function frames.

- more than one function's stack frame may exist in memory at a given time, but only one ("the most recently called" or "the one at top of call stack") is executing or doing its work at a time.

- these stack frames are arranged in a **stack**. The frame for the most recently called function is always on the top of the stack.

- when a new function is called, from inside the caller function. the new function is pushed onto the top of the stack and this new function becomes the active frame.

- when a function finishes its work, its frame is popped off of the stack, and the frame immediately below it becomes the new active function on top of the stack, this function picks up immediately where it paused for the above popped function.

***example:*** 
<table>
<tr>
  <td> <b><em> consider this factorial program. <b></em> </td>
  <td> <b><em>  Call Stack  <b></em> </td>
</tr>
<td>
    
```C
#include <stdio.h>

int factorial(int number){
  if (number == 1)
    return 1;
  else
    return (number * factorial(number - 1));
}

int main(){
  printf("%d", factorial(5));
  return 0;
}

```
</td>
<td>    

<img src="images/call_stack_of_factorial.gif" width="300">
</td>
<tr>
</tr>
<tr>
<td colspan="2">
  
***explanation:*** when we run the code, the main function is called by the operating system, the system allocates space for main in memory(in the stack) the main function starts doing its work, when the main function encounters printf() function it calls printf and pauses for it. 

in the call stack, memory is allocated to printf and its frame is set on top of main(), the printf start its work and when it encounters factorial() function it calls factorial and pauses for it.

in the call stack, memory is allocated to factorial and its frame is set on top of printf(), it starts its work and soon all the required function get their frame in call stack.
  
when the function at top in call stack finishes its work, the frame below it becomes active and the function resumes from where it paused and soon all the functions get executed.

[watch this video for more](https://youtu.be/aCPkszeKRa4)
  
</td>
</tr>
</table>
  
<br/>    

<br/>

## examples of Recursion
<details>
  <summary>
 <b><em>1. Factorial of a number </b></em>
  </summary>
  <p>
    
<table>
  <tr>
    <td align=center><b><em> Using Recursion </b></em></td>
    <td align=center><b><em> Using Iteration </b></em></td>
  </tr>
<tr>
<td width=300>
  
```C
int factorial(int number){
  if(number==1)
    return 1;
  else
    return number*factorial(number-1);
};

int main() {
  printf("%d",factorial(5));
  return 0;
}
```
</td>
<td width=300>
  
```C

int main() {
  int number=5, ans=1;
  
  while(number>1){
    ans*=number;
    number--;
  }
  printf("factorial is: %d",ans);
  
  return 0;
}

```
</td>
</tr>
</table>
  </p>
</details>

<details>
  <summary>
  <b><em> 2. fibonacci series </b></em>
  </summary>
  <p>
     
<table>
  <tr>
    <td align=center><b><em> Using Recursion </b></em></td>
    <td align=center><b><em> Using Iteration </b></em></td>
  </tr>
<tr>
<td width=300>
  
```C
# include<stdio.h>

int fibo(int n,int a, int b)
{
	if(n==0)
		return 1;

	if (b==0)
	{
		printf("%d ",b);
		fibo(n-1, 0, 1);
	}
	else
	{
		printf("%d ",b);
		fibo(n-1, b, a+b);
	}	
}

int main()
{
	fibo(10,0,0);
	return 0;
}
```
</td>
<td width=300>
  

```C

int main() {
  int noOfTimes=7, pre, next, ans;
  int i=0;
  
  while(i<noOfTimes){
    if (i==0){
      printf("%d ",i);
      pre=i;
    }
    else if(i==1){
      printf("%d ",i);
      next=i;
    }
    else {
      ans=pre+next;
      printf("%d ",ans);
      
      pre=next;
      next=ans;
    }
    i++;
  }
  
  return 0;
}


```
</td>
</tr>
</table>   
  </p>
</details>
  
<details>
  <summary>
    <b><em> 3. binary search using recursion </b></em>
  </summary>
  <p>
    
<table>
  <tr>
    <td align=center><b><em> Using Recursion </b></em></td>
    <td align=center><b><em> Using Iteration </b></em></td>
  </tr>
<tr>
<td width=300>
  
```C

```
</td>
<td width=300>
   
```C

```
</td>
</tr>
</table>    
  </p>
</details>

<details>
  <summary>
    <b><em> 4. Tower of Hanoi using recursion</b></em>
  </summary>
  <p>
    
<table>
  <tr>
    <td align=center><b><em> Using Recursion </b></em></td>
    <td align=center><b><em> Using Iteration </b></em></td>
  </tr>
<tr>
<td width=300>
  
```C

```
</td>
<td width=300>
  
```C

```
</td>
</tr>
</table>    
  </p>
</details>




<br/>

## Tradeoffs between Recursion and Iteration
<table align=center>
<tr>
<td width=400 align=center>

***Recursion***
</td>
<td width=400 align=center>

***Iteration***
</td>
</tr>
<tr>
<td>

- easy to Understand
- best use for trees
- deep recursion can cause stack overflow
</td>
<td>

- generally faster
- requires less space
- harder to implement in complex problems
</td>
</tr>
<tr>
<td>

**example:** in factorial program using recursion.

**Time complexity:** depend on number of recursive calls.
i.e O(n)

**Space Complexity:** depend on call stack that increases as the recursive calls increases 
i.e O(n)
</td>
<td>

**example:** in factorial program using iteration.

**Time complexity:** depend on number of iterations.
i.e O(n)

**Space Complexity:** same variables are utilised in each iteration.
hence, Constant i.e O(1)
</td>
</tr>
</table>
    
***Note:*** Every recursive problem can be solved through iteration. it's a good choice to convert recursion to iteration. if it is easy to implement and solve a problem using iteration prefer iteration.

<br/>
<br/>

## Stack Overflow error
while solving a recursive problem the solution space for the problem converges to base condition.
<br/>***the base condition is important***, otherwise the function will keep on calling itself till the stack is exhausted.
exhausted stack won't be able to store variables for next recursion and hence is called _stack overflow error_. 

<br/>

## how to avoid Stack Overflow error
### tail Recursion | ***tail call optimization***
- A recursive function is tail recursive when a recursive call is the last thing executed by the function. 
- tail recursive functions can be optimized by the compiler, hence better choice.

<details>
  <summary> watch these video to know more... </summary>
<p>
    
- [watch this video first](https://youtu.be/Wpkh5YSqwqg  "Tail recursion/Tail-Call Optimization | Recursion in programming |DS & Algorithm| Gate Appliedcourse
")
- [then watch this video](https://youtu.be/HIt_GPuD7wk  "Types of Recursion (Part 2) | Tail & Non-tail Recursion")
- [then watch this video](https://youtu.be/_JtPhF8MshA "tail Recursion Explained - Computerphile")
</p>
</details>
<br/>

### ***examples of tail recursion***
<details>
  <summary>
    <b><em> 1. Factorial of a number </b></em>
  </summary>
  <p>
  
```C
    
#include<stdio.h>
#include<conio.h>

int factorial(int number, int accumulated_value)
{
  if(number == 1)
  {
    return accumulated_value;
  }
  else 
    return factorial(number-1, accumulated_value*number );
}

int main()
{
  printf("%d",factorial(5,1));

  return 0;
}
```
  </p>
</details>

<details>
  <summary>
    <b><em> 2. Fibonacci Series </b></em>
  </summary>
  <p>
  
```C
    
#include<stdio.h>
#include<conio.h>

int factorial(int number, int accumulated_value)
{
  if(number == 1)
  {
    return accumulated_value;
  }
  else 
    return factorial(number-1, accumulated_value*number );
}

int main()
{
  printf("%d",factorial(5,1));

  return 0;
}
```
  </p>
</details>    

<br/>    
    
###  how is tail recursion better than head recursion ?
<table align=center>
<tr>
<td width=450 align=center>
  <b> Head Recursion </b>
</td>
<td width=450 align=center>
  <b> Tail Recursion </b>
</td>
</tr>
<tr>
<td>

<b> Factorial of a Number </b>  
**ex:** 
```C++
   return (n*factorial(n-1));
```
</td>
<td>

<br/>
  
**ex:**
```C++
    return (factorial(n-1, acc*n ));
```
</td>
</tr>
<tr>
<td>
  
- in head recursion (regular recursion) when the recursive call returns there is an expression to be evaluated.
- when ``factrorial(n-1)`` returns then only ``n*factorial(n-1)`` will be evaluated.
</td>
<td>
  
- as recursive call is the last thing executed.
- there is nothing to be evaluated, when recursive call returns.
- hence, there is no need to keep record of previous state.
</td>  
</tr>
<tr>
<td>

<b> Fibonacci Series </b>  
**ex:**  
```C++
  return (fibo(n-1) + fib(n-2));
```
</td>
<td>
  
**ex:**
```C++
?????????????????
```
</td>
</tr>
<tr>
<td>
  
enter your thoughts... 
</td>
<td>
  
enter your thoughts... 
</td>  
</tr>
</table>
<br/> 
    

