 **very important:** "every input in python is string by default, which must be suitably type casted (explicitly)."
> _"since, Python in **dynamically typed**. it is possible to define a variable without datatype."_

<br/>

## input:
the input value will always be string , which can be type casted into desired data type.
**example:** 
```python
variable = input (“enter the value:”)
```

<br/>

## output:
```python
print(name, ”is”, age, ”old”)
print(name + “is” +str(age) + “old”)
```

### using place holder:
```python
print("{0} is {1} yrs old".format("raju",23))
print("Validation MAE: {:,.0f}".format(29652.931506849316))	   #>>> 29,653
print(‘%s is %dyrs %.2fsec old,%(‘raju’),%(24),%(13.33))
print(f“ Hello {user_name}, Good{time_gretting}”) 
```


**more: -**
```python
	print(“my”, end=“”)
	print(“self”)
```
**output:**
	myself
```python
	print(“cat”, “dog”, “parrot”,sep= “,” )
```
**output:**
	cat, dog, parrot

<br/>





