## Operators in Python:
<table >
<tr>
<td width=200 >
	
**addition**			
</td>
<td width=200 align=center>
+
</td>
</tr>
<tr>
<td>
	
**subtraction**
</td>
<td align=center>
-
</td>
</tr>
<tr>
<td>
	
**multiplication**		
</td>
<td align=center>
*
</td>
</tr>
<tr>
<td>
	
**division**			
</td>
<td align=center>
/
</td>
</tr>
<tr>
<td>
	
**modulus**
</td>
<td align=center>
%
</td>
</tr>
<tr>
<td>
	
**exponentiation**
</td>
<td align=center>
**
</td>
</tr>
<tr>
<td>
	
**floor division**
</td>
<td align=center>
//
</td>
</tr>
</table>

>  _“ **``/``** will result division in float, **``//``** is used for rounded result or for int type”._

**note:** “ increment and decrement operators aren’t allowed”

<br/>

<details>
<summary><b> 1. assignment operator  ``=``  :</b> </summary>
<p>
	
**example:**
```python
x=y
```
> **note:** ``x = y``   _"won’t copy y to x, it mean id(x) = id(y) , but if you modify x it will create a copy and modify to that location."_
<br> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; _"we can use it as ``x = y.copy()`` since, x=y will only set id of y to x . &nbsp; **copy()** create a copy of y to x._

<br/>
	
<b><em> augmented assignment operator: </b></em>
<p>
<table>
<tr>
<td width=200 align=center>
	+=
</td>
</tr>
<tr>
<td align=center>
	-=
</td>
</tr>
<tr>
<td align=center>
	*=
</td>
<tr>
<td align=center>
	/=
</td>
</tr>
<tr>
<td align=center>
	%=
</td>
</tr>
</table>
</p>
<br/>
</details>
	

<details>
	<summary> <b><em> 2. comparison operator: </em></b> </summary>
<p>

> "returns either True or False based on the condition applied to."
<table>
<tr>
<td width=200 align="center">
	>
</td>
</tr>
<tr>
<td align="center">
	<
</td>
</tr>
<tr>
<td align="center">
	==
</td>
</tr>
<tr>
<td align="center">
	!=
</td>
</tr>
<tr>
<td align="center">
	>=
</td>
</tr>
<tr>
<td align="center">
	<=
</td>
</tr>
</table>
</p>	
<br/>
</details>	

<details>
	<summary><b><em>  3. logical operator: </em></b></summary>
<p>
	
<table>
<tr>
<td>
	
**Operators**
</td>
<td>
	
**Description**	
</td>
</tr>
<tr>
<td>
	
**and**
</td>
<td>

</td>
</tr>
<tr>
<td>
	
**or**
</td>
<td>

</td>
</tr>
<tr>
<td>
	
**not**
</td>
<td>

</td>
</tr>
</table>
	
<br> **example:**
```python	
not(a)
```
</p>
<br/>
</details>

<br/>


## Operator Precedence table
<details>
<summary><b><em> cick to view table </b></em> </summary>
<p>
	
<table align=center>
<tbody>
<tr>
<td width="400">
<p><strong>Operator</strong></p>
</td>
<td width="500">
<p><strong>Description</strong></p>
</td>
</tr>
<tr>
<td >
<p>(expressions...),[expressions...], {key: value...}, {expressions...}</p>
</td>
<td >
<p>Binding or parenthesized expression, list display, dictionary display, set display</p>
</td>
</tr>
<tr>
<td >
<p>x[index], x[index:index], x(arguments...), x.attribute</p>
</td>
<td >
<p>Subscription, slicing, call, attribute reference</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#await">await</a> x</p>
</td>
<td >
<p>Await expression</p>
</td>
</tr>
<tr>
<td >
<p>**</p>
</td>
<td >
<p>Exponentiation</p>
</td>
</tr>
<tr>
<td >
<p>+x, -x, ~x</p>
</td>
<td >
<p>Positive, negative, bitwise NOT</p>
</td>
</tr>
<tr>
<td >
<p>*, @, /, //, %</p>
</td>
<td >
<p>Multiplication, matrix multiplication, division, floor division, remainder</p>
</td>
</tr>
<tr>
<td >
<p>+, -</p>
</td>
<td >
<p>Addition and subtraction</p>
</td>
</tr>
<tr>
<td >
<p>&lt;&lt;, &gt;&gt;</p>
</td>
<td >
<p>Shifts</p>
</td>
</tr>
<tr>
<td >
<p>&amp;</p>
</td>
<td >
<p>Bitwise AND</p>
</td>
</tr>
<tr>
<td >
<p>^</p>
</td>
<td >
<p>Bitwise XOR</p>
</td>
</tr>
<tr>
<td >
<p>|</p>
</td>
<td >
<p>Bitwise OR</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#in">in</a>, <a href="https://docs.python.org/3/reference/expressions.html#not-in">not</a> <a href="https://docs.python.org/3/reference/expressions.html#not-in">in</a>, <a href="https://docs.python.org/3/reference/expressions.html#is">is</a>, <a href="https://docs.python.org/3/reference/expressions.html#is-not">is</a> <a href="https://docs.python.org/3/reference/expressions.html#is-not">not</a>, &lt;, &lt;=, &gt;, &gt;=, !=, ==</p>
</td>
<td >
<p>Comparisons, including membership tests and identity tests</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#not">not</a> x</p>
</td>
<td >
<p>Boolean NOT</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#and">and</a></p>
</td>
<td >
<p>Boolean AND</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#or">or</a></p>
</td>
<td >
<p>Boolean OR</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#if-expr">if</a> &ndash; else</p>
</td>
<td >
<p>Conditional expression</p>
</td>
</tr>
<tr>
<td >
<p><a href="https://docs.python.org/3/reference/expressions.html#lambda">lambda</a></p>
</td>
<td >
<p>Lambda expression</p>
</td>
</tr>
<tr>
<td >
<p>:=</p>
</td>
<td >
<p>Assignment expression</p>
</td>
</tr>
</tbody>
</table>
<strong><em>Note:</em></strong> <strong>( element1 </strong><strong>^</strong><strong> element2 ) </strong><em>means either element1 or element2 but not both.</em></p>
</p>
<br/>
</details>

> ***Note:*** _"Python evaluates expressions from left to right. while assignment is evaluated, right to left."_
<br/>




## some awesome program:

### best way to swap two numbers:       
```python
a , b =  b , a
```

### representation of complex number:
```python
x = 12
print(x.imag)
```
> _"x is a real number, so its imaginary part is 0."_

```python
c = 12 + 3j
print(c.imag)		# output 3
```

<br/>




