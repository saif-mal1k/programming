# Data types
## primitive Data types
### void
### int 

### float
### double

<br/>

### char

<br/>

### string	
```C++
string msg = “hello”;       			         
```
***note:*** _string is a class._ ***hence: no, it is not a primitive data type.***

<br/>

### bool		
```C++
bool mybol = true;	
//or you can do...
bool my = 1;	      		
```
***note:***  _"C does not have boolean data types and string and normally uses integers for boolean testing."_
<br/> bool data type is supported in C++. 
<br/> bool data type ***does not support ++, -- but support other operators.***

<br/> 

## Data type Modifiers ????

## type conversion  / type casting ????

***💡 tip:*** _**auto** keyword can be used to deduced the return type of expression or function from its return value. “ very useful when we don’t know what type of value will be returned”._
```C++
// here, "auto" means "deduce the return type automatically"
auto mul(int i, double d) {
  return i*d; 
}    
```


<br/>

## derived data types
### 1.	array
```C++
  string models[4] = {“Volvo”, “BMW”, “Mercedes”, “Audi”}
```

### 2.	function
```C++
  float cube (float);
```

### 3.	pointer
```C++
  int * p;
```

### 4.	references:
```C++
  type &refVar = varName; 
```

<br/>

## user defined datatypes 
### 1. class
```C++
class department {
    char name [10];
    int id;
  public:
    add ();
    delete ();
    modify ();
}
department sales, purchase, import, account ;
```

### 2. struct
```C++
struct student {
  char name [10];
  int roll_no;
};
student student1;
```

### 3. union 
```C++
union share {
  int I;
  char ch;
}
```

### 4. enum
```C++
  enum enum_name{const1 = 0, const2 = 4, ....... }
```

### 5. tydef ???

### 6. namespace ???

<br/>


## Abstract Data types

### Stack

### Queue 

### List

<br/>







