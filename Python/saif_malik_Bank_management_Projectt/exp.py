import time as td
import datetime as dt
import os
import ast

#defining clear() attrib


def clear():
    try:
        return os.system('cls')  # cls on win clear on linux
    except:
        return os.system('clear')  # cls on win clear on linux
# done definition of clear function


# "key":"Account_no","value":"object_of_customer"
dictionary_of_customers = {}

# start reading dictionary from text file
file = open("customerData.txt", "r")
# everthing from text file will be fetched to contents in form of string
contents = file.read()
file.close()
# end text file reading done

# i created this function to convert my string( nested dictionary ) that i get from text file,  into dictionary


def string_dict_to_dict(str):
    #initialization
    key = ''
    keyFlag = 'False'
    i = 1
    value = ''
    pair = "False"
    while i < len(str):
        if str[i] != ":" and keyFlag == "False":
            key += str[i]
            i += 1
        elif (str[i] == ":" or str[i] == " ") and value == "":
            keyFlag = "True"
            i += 1
            continue
        if str[i] == "{" and keyFlag == "True":
            value += str[i]
            i += 1
            continue
        elif (str[i] == ":" or str[i] == " ") and keyFlag == "True":
            value += str[i]
            i += 1
            continue
        elif (keyFlag == "True" and str[i] != "}") and pair != "True":
            value += str[i]
            i += 1
        elif str[i] == "}":
            value += str[i]
            pair = "True"
            i += 1
            continue
        if pair == "True":
            Account_no = key
            customer_data = ast.literal_eval(value)
            dictionary_of_customers[int(Account_no)] = customer_data
        if pair == "True" and str[i] == ",":
            key = ''
            keyFlag = 'False'
            value = ''
            pair = "False"
            i += 1
# end of customer data reading function


# now we convert the data that we get from text file, into dictionary
string_dict_to_dict(contents)


def seeDetails(data):
    print("*********************************************************************************************************")
    print("DEAR CUSTOMER YOUR ACCOUNT DETAILS ARE AS FOLLOWS:-")
    for k, w in data.items():
	    print(k, "\t:", w)

while True:
    Account_no= int(input("enter the account no:"))
    if (Account_no > 4):
        break
    customerDetails = dictionary_of_customers[Account_no]
    seeDetails(customerDetails)

input()