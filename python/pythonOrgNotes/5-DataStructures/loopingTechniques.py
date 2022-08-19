#for looping through dicts. you can use the items() method

import enum


knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.items():
    print(k,v)

print('\n')
#enumerate() function ex.
for i, v in enumerate(['tic', 'tac','toe']):
    print(i,v)


print('\n')
#to loop over two or more seq. at same time, use zip()

questions = ['name', 'quest', 'favorite color']
answers = ['lancelot', 'the holy grail', 'blue']
for q, a in zip(questions, answers):
    print('What is your {0}?  It is {1}.'.format(q, a))
print('\n')
#loop over a seq in reverse
for i in reversed(range(1,10,2)):
    print(i)
#loop in a sorted order
print("\nsorted:")
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(basket):
    print(i)
# using set() on a seq. eliminates duplicates. Use sorted() with set() to loop over a list and return them in order, non dup.
print("\nsorted() & set():")
for f in sorted(set(basket)):
    print(f)
#Change a list while looping over it
print("\nCreate new list:")
import math
raw_data = [56.2, float('NaN'), 51.7, 55.3, 52.5, float('NaN'), 47.8]
filtered_data = []
for value in raw_data:
    if not math.isnan(value):
        filtered_data.append(value)
print(filtered_data)



