# python script showing battery details
import psutil

# for sleep method
import  time as td

#operating system utility
import os

#offline text to speech library
import pyttsx3


#function printing battery status
def  battery_status():  
    # returns a tuple
    # had to fetch updated data again and again
    battery = psutil.sensors_battery()
    print("Battery percentage : ", battery.percent)
    print("Power plugged in : ", battery.power_plugged)

#battery details
battery_status()

#initializing text to speech engine
engine = pyttsx3.init()

# setting text to be ouputted
if (psutil.sensors_battery()).power_plugged == True:
    text = "okay, i'll remind you when to unplug.!"
else:
    text = " charger not plugged, you need to plug in , to get support. "
rate = 170
engine.setProperty("rate",rate)

#speech output
print(text)
engine.say(text)
engine.runAndWait()

#defining clear() attrib
clear = lambda: os.system('cls')    #cls on win clear on linux

flag = 1
while (psutil.sensors_battery()).power_plugged :       # to get real time status returns true in bool

#    if (battery.power_plugged == True ):
    clear()     # clear screen
    text=""     # clear text
    
    #battery details
    battery_status()
    
    #alert if percentage above 90 and still charging
    if ((psutil.sensors_battery()).percent >= 90 and flag < 3):
        text = "you might need to unplug the charger"
        flag += 1
    elif ((psutil.sensors_battery()).power_plugged == True and psutil.sensors_battery().percent >= 93):
        if flag%2 == 0:
            text = "attention please, unplug the charger"
            flag += 1
        else:
            text = "kurpaya charjar hata o !"
            flag += 1
    if rate < 220:
        rate += 10 
        engine.setProperty("rate",rate) 

    print(text)
    engine.say(text)
    engine.runAndWait()

#    print("\n")
    td.sleep(1) # sleep 1 sec before settings
    print("...")
    td.sleep(1)  # sleep 1 sec before settings
#    reps += 2


clear()
battery_status()
print("Exiting...")
td.sleep(2)
