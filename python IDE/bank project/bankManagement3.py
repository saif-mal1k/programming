import time as td
import datetime as dt

# "key":"Account_no","value":"object_of_customer"
dictionary_of_customers = {0: {'Account_no': 000}, 1: {'Account_no': 1, 'Name': "rafael", 'gender': "male",
                                                       'dob': "1212-12-21", 'age': 21, 'mobile_no': 2121122121, 'Balance ': 500, 'pincode': 1212}}


class customer(object):
    def __init__(self):
        self.Account_no = len(dictionary_of_customers)
        self.Name = input("enter your name: ".title())
        self.gender = input("Enter your gender: ")
        y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
        # input("Enter your dob (yyyy-mm-dd): ").split("-")
        self.dob = dt.date(int(y), int(m), int(d))
        self.age = int(input("Enter your age: "))
        self.mobile_no = int(input("Enter your mobile no: "))
        self.Balance = int(input("Deposit your initial amount: "))
        self.pincode = int(
            input("Please select any 4 digit numeric pin for your account: "))
        #code to save data
        print("Conguragtulations...!! Your account is successfully created.")
        print(
            f"\nYour account number is:\" {self.Account_no} \". \n\n***Please remember this as it is very important you will require it while doing any transaction.***")

    def existing_customer(Account_no):
        while True:
            print("*********************************************************************************************************")
            print("1. Withdrawl")           # done
            print("2. Deposit")             # done
            print("3. Balance Status")      # done
            print("4. Open New Account")
            print("5. See Details")         # done
            print("6. Update Details")
            print("7. Delete Account")
            print("8. Exit")                # done
            print("9. BACK")                # done

            ch = int(input("Enter your choice: "))
            if ch == 1:
                print(
                    "*********************************************************************************************************")
                customerDetails = dictionary_of_customers[Account_no]
                Balance = customerDetails['Balance ']
                print("Current Balance \t: ", Balance)
                withdrawl_ammount = int(
                    input("eter the amount you want to \"withdraw\": ".title()))
                (dictionary_of_customers[Account_no])[
                    'Balance '] -= withdrawl_ammount
                # for updated customer details
                customerDetails = dictionary_of_customers[Account_no]
                # fetching new balance
                Balance = customerDetails['Balance ']
                #print("DEAR CUSTOMER YOUR UPDATED BALANCE IS AS FOLLOWS:-")
                print("UPDATED Balance \t: ", Balance)
                #withdrawl()

            elif ch == 2:
                print(
                    "*********************************************************************************************************")
                customerDetails = dictionary_of_customers[Account_no]
                Balance = customerDetails['Balance ']
                print("Current Balance \t: ", Balance)
                deposited_ammount = int(
                    input("eter the amount you want to \"Deposit\": ".title()))
                (dictionary_of_customers[Account_no])[
                    'Balance '] += deposited_ammount
                # for updated customer details
                customerDetails = dictionary_of_customers[Account_no]
                # fetching new balance
                Balance = customerDetails['Balance ']
                print("UPDATED Balance \t: ", Balance)
                #deposit()

            elif ch == 3:
                print(
                    "*********************************************************************************************************")
                print("DEAR CUSTOMER YOUR BALANCE STATUS IS AS FOLLOWS:-")
                customerDetails = dictionary_of_customers[Account_no]
                Balance = customerDetails['Balance ']
                print("Balance \t: ", Balance)
                # balance status

            elif ch == 5:
                customerDetails = dictionary_of_customers[Account_no]
                customer.seeDetails(customerDetails)
            elif ch == 8:
                print("Thanks for using our service...")
                td.sleep(1)
                exit()
            elif ch == 9:
                break
            else:
                print("Please check your input...")

    def seeDetails(data):
        print("*********************************************************************************************************")
        print("DEAR CUSTOMER YOUR ACCOUNT DETAILS ARE AS FOLLOWS:-")
        for k, w in data.items():
    	    print(k, "\t:", w)


""" code that will be executed first """

while True:
    print("************* Main Menu *********************************************************************************")
    print("1. EXISTING CUSTOMER")          # done
    print("2. NEW CUSTOMER")               # done
    print("3. EXIT")                       # done
    ch = int(input("Enter your choice: "))
    if ch == 1:
        Account_no = int(input("enter your account no: ".title()))
        # calling method dedicated to exixting customers
        customer.existing_customer(Account_no)
    elif ch == 2:
        # creating a new object of customer class
        NewCustomer = customer()
        # adding new customer to dictionary
        dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__

    elif ch == 3:
        print("Thanks for using our service...")
        td.sleep(1)
        exit()
    else:
        print("Please check your input...")

""" end of programme """


""" 
            if ch == 1:
                self.withdrawl()
            elif ch == 2:
                self.deposit()
            elif ch == 3:
                self.balStatus()
            elif ch == 4:
                self.newAcc()"""


"""
            elif ch == 6:
                self.updateDetails()
            elif ch == 7:
                self.deleteAccount()
"""


"""
class customer:
    def __init__(self):
        print("Main Menu")
        print("1. EXISTING CUSTOMER")
        print("2. NEW CUSTOMER")
        print("3. EXIT")
        while True:
            ch = int(input("Enter your choice: "))
            if ch == 1:
                account_no = int(input("enter your account no:"))
            elif ch == 2:
                self.deposit()
            elif ch == 3:
                print("Thanks for using our service.")
                sleep(2)
                exit()
            else:
                print("Please check your input...")


class NEW_CUSTOMER:
    def __init__(self):
        print("Main Menu")
        print("1. Withdrawl")
        print("2. Deposit")
        print("3. Balance Status")
        print("4. Open New Account")
        print("5. See Details")
        print("6. Update Details")
        print("7. Delete Account")
        print("8. Exit")

    def create_customer(self):
        dictionaryOfcustomers = {"key":"account_No","value":"object_of_customer"}
        
        dictionary[self.account_no]=customer


"""
