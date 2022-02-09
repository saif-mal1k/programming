try:
    a=int(input("enter the integer:"))
    b=int(input("enter second integer:"))
    c=a/b
    print("answer is",c)
except ZeroDivisionError:
    print("please donot divide with zero")
except ValueError:
    print("please enter integer only")
except Exception:
    print("try again")
