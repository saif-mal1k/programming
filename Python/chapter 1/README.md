# Data types


> "very important: every input in python is string by default, which must be suitably type casted (explicitly)."
> "since, Python in **dynamically typed**. it is possible to define a variable without datatype."


## input:
the input value will always be string , which can be type casted into desired data type.
ex: variable = input (“enter the value:”)


## output:
print(name, ”is”, age, ”old”)
print(name + “is” +str(age) + “old”)


### using place holder:
print("{0} is {1} yrs old".format("raju",23))
print("Validation MAE: {:,.0f}".format(29652.931506849316))	   //>>> 29,653
print(‘%s is %dyrs %.2fsec old,%(‘raju’),%(24),%(13.33))
print(f“ Hello {user_name}, Good{time_gretting}”) 



more: -
	print(“my”, end=“”)
	print(“self”)
output:	myself
	print(“cat”, “dog”, “parrot”,sep= “,” )
output:	cat, dog, parrot

# best way to swap two no:       a , b =  b , a




## Operators in Python:
addition			+
subtraction			-
multiplication			*
division 			/
modulus				%
exponentiation			**
floor division			//

> note: “ / will result division in float, // is used for rounded result or for int type”.
	“ increment and decrement operators aren’t allowed”




