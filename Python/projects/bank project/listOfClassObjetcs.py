import time as td
import datetime as dt

# "key":"Account_no","value":"object_of_customer"
dictionary_of_customers = {0: {'Account_no': 0, 'Name':"saif" , 'gender':"male" , 'dob':"1212-12-21" , 'age':21 , 'mobile_no': 2121122121, 'Balance': 2500, 'pincode': 2377},
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
        self.dob =  dt.date(int(y), int(m), int(d)) #input("Enter your dob (yyyy-mm-dd): ").split("-")
        self.age = int(input("Enter your age: "))
        self.mobile_no = int(input("Enter your mobile no: "))
        self.Balance = int(input("Deposit your initial amount: "))
        self.pincode = int(input("Please select any 4 digit numeric pin for your account: "))
        #code to save data
        print("\nConguragtulations...!! Your account is successfully created.")
        print(f"\nYour account number is: \" {self.Account_no} \". \n\n***Please remember this as it is very important you will require it while doing any transaction.***")
        #print("customer.existing_customer(self.Account_no)", self.Account_no)
        
        #customer.existing_customer(self.Account_no)

    def existing_customer(Account_no):
        #print("def existing_customer(Account_no):", Account_no)
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

            elif ch == 2:
                customer.deposit(Account_no)

            elif ch == 3:
                customer.balance(Account_no)

            elif ch == 4:
                customerDetails = dictionary_of_customers[Account_no]
                customer.seeDetails(customerDetails)

            elif ch == 5:
                customerDetails = dictionary_of_customers[Account_no]
                customer.updateDetails(customerDetails)

            elif ch == 6:
                print("*********************************************************************************************************")
                NewCustomer = customer()                                                # creating a new object of customer class
                dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__  # adding new customer to dictionary
                break
                #customer.openNewAccount()

            elif ch == 7:
                print("*********************************************************************************************************")
                print("Respected Sir/mam ",(dictionary_of_customers[Account_no])['Name'],"\n are you sure want to delete your account:",(dictionary_of_customers[Account_no])['Account_no'],"\nplease type \" YES \" to confirm: ",end="")
                confirmation = input()
                if confirmation.lower() == "yes" :
                    print("\nyour account: ", dictionary_of_customers.pop(Account_no),"is deleted")
                    break
                #self.deleteAccount()      

            elif ch == 8:
                print("Thanks for using our service...")
                td.sleep(1)
                f = open("customerData.txt", "w")
                f.write(str(dictionary_of_customers))
                f.close()
                exit()

            elif ch == 9:
                break
            else:
                print("Please check your input...")
    
    def withdrawl(Account_no):
        print("*********************************************************************************************************")
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("Current Balance \t: ", Balance)
        withdrawl_ammount = int(input("enter the amount you want to \"withdraw\": ".title()))
        (dictionary_of_customers[Account_no])['Balance'] -= withdrawl_ammount      # for updated customer details
        customerDetails = dictionary_of_customers[Account_no]                       # fetching new balance
        Balance = customerDetails['Balance']
        #print("DEAR CUSTOMER YOUR UPDATED BALANCE IS AS FOLLOWS:-")
        print("UPDATED Balance \t: ", Balance)

    def deposit(Account_no):
        print("*********************************************************************************************************")
        customerDetails = dictionary_of_customers[Account_no]
        Balance = customerDetails['Balance']
        print("Current Balance \t: ", Balance)
        deposited_ammount = int(input("enter the amount you want to \"Deposit\": ".title()))
        (dictionary_of_customers[Account_no])['Balance'] += deposited_ammount      # for updated customer details
        customerDetails = dictionary_of_customers[Account_no]                       # fetching new balance
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
        for k, w in data.items() :
    	    print(k, "\t:", w)
    
    def updateDetails(data):
        customer.seeDetails(data)
        while True:
            print("\n what would you like to change: ".title())
            #print("Main Menu")
            print("1. NAME")
            print("2. DOB")
            print("3. gender")
            print("4. mobile no")
            print("5. Done show my updated details".title())
            print("6. Exit")
            print("7. BACK")
            ch = int(input("Enter your choice: "))
            if ch == 1:
                (dictionary_of_customers[Account_no])['Name'] = input("enter your name: ".title())
            elif ch == 2:
                y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
                (dictionary_of_customers[Account_no])['dob'] =  dt.date(int(y), int(m), int(d))
            elif ch == 3:
                (dictionary_of_customers[Account_no])['gender'] = input("Enter your gender: ".title())
            elif ch == 4:
                (dictionary_of_customers[Account_no])['mobile_no'] = int(input("Enter your mobile no: ".title()))
            elif ch == 5:
                customer.seeDetails(dictionary_of_customers[Account_no])
            elif ch == 6:
                print("Thanks for using our service...")
                td.sleep(1)
                f = open("customerData.txt", "w")
                f.write(str(dictionary_of_customers))
                f.close()
                exit()
            elif ch == 7:
                break
            else:
                print("Please check your input...")
    
#    def openNewAccount(self):
       





""" code that will be executed first """

while True:
    print("\n************* Main Menu *********************************************************************************")
    print("1. EXISTING CUSTOMER")          # done
    print("2. NEW CUSTOMER")               # done
    print("3. EXIT")                       # done
    ch = int(input("Enter your choice: "))
    if ch == 1:
        Account_no = int(input("enter your account no: ".title()))
        if Account_no in dictionary_of_customers.keys():
            customer.existing_customer(Account_no)                                  # calling method dedicated to exixting customers
        else:
            print("\n***Account not Found****\n\n please chose \"2.NEW CUSTOMER\" option")

    elif ch == 2:
        NewCustomer = customer()                                                # creating a new object of customer class
        dictionary_of_customers[NewCustomer.Account_no] = NewCustomer.__dict__  # adding new customer to dictionary


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


""" 
            if ch == 1:
                self.withdrawl()
            elif ch == 2:
                self.deposit()
            elif ch == 3:
                self.balStatus()



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
