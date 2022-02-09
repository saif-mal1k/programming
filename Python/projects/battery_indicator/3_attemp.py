# python script showing battery details
import psutil

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
    print("Battery percentage : ", battery.percent)
    print("Power plugged in : ", battery.power_plugged)

#battery details
battery_status()

# converting seconds to hh:mm:ss
#print("Battery left : ", convertTime(battery.secsleft))

#initializing text to speech engine
engine = pyttsx3.init()

#alert if percentage above 90 and still charging
if (battery.power_plugged=='true' and battery.percent >= 90):
    text="you might need to unplug the charger"
elif (battery.power_plugged == 'true' and battery.percent >= 93):
    text = "please unplug the charger"
else:
    text="don't worry, i'll remind you when to unplug. "
    engine.setProperty("rate",170)

#speech output
engine.say(text)
engine.runAndWait()

#defining clear() attrib
clear = lambda: os.system('cls')    #cls on win clear on linux

if (battery.power_plugged == 'true' and battery.percent <= 90):
    clear()        
