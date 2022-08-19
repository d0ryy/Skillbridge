matrix = [
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
]
print("Original:",matrix)
#transpose rows and columns
print("Transposed:",[[row[i] for row in matrix] for i in range(4)])
# ^ same as...
transposed = []
for i in range(4):
    transposed.append([row[i] for row in matrix])
print("Transposed2:",transposed)
# also same as...
transposed2 = []
for i in range(4):
    transposed_row = []
    for row in matrix:
        transposed_row.append(row[i])
    transposed2.append(transposed_row)
print("Transposed3:", transposed2)

# or even better. built into python ;)
print("python Bake:",list(zip(*matrix)))

