


### code
```py
from os import system

from time import sleep

import subprocess

import random
n = random.randint(0,10)
print(n)

i=0
while i<10000:
	system("powershell -C Start-Process chrome.exe -ArgumentList @( '-incognito', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process chrome.exe -ArgumentList @( '-incognito', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process chrome.exe -ArgumentList @( '-incognito', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process chrome.exe -ArgumentList @( '-incognito', 'https://youtu.be/dWEFXlP0cEI' )")
	sleep(2)
	system("powershell -C Start-Process msedge.exe -ArgumentList @( '-inPrivate', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process msedge.exe -ArgumentList @( '-inPrivate', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process msedge.exe -ArgumentList @( '-inPrivate', 'https://youtu.be/dWEFXlP0cEI' )")
	system("powershell -C Start-Process msedge.exe -ArgumentList @( '-inPrivate', 'https://youtu.be/dWEFXlP0cEI' )")	
	sleep(60)
	subprocess.call("taskkill /IM msedge.exe")
	sleep(2)
	subprocess.call("taskkill /IM chrome.exe")
	i+=1

```
