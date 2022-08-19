
#Method is called right after it is bound:

class MyClass:
    i = 123443

    def f():
        return 'Hello World!'

x = MyClass

xf = x.f        ## can store data and wait to call later
while True:        ## call later
    print(xf())


