#open() - returns a file object.
with open('/home/bigdaddy/internship/python/pythonOrgNotes/7-InputandOutput/test.txt', encoding="utf-8") as f:
    read_data = f.read()
    print(read_data)
print(f.closed)


#Saving structed data with json

import json
x = [1, 'simple', 'list']
print(json.dumps(x))

#dumps() serializes the object to a text file.
# json.dump(x, f) #if f is an file object, will save serialized data to location
# x = json.load(f) # loads file f into var x (binary or text)

#json files must be encoded in UTF-8

