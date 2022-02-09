class box:
    def __init__ (self):
        self.l=10
        self.b=20
        self.h=54
    def display(self):
        print(self.l,self.b,self.h)
class boxweight(box):
    def __init__(self):
        box.__init__(self)
        self.w=50
    def display (self):
        box.display (self)
        print (self.w)
a=boxweight()
a.display()
