str=input("enter the string:")
print("you typed:"+str+"\n"+"it's length is:",len(str))
if(len(str)%2==0):#for string of even length
    str1=str[0:len(str)//2]
    print("firts half:"+str1)
    str2=''
    lenn=len(str)
    while(lenn-1>len(str)//2-1):
        str2=str2+str[lenn-1:lenn]#adds the last character to string str2
        lenn-=1
    print("second half from back:"+str2)
    if(str1==str2):
        print("****congratulations string is a palindromme****")
    else:
        print("****sorry string is not apalindromme****")
else:
    str1=str[0:(len(str)//2)+1]
    print("first half:"+str1)
    str2=''
    lenn=len(str)
    while(lenn-1>len(str)//2-1):#length of str is 7(assume) but the last element is at pos 6
        str2=str2+str[lenn-1:lenn]#adds the last character to string str2
        lenn-=1
    print("second half from back:"+str2)
    if(str1==str2):
        print("****congratulations string is a palindromme:****")
    else:
        print("****sorry string is not apalindromme****")




#limitation
"""
enter the string:DogGod
you typed:DogGod
it's length is: 6
firts half:Dog
second half from back:doG
****sorry string is not apalindromme****
"""#""" is used for multiline string and not for multi line comment
