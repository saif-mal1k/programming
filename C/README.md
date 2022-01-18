# C Programming syntax, Quick reference notes 

![image](https://user-images.githubusercontent.com/63545175/149996833-a732faeb-993a-4924-b03f-dd16d090e57d.png)


&nbsp;

## Data types

| Data type | format specifier | size (_in Bytes_) | range(2ˣ-1)  |
| ---:      |   :---:          | :---:             |          ---:|
|int        | %d               | 2                 | -32768  -  +32767|
|signed int | %d               | 2                 | -32768  -  +32767|
|unsigned int | %d             | 2                 | 0  -  65535|
|short int  | %d               | 2                 | -32768  -  +32767|
|long int   | %ld              | 4                 | -2147483648  -  +2147483647|
|float      | %f               | 4                 | -32768  -  +32767|
|char       | %c               | 1                 | -128  -  +127|
|signed char| %c               | 1                 | -128  -  +127|
|unsigned char| %c             | 1                 | 0  -  255|

_**note:** 2ˣ-1, here x is the no of bits_ 

### ***Primitive Data types***
*data type provided by a programming language as a basic building block.*
<br/>ex: int, char, float

### ***Derived Data types***
*those that are defined in terms of other data types.*
<br/>ex: array, function, pointer

### ***user defined Data types***
*those which are developed by programmers by making use primitive and/or derived data types*
<br/>ex: class, struct, union, enum

### ***Abstract Data types***
ex: stack, queue, Linked-list


&nbsp;

## Backslash Constant's / Escape sequence's
| character | description           | character | description           | 
|:---:      |                   :---| :---:     |                   :---|
| ```\a```        | alert(bell) character | ```\\```        | backslash             |
| ```\b```        | backspace             | ```\?```        | question mark         |
| ```\f```        | formfeed              | ```\'```        | single quote          |
| ```\n```        | new line              | ```\"```        | double quote          |
| ```\r```        | Carriage return       | ```\000```      | octal number          |
| ```\t```        | horizontal tab        | ```\ xhh```     | hexadecimal number    |
| ```\v```        | vertical tab          |           |                       |


&nbsp;

## ASCII values:
| Character | ASCII value|
| :---:     |  ---:      |
|A | 65|
|a | 97|
|Z | 90|
|z | 122|
|0 | 48|
|9 | 57|
|{ | 123|
|} |124|


&nbsp;

_***note:*** there are 32 keywords in c._

![image](https://user-images.githubusercontent.com/63545175/150015309-3713a1bd-9372-46e2-8952-91ac5f7d9bc8.png)


&nbsp;

## Operators

### ***Unary Operator***
#### ***1. Unary minus ( - )***
-(a)  = -a
<br/>-(-a) = +a

#### ***2. increment / decrement (++/--)***
a++ , ++a , a-- , --a

#### ***3. bitwise Complementation***
~(14)  = 1
~(0)   = 1

#### ***4. Logical not ( ! )***
***example:***  !a , means not equal to a. 


&nbsp;

### ***Binary Operator***

#### ***1. Arithmetic***
| operator | example | answer |
| :---:    |---------|    ---:|
| + | 3 + 2 | 5 |
| - | 3 - 2 | 1 |
| \* | 3 * 2 | 6 |
| / | 3 / 2 | 1.5 |
| % | 3 % 2 | 1 |

#### ***2. Relational***
| operator | description |
| :---:    |-------------|
| < | less than |
| > | greater than |
| <= | less than equal to |
| >= | greater than equal to |
| == | equal to |
| != | not equal to |

#### ***3. Logical***
| operator | description |
| :---:    |-------------|
| && | true, if both operands are true|
| \|\| | true, if either one is true|

***note:***  **" ! "**  is used as unary operator and is a logical operator, ex: !a  .


&nbsp;

## type Conversion/ type Casting
### ***1. Implicit***
*automatically done by compiler.*

### ***2. Explicit***
*when specified by programer*
<br/>***example:***
```C
Char b = 'a';
printf("%d",b); // implicit
d = (int) b ;   // explicit
```
***explanation:*** _d will be having the ASCII value of b i.e d=97 and output will be 97._


&nbsp;


