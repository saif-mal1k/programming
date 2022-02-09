#this functions for the translator

import e2gdata


#this function is to improve dataset for translator
def getdata():
    i=len(e2g)
    print("type 000 anytime (inside key and value also) to exit dataset:")
    while 'true':
        key=str(input(f"key {i}  :"))
        value=str(input(f"value {i}  :"))
        if key=='000' and value=='000':
            break
        else:
            e2g['key']='value'
        i+=1

        
#this function is to input text that needs to be converted
def entry():
  str=input("enter the text in english:")
  words=str.split(" ")
  return words


#this function is to print the translated message
def priint(words):
  translation=""
  for key in words:
    if key in e2gdata.e2g:
      translation+=e2gdata.e2g[key]+" "
  return translation


#this is the translator
def translator():
    words=entry()
    output=priint(words)
    print("\nthe text in german will be:"+output)
