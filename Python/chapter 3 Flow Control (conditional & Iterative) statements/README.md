# conditional statements:
<table>
<tr>
<td width=300>
  
**syntax:**
```python
    if <condition>:                 
      statement         
    elif <condition>:               
      statement         
    else:               
      statement         
```
</td>
<td width=300>
  
**example:**
```python
if  ‘cat’ in pets:
  print("cat in pets")
elif  ‘monkey’ not in pets:
  print("no monkey in pets")
else:
  print("no cat, no monkey")
```
</td>
</tr>
</table>  


<br/>

### do python have ternary operator ?
**note:** _python don’t have ternary operator (conditional expression):_ better alternative
```python
  x = a if (a>b) else b		// finding greater of two numbers
```
  
<br/>

# Iterative Statements:

## 1. for loop
<table>
<tr>
<td width=300>
  
**syntax:**
```python
  for ele in <iterable>:
    statement
```
</td>
<td width=300>
  
**example:**
```python
for x in range(1, 10, 2):
  print(x)
```
</td>
</tr>
</table>

<br/>


### the ``in`` keyword
*The in keyword is **used to check if a value is present in a sequence (list, range, string etc.) ``using if, elif``**.
<br/>The in keyword is also **used to iterate through a sequence in a ``for loop``.***

<br/>

### _``iterables``_ difference between range , enumerate , zip
```python
#example: 
  for i in range(0, 5):
        #range(start,stop,step)
  
#example:
  for i, s in enumerate(listname): 
        #here i is the index and s is the value in datatype

#example: 
  for i, s in enumerate(listname, start=1):  
        #start will make indexing from 1keys
        
#example: 
  for n, m in zip(u, v)   
        #here u and v are two separate datatypes they may or maynot be same
        
#example:
  for k, w in dic.items()
        #here k and w are keys and values 
```

<br/>

### List Comprehension using for loop
```python
l1=[x for x in range(1,11) if x%2==0]		# list comprehension
l2=[x for x in range(1,11) if x%2!=0]		# list comprehension
l3=l1+l2
l3.sort()
l3.reverse()
print ("List of all numbers in reverse order is:", l3)
```

<br/>

## 2. while loop
<table>
<tr>
<td width=300>  

**syntax:**
```python
while condition:
	statement
```
</td>
<td width=300>
  
**example:**
```python
m,n = 0,0
while n!=-1:
    n=int(input("Please input next number\n")) 
    print("maximum is:", (m if (m>n) else n) )
```
</td>
</tr>
</table>

💡 ***Tip:*** _python does not have ``do while`` loop._
  
  

<br/>

## break and continue:
### break       ``control outside of loop``
```python
for var in sequence:
	if var == ‘d’:
		break			# control outside for loop
		statement N
	statement N
statement Y
```

### continue    ``skip the remaining body and continue from next interation``
```python
for var in sequence:
	if var == ‘d’:
		continue		# skip and control to for
		statement N
	statement N
statement N
```



