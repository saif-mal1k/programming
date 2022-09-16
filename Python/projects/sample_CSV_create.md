

### code
```py

import random

file1 = open("sample.txt", "w")

for i in range(0,40000):
	a = random.randint(0,10)
	file1.write("rate"+str(i)+","+str(i)+"\n")

file1.close()


"""
rate0,0
rate1,1
rate2,2
rate3,3
rate4,4
"""

```

