squares = []
for x in range(10):
    squares.append(x**2)

print(squares)

squares = list(map(lambda x: x**2, range(10)))
##or
squares = [x**2 for x in range(10)]     #a lot better to read than the one above

#######################################
#for clause

print("\nFirst Method",[(x,y) for x in [1,2,3] for y in [3,1,4] if x != y])

# is the same as...
combs = []
for x in [1,2,3]:
    for y in [3,1,4]:
        if x != y:
            combs.append((x,y))

print("Second Method*",combs,'\n') #* preferred

#######################################
#Complex and nested functions:

from math import pi
print([str(round(pi, i)) for i in range(1, 6)])
#


