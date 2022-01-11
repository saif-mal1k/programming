import ast

dictionary_of_customers = {0:{"Account_no":0}}

file = open("customerData.txt", "r")
contents = file.read()
file.close()

# i created this function to convert my string( nested dictionary )  into dictionary
def string_dict_to_dict(str):

    #initialization
    key = ''
    keyFlag = 'False'
    i = 1
    value = ''
    pair = "False"

    while i < len(str)-1:
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

string_dict_to_dict(contents)

print(dictionary_of_customers)

print(type(dictionary_of_customers))

input()
