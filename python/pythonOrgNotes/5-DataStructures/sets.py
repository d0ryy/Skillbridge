#set is an unorderede collection with no duplicate elements
#can use {} or set()
basket = {'apple', 'orange', 'apple', 'pear', 'orange','banna'}
print(basket) #no duplicates!
print("Is orange in basket?",'orange' in basket)
print("Crabgrass in basket?",'crabgrass' in basket)

#set operations on unique letters from two words

a = set('abracadabra')
b = set('alacazam')
print('\n',a,'\n',a - b,'\n',a | b, '\n', a & b, '\n', a ^ b)

# a -   :   shows unique leters in a
# a - b :   Letters in a but not in b
# a | b :   Letts in a or b or both
# a & b :   letters in both a and b
# a ^ b :   Letters in a or b but not both

#set comprehensions are also supported

c = {x for x in 'abracadabra' if x not in 'abc'}
print('\n',c)
