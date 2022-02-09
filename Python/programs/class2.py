class box:
    def __init__ (self,l,b,h):
        self.l=l
        self.b=b
        self.h=h
    def display(self):
        print(self.l,self.b,self.h)
a=box(10,2,5)
a.display()
