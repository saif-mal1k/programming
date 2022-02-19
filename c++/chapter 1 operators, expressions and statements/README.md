
## Operators , Operands and Expressions
```C
#include<stdio.h>
#include<conio.h>
int main()
{
int a = 5;
const int b = 1;
int c = a + b * 10; // this is an expression

//int,const are keywords
//a,c are variables 
//b is a constant
//5, 1, 10 are literals
// *,+,= are operators
//variables, constant and literals used in above expression are operands. 

printf("%d",c); // output is 15,  why 15? BODMAS rule don't apply 

return 0;
}
```
**note:** an expression as ``x=0`` or ``i++`` becomes a ***statement***  when it is followed by a semicolon as in ``x=0;`` , ``i++;`` , ``printf(i);`` .

<details>
 <summary> <b><em> types of operator's </em></b></summary>
 <p>
  
  <ol>
   <li>
   <details>
    <summary> <b> Unary operators </b> </summary>
   <p>
    
   #### ***1. Unary minus ( - )***
   -(a)  = -a
   <br/>-(-a) = +a

   #### ***2. increment / decrement (++/--)***
   ***Increment ++***
    The increment operator increases the numeric value of its operand by 1. 
    <br/>
    When placed before the operand, it’ll return the incremented value. 
    <br/>
    When placed after it, it’ll return the original value and then increments the operand.
    
   ***Decrement --***
    The decrement operator decreases the numeric value of its operand by 1. 
    <br/>
    When placed before the operand, it’ll return the decremented value. 
    <br/>
    When placed after the operand, it’ll return the original value and then decrements the operand.
   
   ***example:***
   ```C
   print(a++);     // print a then increment 
   print(++a);     // increment then print a
   print(a--);     // print a then decrement
   print(--a);     // decrement then print a
   ```
   
   
   #### ***3. bitwise Complementation***
   ~(14)  = 1
   
   ~(0)   = 1
   
   #### ***4. Logical not ( ! )***
   ***example:***  !a , means not equal to a. 
    
   </p>
   <br/>
  </details>
  
   </li> 
   <li>
    <details>
     <summary> <b>Binary Operator</b> </summary>
    <p>
      
 #### ***1. Arithmetic***
     
 <table>
     <tr>
         <td align=center > <b> operator <b/> </td>
         <td align=center > <b> example <b/> </td>
         <td align=center > <b> answer <b/> </td>
     </tr>
     <tr>
         <td align=center >+</td>
         <td align=center >3 + 2</td>
         <td align=center >5</td>
     </tr>
     <tr>
         <td align=center >-</td>
         <td align=center >3 - 2</td>
         <td align=center >1</td>
     </tr>
     <tr>
         <td align=center > * </td>
         <td align=center >3 * 2</td>
         <td align=center >6</td>
     </tr>
     <tr>
         <td align=center >/</td>
         <td align=center >3 / 2</td>
         <td align=center >1.5</td>
     </tr>
     <tr>
         <td align=center >%</td>
         <td align=center >3 % 2</td>
         <td align=center >1</td>
     </tr>
 </table>
     
 #### ***2. Relational***     
 <table>
     <tr>
         <td align=center > <b> operator <b/> </td>
         <td align=center > <b> description <b/> </td>
     </tr>
     <tr>
         <td align=center >&amp;&amp;</td>
         <td>true, if both operands are true</td>
     </tr>
     <tr>
         <td align=center > || </td>
         <td>true, if either one is true</td>
     </tr>
 </table>
     
 #### ***3. Logical***
 <table>
     <tr>
         <td align=center > <b> operator <b/> </td>
         <td align=center > <b> description <b/> </td>
     </tr>
     <tr>
         <td align=center >&amp;&amp;</td>
         <td>true, if both operands are true</td>
     </tr>
     <tr>
         <td align=center > || </td>
         <td>true, if either one is true</td>
     </tr>
 </table>
      
***note:***  **" ! "**  is used as unary operator and is a logical operator, ex: !a  .
     
#### ***4. Bitwise operators***
<ul type=disc>
 <li> only used for integer values.</li>
 <li> firstly break the number(integer value) into its binary.</li>
</ul>

<br/>
     
