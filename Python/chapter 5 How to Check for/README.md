# how to check for:-
 
### type of object / class:
	type(x)

### size of object in bits:
	x.bit_length() 
 
### id / address of object:
	id(x)
 
 
<br/>
 
 
### alpha:
	x.isalpha()

### Title Case:
	x.istitle() 

### digit:
x.isdigit() or x.isdecimal()


### alphanumeric:
	x.isalnum() 

### x.startswith(strarg):


### x.endswith(strarg):



<br/>

  
## punctuation:
```python
import string
x = string.punctuation		# now x will have all special char's
for i in z:
	if i in x:
		print(i,"is a punctuation")
```


<br/>


## methods:
```python
x.split(‘,’)
b = x.copy()			# since, b=x will only set id of x to b. hence necessary.
word.endswith('ing') 		# word is a string, returns true if string ends with…
```


<br/>


## how to round a floating point number.
<b>ex:</b> 
```
>>> round (1117.232131, 2)		# positive digit
1117.23
```

<b>ex:</b> 
```
>>> round (1117.232131, -2)		# with ndigit
1100.0
```




