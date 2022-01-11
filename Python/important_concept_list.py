#important concept
l1=[1,2,3,4]
l2=[1,2,5,6]
for e in l1:
  if e in l2:
    add=l1.index(e)
    l1.pop(add)
print(l1)



#ruun it to understand

#this happens because python keeps track of where it is in the list using internal counter
#which is incremented at the end of each iteration
"""# In this case,
the hidden counter starts out at 0,
discovers that L1[0] is in L2,
and removes it—reducing the length of L1 to 3.
The counter is then incremented to 1,
and the code proceeds to check if the value of L1[1] is in L2.
Notice that this is not the original value of L1[1] (i.e., 2),
but rather the current value of L1[1] (i.e., 3). As you can see,
it is possible to figure out what happens when the list is modified within the loop.
However,
it is not easy."""

#alternate version

"""
l1=[1,2,3,4]
l2=[1,2,5,6]
for e in l2:
  if e in l1:
    add=l1.index(e)
    l1.pop(add)
print(l1)
"""
