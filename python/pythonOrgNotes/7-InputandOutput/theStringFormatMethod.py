#Bsic usage of str.format()
print('We are the {} who say "{}!"'.format('knights','Ni'))

#Number in bracket can be used too
print('{0} and {1}'.format('spam', 'eggs'))
print('{1} and {0}'.format('spam', 'eggs'))

#Values can be referred to by using the name of the arugment
print('This {food} is {adjective}.'.format(
    food='spam', adjective='absolutely horrible'))

#Positional and keyword arguments can be combined
print('The story of {0}, {1}, and {other}.'.format('Bill','Manfred', other='Georg'))

#Var string reference
table = {'Sjoerd':4126, 'Jack': 4098, 'dcab': 272727}
print('Jack: {0[Jack]:d}; Sjoerd: {0[Sjoerd]:d}; Dcab: {0[dcab]:d}' .format(table))

#pasing the table dictionary 

table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 8637678}
print('Jack: {Jack:d}; Sjoerd: {Sjoerd:d}; Dcab: {Dcab:d}'.format(**table))

#Nice columns !
for x in range(1,11):
    print('{0:2d} {1:3d} {2:4d}'.format(x, x*x, x*x*x))

