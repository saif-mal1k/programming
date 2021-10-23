import time as td
import datetime as dt
import os 

#defining clear() attrib
def clear(): 
    try:
        return os.system('cls')  # cls on win clear on linux
    except:
        return os.system('clear')  # cls on win clear on linux

# "key":"Account_no","value":"object_of_customer"
dictionary_of_customers = {0: {'Account_no': 0, 'Name': "saif", 'gender': "male", 'dob': "1212-12-21", 'age': 21, 'mobile_no': 2121122121, 'Balance': 2500, 'pincode': 2377},
                           1: {'Account_no': 1, 'Name': "saifi", 'gender': "female", 'dob': "1212-12-21", 'age': 21, 'mobile_no': 2367723232, 'Balance': 1500, 'pincode': 1212}}

f = open("customerData.txt", "w")
f.write(str(dictionary_of_customers))
f.close()


class customer(object):
    def __init__(self):
        self.Account_no = len(dictionary_of_customers)
        self.Name = input("enter your name: ".title())
        self.gender = input("Enter your gender: ")
        y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
        self.dob = dt.date(int(y), int(m), int(d))
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
                y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
                (dictionary_of_customers[Account_no])['dob'] = dt.date(int(y), int(m), int(d))

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
            print("\n***Account not Found****\n\n please chose \"2.NEW CUSTOMER\" option")

    elif ch == 2:
        print("*********************************************************************************************************")
        # creating a new object of customer class
        NewCustomer = customer()
        # adding new customer to dictionary
        dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__

        print("\n\n\t\"press enter to continue\"")
        input()

    elif ch == 3:
        print("Thanks for using our service...")
        td.sleep(1)
        f = open("customerData.txt", "w")
        f.write(str(dictionary_of_customers))
        f.close()
        exit()

    else:
        print("Please check your input...")

""" end of programme """

