str=input("enter the string:")
str1=str.lower()
leng=len(str1)
val="true"
while leng>1 and leng%2==0:
    #print(leng),#print(str1)
    if str1[0:1]==str1[leng-1:leng] and leng%2==0:
        str1=str1[1:leng-1]
    else:
        val="false"
        print("not a palindromme")
        break
    leng=len(str1)
if val=="true":
    print("string is a palindromme")
