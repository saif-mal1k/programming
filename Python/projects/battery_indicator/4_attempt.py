# python script showing battery details
import psutil

# for sleep method
import  time as td

#operating system utility
import os

#offline text to speech library
import pyttsx3
  
# function returning time in hh:mm:ss
"""def convertTime(seconds):
    minutes, seconds = divmod(seconds, 60)
    hours, minutes = divmod(minutes, 60)
    return "%d:%02d:%02d" % (hours, minutes, seconds)
"""
# returns a tuple
battery = psutil.sensors_battery()

#function printing battery status
def  battery_status():  
    # returns a tuple
    # had to fetch updated data again and again
    battery = psutil.sensors_battery()
    print("Battery percentage : ", battery.percent)
    print("Power plugged in : ", battery.power_plugged)
#    charging_status = battery.power_plugged
#    print("Power plugged in type : ", type(battery.power_plugged))

#battery details
battery_status()

# converting seconds to hh:mm:ss
#print("Battery left : ", convertTime(battery.secsleft))

#initializing text to speech engine
engine = pyttsx3.init()

# setting text to be ouputted
if battery.power_plugged == True:
    text="okay, i'll remind you when to unplug. "
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
flag = 0

while (psutil.sensors_battery()).power_plugged :       # to get updated status returns true in bool
    
#    td.sleep(1) # 1 sec wait before updating battery status

#    if (battery.power_plugged == True ):
    clear()     # clear screen
    text=""     # clear text

#    td.sleep(1) # 1 sec wait before updating battery status
    
    #battery details
    battery_status()
    
#    td.sleep(1) # 1 sec wait before alert
    
    #alert if percentage above 90 and still charging
    if (battery.percent >= 90 and flag == 0):
        text = "you might need to unplug the charger"
        flag = 1
    elif (battery.power_plugged == True and battery.percent >= 93):
        text = "attention please, unplug the charger"
        if rate < 250:
            rate += 10
        engine.setProperty("rate", rate)
    print(text)
    engine.say(text)
    engine.runAndWait()

#    print("\n")
    td.sleep(1) # sleep 1 sec before settings
    print("...")
    td.sleep(1)  # sleep 1 sec before settings
#    reps += 2
