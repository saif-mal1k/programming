import pyttsx3

#initialize engine
engine = pyttsx3.init()

text="welcome to PYTTSX3"
print(text)

#speech output
engine.say(text)
engine.runAndWait()

#checking the rate and decreasing it
rate=engine.getProperty("rate")
engine.setProperty("rate",150)

#speech output
engine.say(text)
engine.runAndWait()

#checking the voice
voice=engine.getProperty("voices")