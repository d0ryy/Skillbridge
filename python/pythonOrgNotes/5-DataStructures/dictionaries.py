#Dictionaries are similar to "associateive memories" or "associateve arrays"
# indexed by keys
# are like a set of keys: value pairs. 
#main operations are storing a value with some key and extracting the value given the key

tel = {'jack': 4098, 'sape': 4139}
tel['guido'] = 4127
print(tel)
print(tel['jack'])
del tel['sape']
tel['irv'] = 4127
print(tel)
print(list(tel))
print(sorted(tel))
print('guido' in tel)
print('jack' not in tel)
#dict() builds dictionaaries based on sequences of key-value pairs
print(dict([('sape', 4139), ('guido', 4127), ('jack', 4098)]))

print({x: x**2 for x in (2, 4, 6)})

print(dict(sape=4139, guido=4127, jack=4098))   #another way to write the one above. If its ints, doing it this way may be easier

