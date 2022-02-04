# Recursion
recursion is a programming technique using function or algorithm that calls itself,
<br/> one or more times until a specified condition is met.

<br/>

## base Condition for recursive calls
for the recursion to terminate there is a termination condition, where function stops calling itself,
<br> and the recursive calls should proceed in such a way that we finally hit the base condition.

<br/>



## direct vs indirect recursion
[watch this video](https://youtu.be/t9whckmAEq0)


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

<img src="call_stack_of_factorial.gif" width="300">
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

[watch this video](https://youtu.be/hK01dEvdN_s)


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
- [watch this video first](https://youtu.be/Wpkh5YSqwqg)
- [then watch this video](https://youtu.be/HIt_GPuD7wk)
- [then watch this video](https://youtu.be/_JtPhF8MshA)

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


