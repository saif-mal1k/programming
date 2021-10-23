import time as td
import datetime as dt

dictionary_of_customers = {"key":"Account_no","value":"object_of_customer"}

class customer(object):
    def __init__(self):
        Account_no = len(dictionary_of_customers)
        Name = input("enter your name: ".title())
        gender = input("Enter your gender: ")
        y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
        dob = dt.date(int(y), int(m), int(d))
        age = int(input("Enter your age: "))
        mob = int(input("Enter your mobile no: "))
        bal = int(input("Deposit your initial amount: "))
        pin = int(input("Please select any 4 digit numeric pin for your account: "))
        #code to save data
        print("Conguragtulations...!! Your account is successfully created.")
        print(f"\nYour account number is:\" {Account_no} \". \n\n***Please remember this as it is very important you will require it while doing any transaction.***")

    def existing_customer(Account_no):
        print("1. Withdrawl")
        print("2. Deposit")
        print("3. Balance Status")
        print("4. Open New Account")
        print("5. See Details")
        print("6. Update Details")
        print("7. Delete Account")
        print("8. Exit")
        while True:
            ch = int(input("Enter your choice: "))
            if ch == 1:
                self.withdrawl()
            elif ch == 2:
                self.deposit()
            elif ch == 3:
                self.balStatus()
            elif ch == 4:
                self.newAcc()
            elif ch == 5:
                self.seeDetails()
            elif ch == 6:
                self.updateDetails()
            elif ch == 7:
                self.deleteAccount()
            elif ch == 8:
                print("Thanks for using our service.")
                sleep(2)
                exit()
            else:
                print("Please check your input...")




print("1. EXISTING CUSTOMER")
print("2. NEW CUSTOMER")
print("3. EXIT")
while True:
    ch = int(input("Enter your choice: "))
    if ch == 1:
        Account_no = int(input("enter your account no: ".title()))
        Account_no.existing_customer()
    elif ch == 2:
        NewCustomer = customer()    # creating a new object of customer class
    elif ch == 3:
        print("Thanks for using our service.")
        td.sleep(1)
        exit()
    else:
        print("Please check your input...")















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
