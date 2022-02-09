import time
import os
import winsound

try:
	while True:	
		clear = lambda: os.system('cls')   
		clear()
		time.sleep(1)
		print("clock:",time.time())
		os.system(beeps)
		time.sleep(1)

