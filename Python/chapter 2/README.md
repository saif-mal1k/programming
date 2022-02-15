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