<table>
     <tr>
         <td align=center > <b> operator <b/> </td>
         <td align=center > <b> description <b/> </td>
         <td align=center > <b> operator <b/> </td>
         <td align=center > <b> description <b/> </td>
     </tr>
     <tr>
         <td align=center >&amp;</td>
         <td align=center >12 &amp; 6</td>
         <td align=center >```&lt;&lt;```</td>
         <td align=center >```5 &lt;&lt; 6```</td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >1100 &amp; 0110</td>
         <td align=center ></td>
         <td align=center >```101&lt;&lt;6```</td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >0100</td>
         <td align=center ></td>
         <td align=center >101000000</td>
     </tr>
     <tr>
         <td></td>
         <td>= 4</td>
         <td></td>
         <td>= 320</td>
     </tr>
     <tr>
         <td align=center > | </td>
         <td align=center >12 | 6</td>
         <td align=center >```&gt;&gt;```</td>
         <td align=center >```13 &gt;&gt; 3```</td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >1100  | 0110</td>
         <td align=center ></td>
         <td align=center >```1101&gt;&gt;3```</td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >1111</td>
         <td align=center ></td>
         <td align=center >1</td>
     </tr>
     <tr>
         <td></td>
         <td>= 15</td>
         <td></td>
         <td>= 1</td>
     </tr>
     <tr>
         <td align=center >^ ("XOR")</td>
         <td align=center >13 ^ 10</td>
         <td align=center ></td>
         <td align=center ></td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >1101^1010</td>
         <td align=center ></td>
         <td align=center ></td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >0111</td>
         <td align=center ></td>
         <td align=center ></td>
     </tr>
     <tr>
         <td align=center ></td>
         <td align=center >= 7</td>
         <td align=center ></td>
         <td align=center ></td>
     </tr>
 </table>
      
#### table for Logical and Bitwise operators
 <table>
     <tr>
         <td align=center > <b> a </b> </td>
         <td align=center > <b> b <b/> </td>
         <td align=center > <b> a&amp;&amp;b , a&amp;b <b/> </td>
         <td align=center > <b> a || b , a | b <b/> </td>
         <td align=center > <b> a^b <b/> </td>
         <td align=center > <b> !a <b/> </td>
         <td align=center > <b> ~b <b/> </td>
     </tr>
     <tr>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >1</td>
         <td align=center >1</td>
     </tr>
     <tr>
         <td align=center >0</td>
         <td align=center >1</td>
         <td align=center >0</td>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >0</td>
     </tr>
     <tr>
         <td align=center >1</td>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >0</td>
         <td align=center >1</td>
     </tr>
     <tr>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >1</td>
         <td align=center >0</td>
         <td align=center >0</td>
         <td align=center >0</td>
     </tr>
 </table>
       
</p>
</details>
</li>
</ol>

<br/>

#### <em> Alternative keywords for operators: </em>
<table>
<tr>
  <td><b><em> operator </b></em></td> <td><b><em>  Keyword  </b></em></td>
</tr>
<tr>
<td>   &&	  </td> <td>    and    </td>
</tr>
<tr>
<td>  	||	</td> <td>    or     </td>
</tr>
<tr>
<td>  	!		</td> <td>    not    </td>
</tr>
<tr>
<td>  	!=	</td> <td>    not_eq  </td>
</tr>
<tr>
<td>  	&=	</td> <td>    and_eq  </td>
</tr>
<tr>
<td>  	|=	</td> <td>    or_eq   </td>
</tr>
</table>

<br/>

### Ternary operator (?:) "Conditional Operator" 
***syntax:***
```C
n = ((Condition)? value1: value2);
```

_n will get value1 if codition evaluate to true else n will get value2_.
 
&nbsp;

### Assignment operator
```C
i=i+2
i+=2    //same effect as above
x*=y+2
x=x*(y+2) //same effect as above
```

applicable for  +,-,*,/,%,>>,<<,&,^,\| 


&nbsp;

### Comma Operator ( , )
***example:*** 
```C
int a=2, b=4;
```
- evaluated from left to right. returns the rightmost value. 
- this operator has the lowest precedence.
- its important to use ( ) when used in expression.

***example:*** 
```C
sum = ( a=2, b=4 , a+b) ; // sum = 6
```
- this operator is used in for loop also.

***example:*** 
```C
for(i=0, j=9; i!=j; i++, j--);
```
                   
</details>

&nbsp;

## Operator Precedency and Associativity
| Operator                  | Precedency | Associativity |
|:---:                      |:---:       |:---:          |
|```{ , } , ( , )```        |     1      |  Left - Right |
|```- , ! , ~ , ++ , --```  |     2      |  Right - Left |
|```* , / , %```            |     3      |  Left - Right |
|```+ , -```                |     4      |  Left - Right |
|```<< , >>```              |     5      |  Left - Right |
|```< , <= , > , >=```      |     6      |  Left - Right |
|```== , !=```              |     7      |  Left - Right |
|```&```                    |     8      |  Left - Right |
|```^```                    |     9      |  Left - Right |
|  ```\|```                 |     10     |  Left - Right |
|```&&```                   |     11     |  Left - Right |
|  ```\|\|```               |     12     |  Left - Right |
|```?:```                   |     13     |  Right - Left |
|```=```                    |     14     |  Right - Left |
|```,```                    |     15     |  Left - Right |

***note:*** *.* _dot operator has the highest precedency._


<br/>

***💡 tip:*** _operators can be redefined read <a href="">operator overloading</a>._



