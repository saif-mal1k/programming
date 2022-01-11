from time import sleep
import datetime as dt

class Bank():
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
    
    def withdrawl(self):
        accNo = int(input("Enter your Account no: "))
        data_accNo=32
        if accNo in data_accNo:
            pass    # code to fetch data and updation
        else:
            print("No Record Found in Our Database. Please Try Again...!")
    
    def deposit(self):
        accNo = int(input("Enter your Account no: "))
        data_accNo = 123
        if accNo in data_accNo:
            pass    #code to fetch data and updation
        else:
            print("No Record Found in Our Database. Please Try Again...!")
    
    def balStatus(self):
        accNo = int(input("Enter your Account no: "))
        data_accNo = 2332
        if accNo in data_accNo:
            pass    #code to fetch data
        else:
            print("No Record Found in Our Database. Please Try Again...!")

    def newAccount(self):
        name = input("Enter your name: ")
        gender = input("Enter your gender: ")
        y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
        dob = dt.date(int(y), int(m), int(d))
        age = int(input("Enter your age: "))
        mob = int(input("Enter your mobile no: "))
        bal = int(input("Deposit your initial amount: "))
        pin = int(input("Please select any 4 digit numeric pin for your account: "))
        #code to save data
        print("Conguragtulations...!! Your account is successfully created.")
        #print(f"Your account number is {accno[0][0]}. Please remember this as it is very important you will require it while doing any transaction.")
        sleep(2)

    def seeDetails(self):
        accNo = int(input("Enter your Account no: "))
        data_accNo = 323
        
        if accNo in data_accNo:
            pin = int(input("Enter your pin no = "))
            #code to fetch data    
        else:
            print("No Record Found in Our Database. Please Try Again...!")

    def updateDetails(self):
        accNo = int(input("Enter your Account no = "))
        data_accNo = 3223
        
        if accNo in data_accNo:
            pass # code to fetch data
        else:
            print("No Record Found in Our Database. Please Try Again...!")
        
customer = Bank()
