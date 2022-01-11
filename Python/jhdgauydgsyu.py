class Points(object):
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def print_point(self):
        print('x=',self.x,' y=',self.y)

p2=Points(1,2)
p2.x=2
p2.print_point()
