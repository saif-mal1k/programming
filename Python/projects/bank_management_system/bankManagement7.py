import time as td
#import datetime as dt
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
contents = file.read()          # everthing from text file will be fetched to contents in form of string
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
    while i < len(str) - 1 :        # cuz we have to skip first "{" and last "}"
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

string_dict_to_dict(contents)       # now we convert the data that we get from text file, into dictionary

class customer(object):
    def __init__(self):
        self.Account_no = len(dictionary_of_customers)
        self.Name = input("enter your name: ".title())
        self.gender = input("Enter your gender: ")
        self.dob = input("Enter your dob (dd-mm-yyyy): ")
        self.age = int(input("Enter your age: "))
        self.mobile_no = int(input("Enter your mobile no: "))
        self.Balance = int(input("Deposit your initial amount: "))
        self.pincode = int(input("Please select any 4 digit numeric pin for your account: "))
        #code to save data
        print("\nConguragtulations...!! Your account is successfully created.")
        print(f"\nYour account number is: \" {self.Account_no} \".\t\t <------------------ REMEMBER THIS ---<")

    def existing_customer(Account_no):
        clear()
        while True:
            print("*********************************************************************************************************")
            print("1. Withdrawl")           # done
            print("2. Deposit")             # done
            print("3. Balance Status")      # done
            print("4. See Details")         # done
            print("5. Update Details")      # done
            print("6. Open New Account")    # done
            print("7. Delete Account")      # done
            print("8. Exit")                # done
            print("9. BACK")                # done

            ch = int(input("Enter your choice: "))
            if ch == 1:
                customer.withdrawl(Account_no)
                print("\n\n\t\"press enter to continue\"")
                input()

            elif ch == 2:
                customer.deposit(Account_no)
                print("\n\n\t\"press enter to continue\"")
                input()


            elif ch == 3:
                customer.balance(Account_no)
                print("\n\n\t\"press enter to continue\"")
                input()

            elif ch == 4:
                customerDetails = dictionary_of_customers[Account_no]
                customer.seeDetails(customerDetails)
                print("\n\n\t\"press enter to continue\"")
                input()

            elif ch == 5:
                customerDetails = dictionary_of_customers[Account_no]
                customer.updateDetails(customerDetails)

            elif ch == 6:
                print("*********************************************************************************************************")
                # creating a new object of customer class
                NewCustomer = customer()
                # adding new customer to dictionary
                dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__
                f = open("customerData.txt", "w")
                f.write(str(dictionary_of_customers))
                f.close()
                print("\n\n\t\"press enter to continue\"")
                input()
                break
                # ^ openNewAccount

            elif ch == 7:
                print("*********************************************************************************************************")
                print("Respected Sir/mam ", (dictionary_of_customers[Account_no])['Name'], "\n are you sure want to delete your account:", (dictionary_of_customers[Account_no])['Account_no'], "\nplease type \" YES \" to confirm: ", end="")
                confirmation = input()
                if confirmation.lower() == "yes":
                    print("\nyour account: ", dictionary_of_customers.pop(Account_no), "is deleted")
                    break
                print("\n\n\t\"press enter to continue\"")
                input()
                # ^ to deleteAccount

            elif ch == 8:
                print("\nThanks for using our service...")
                td.sleep(1)
                f = open("customerData.txt", "w")
                f.write(str(dictionary_of_customers))
                f.close()
                exit()

            elif ch == 9:
                clear()
                break
            else:
                print("\nPlease check your input...")
            clear()

    def withdrawl(Account_no):
        print("*********************************************************************************************************")
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("Current Balance \t: ", Balance)
        withdrawl_ammount = int(input("enter the amount you want to \"withdraw\": ".title()))
        (dictionary_of_customers[Account_no])['Balance'] -= withdrawl_ammount      # for updated customer details
        # fetching new balance
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("UPDATED Balance \t: ", Balance)

    def deposit(Account_no):
        print("*********************************************************************************************************")
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("Current Balance \t: ", Balance)
        deposited_ammount = int(input("enter the amount you want to \"Deposit\": ".title()))
        (dictionary_of_customers[Account_no])['Balance'] += deposited_ammount      # for updated customer details
        # fetching new balance
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("UPDATED Balance \t: ", Balance)

    def balance(Account_no):
        print("*********************************************************************************************************")
        print("DEAR CUSTOMER YOUR BALANCE STATUS IS AS FOLLOWS:-")
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("Balance \t: ", Balance)

    def seeDetails(data):
        print("*********************************************************************************************************")
        print("DEAR CUSTOMER YOUR ACCOUNT DETAILS ARE AS FOLLOWS:-")
        for k, w in data.items():
    	    print(k, "\t:", w)

    def updateDetails(data):
        while True:
            clear()
            customer.seeDetails(data)
            print("\n what would you like to change: ".title())
            #print("Main Menu")
            print("1. NAME")
            print("2. gender")
            print("3. DOB")
            print("4. age")
            print("5. mobile no")
            print("6. Done show my updated details".title())
            print("7. Exit")
            print("8. BACK")
            ch = int(input("Enter your choice: "))
            if ch == 1:
                (dictionary_of_customers[Account_no])['Name'] = input("enter your name: ".title())

            elif ch == 2:
                (dictionary_of_customers[Account_no])['gender'] = input("Enter your gender: ".title())
            
            elif ch == 3:
                (dictionary_of_customers[Account_no])['dob'] = input("Enter your dob (dd-mm-yyyy): ") 

            elif ch == 4:
                (dictionary_of_customers[Account_no])['age'] = int(input("Enter your age: ".title()))
            
            elif ch == 5:
                (dictionary_of_customers[Account_no])['mobile_no'] = int(input("Enter your mobile no: ".title()))
            
            elif ch == 6:
                clear()
                customer.seeDetails(dictionary_of_customers[Account_no])
                print("\n\n\t\"press enter to continue\"")
                input()
            elif ch == 7:
                print("\nThanks for using our service...")
                td.sleep(1)
                f = open("customerData.txt", "w")
                f.write(str(dictionary_of_customers))
                f.close()
                exit()
            elif ch == 8:
                clear()
                break
            else:
                print("\nPlease check your input...")


# end of customer class               

""" code that will be executed first """

while True:
    clear()
    print("\n************* Main Menu *********************************************************************************")
    print("1. EXISTING CUSTOMER")          # done
    print("2. NEW CUSTOMER")               # done
    print("3. EXIT")                       # done
    ch = int(input("Enter your choice: "))
    if ch == 1:
        Account_no = int(input("enter your account no: ".title()))
        if Account_no in dictionary_of_customers.keys():
            # calling method dedicated to exixting customers
            customer.existing_customer(Account_no)
        else:
            print("   \n***Account not Found****\t\t you should chose \"2.NEW CUSTOMER\" option to create one")
            print("\n\n\t\"press enter to continue\"")
            input()

    elif ch == 2:
        print("*********************************************************************************************************")
        # creating a new object of customer class
        NewCustomer = customer()
        # adding new customer to dictionary
        dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__
        f = open("customerData.txt", "w")
        f.write(str(dictionary_of_customers))
        f.close()
        print("\n\n\t\"press enter to continue\"")
        input()

    elif ch == 3:
        print("\nThanks for using our service...")
        td.sleep(1)
        f = open("customerData.txt", "w")
        f.write(str(dictionary_of_customers))
        f.close()
        exit()

    else:
        print("Please check your input...")

""" end of programme """

