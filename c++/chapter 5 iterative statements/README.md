# Iterative Statements

## for loop
***synatx:*** 
```C++
  for ( initialization ; test-expression ; updation)
  {	
      statement ;
  }
```

### variations :-
**1. multiple initialization and update expression**
```C++
  for (i=1,sum=0 ; i<=n ; sum+=i, ++i)
      statement ;
```

**2. declaration of variable in the loop**
```C++
  for (int ch=1 ; ch<n ; ++ch)
  {	
      statement ;
  }
```

***✍️ note:***  _"initialization of variable inside for statement makes it local and can be accessed in the block where it has been declared, 
<br/> ch’s scope is limited to the loop where it is declared. it can not be used after loop is over."_

<br/>

## while loop     						--entry controll loop
***syntax:***
```C++
  while ( expression )
  {	
      statement ;
  }
```

<br/>

## do while loop						--exit controll loop
***synatx:***
```
  do
  {	
      statement ;
  } while ( test-expression ) ;
```

<br/>

## 💡 for loop using range and iterable(C++11):
```C++
  for (auto x : v)    // for each x in v, x is a variable and v  is an iterable an array.
                      // auto is a keyword that automatically deduces type of a constant expression.
```
***example:***
```C++
  #include<iostream>
  using namespace std;
  
  int main()
  {
    for (int i:{0,1,23,56,89})		// here i is iterating over array
        cout<<i<<"\n";  
    return 0;
  }
```

<br/>

## jump statements:
### break;
***note:*** _the break statement skips the rest of the loop and jumps over to the statement following the loop._

### continue;
***note:*** _the continue statement skips the rest of the loop statements and causes the next iteration of the loop to take place._

### goto and labels 
***example:***
```C++
  goto label;
      statements;
  label: 
      statements ;
```








  


