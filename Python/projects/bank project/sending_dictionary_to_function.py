import datetime as dt

class customer(object):
    def __init__ (self):
        self.Account_no = 121 #len(dictionary_of_customers)
        self.Name = input("enter your name: ".title())
        self.gender = input("Enter your gender: ")
        y, m, d = input("Enter your dob (yyyy-mm-dd): ").split("-")
        self.dob = dt.date(int(y), int(m), int(d))
        self.age = int(input("Enter your age: "))
        self.mob = int(input("Enter your mobile no: "))
        self.bal = int(input("Deposit your initial amount: "))
        self.pin = int(
            input("Please select any 4 digit numeric pin for your account: "))
        #code to save data


def details(data):  # // here all value will be in data as a dictionary
    data = {'Account_no': 1, 'Name': "rafael", 'gender': "male",
            'dob': "1212-12-21", 'age': 21, 'mobile_no': 2121122121, 'balance': 500, 'pincode': 1212}
    for k, w in data.items():
	    print(k, ":", w)


d = customer()      # initializing d as an object of class customer

objects = {}        # creating an empty dictionary

objects[d.Account_no]=d.__dict__        # saving oject attributes as a dictionary,  as a value of key named Account_no
 
print(objects)      # printing objects, dictionary

account_no=d.Account_no

details(objects[account_no])      # sending objects , dictionary to function

input()
