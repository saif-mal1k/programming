#this is very important concept
#here since mult is defined in main python file therefore value of x and y
#can be used in mult...
x=5
y=4
def mult():
  x=5
  ans=x*y
  print(ans)
mult()


#output is:
#20


"""
some people mistook's that x and y are not passed to mult therefore it can't use
but actually x and y are in main and alse mult is defined in main therefore it can
"""
