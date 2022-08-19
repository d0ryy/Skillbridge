#tuple consists of a number of values seperated by commas:
t = 12345,25554,'hello!'
print(t[0])
print(t)

#nested tuples
u = t, (1,2,3,4,5)
print(u,'\n')

#tuples are immutable
# t[0] = 888888     # This will result in an error. 

#can contain multiple objects
v = ([1,2,3],[3,2,1])
print(v)

empty = ()
singleton = 'hello', #<- trailing coma
print(len(empty))
print(len(singleton))
print(singleton, '\n')
