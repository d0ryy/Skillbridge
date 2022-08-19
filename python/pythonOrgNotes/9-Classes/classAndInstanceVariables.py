class Dog:
    kind = 'canine'             #Class var shared by all instances who use it

    def __init__(self, name):   
        self.name = name        #Unique to instance
        self.tricks = []

    def add_tricks(self,trick):
        self.tricks.append(trick)



d = Dog('Fido')
e = Dog('Buddy')                #shared by all dog sets

print(d.name,d.kind)            #names are specific when declared from before.
print(e.name,e.kind)

d.add_tricks('Roll Over')
e.add_tricks('play dead')

print(d.tricks,'\n',e.tricks)

