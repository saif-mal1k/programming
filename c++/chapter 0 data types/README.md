# Data types
## primitive Data types

  | Data type | format specifier | size (_in Bytes_) | range(2ˣ-1)  |
  | ---:      |   :---:          | :---:             |          ---:|
  |int        | %d               | 2                 | -32768  -  +32767|
  |signed int | %d               | 2                 | -32768  -  +32767|
  |unsigned int | %d             | 2                 | 0  -  65535|
  |short int  | %d               | 2                 | -32768  -  +32767|
  |long int   | %ld              | 4                 | -2147483648  -  +2147483647|
  |float      | %f               | 4                 | -3.4E<sup>38</sup> - +3.4E<sup>38</sup> |
  |double     | %lf              | 8                 | -1.7E<sup>308</sup> - +1.7E<sup>308</sup> |
  |long double| %Lf              | 10                | -3.4E<sup>3942</sup> - +3.4E<sup>3942</sup> |
  |char       | %c               | 1                 | -128  -  +127|
  |signed char| %c               | 1                 | -128  -  +127|
  |unsigned char| %c             | 1                 | 0  -  255|
  
  _**note:** 2ˣ-1, here x is the no of bits_ 

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

---

<details>
 <summary> <b><em> Data type Modifiers </em></b> </summary>
 <p>

Type Modifiers are special keywords that are used to modify the range of the data types and also the memory space allocated to the variable.
<br/> ***example:*** long, short, signed, unsigned, long long.
  
 </p>
</details>

<br/>

<details>
<summary> <b><em> type Conversion / type Casting </em></b> </summary>
<p>
   
### ***1. Implicit***
*automatically done by compiler.*

### ***2. Explicit***
_when specified by programer_ <br/>
***example:***
```C
int d;
Char b = 'a';
printf("%d",b); // implicit
d = (int) b ;   // explicit
```

***explanation:*** _d will be having the ASCII value of b i.e d="98" and output will be 98 ._

 </p>
</details>
<br/>

---
# <em> Keywords, Variables, Constants, Literals, Identifiers </em> 
## Keywords
There are more than 92 reserved words in C++. 
- There are 32 keywords that were in the C programming language and have been carried over into C++.
- There are another 30 reserved words that were not in C, are therefore new to C++
- There are 11 C++ reserved words that are not essential when the standard ASCII character set is being used, but they have been added to provide more readable alternatives for some of the C++ operators, and also to facilitate programming with character sets that lack characters needed by C++.

<br/>

## Variables
_a variable is a name given to a memory location, that is used to hold a value._

***example:***
```C++
int salary = 19000;
```
***note:*** _variables that are not initialized contains garbage value, left over from programme that last used the memory they occupy now._


<br/>

## Constants vs Literals
_**Constants** are variables whose values can't be changed._
```C++
const int val = 10;       // 10 is the literal here.
```
_whereas, **Literals** are literally numbers/letters that indicate the value of a variable or constant._

<br/>

## Identifiers
_The identifier is only used to identify an entity uniquely in a program at the time of execution._

**example:** _name of a variable , name of a constant ...._

<br/>

<details>
<summary><b><em> Que: difference between identifier and a variable ? </b></em></summary>
<p>
  
***Ans:*** The **identifier** is only used to identify an entity uniquely in a program at the time of execution. 
<br/> whereas, a **variable** is a name given to a memory location, that is used to hold a value.
</p>
</details>

<br/>

***💡 tip:*** _**auto** keyword can be used to deduced the return type of expression or function from its return value. 
<br/>“ very useful when we don’t know what type of value will be returned”._
```C++
// here, "auto" means "deduce the return type automatically"
auto mul(int i, double d) {
  return i*d; 
}    
```

<br>

---

## derived data types
<details>
<summary> click me </summary>
<p>
  
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
</p>
</details>

<br/>

## user defined datatypes 
<details>
<summary> click me </summary>
<p>
  
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

</p>
</details>
  
<br/>


## Abstract Data types
<details>
<summary> click me </summary>
<p>

### Stack

### Queue 

### List

</p>
</details>
  
<br/>

---




