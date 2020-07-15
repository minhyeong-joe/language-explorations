# dynamic size
# allow different datatypes
# list slicing (ex. list[2:5])
# list comprehension (ex. [x for x in list if x > 5])
# list methods (ex. append(), insert(), extend(), pop(), remove(), sort(), reverse(), etc)

# different datatypes
myList = ['a', 1, 2.4, ['c', "hello"], (2, 4)]

print(myList)

# dynamic size
myList.append('o')
myList.extend(["more", "items", 10])

print(myList)
print()

# list slicing (inclusive start index to exclusive end index)
print("list slicing")
newList = [6, 3, 8, 2, 9, 4]
sliced = newList[1:3]
print(sliced)
sliced = newList[:4]    # equivalent to newList[0:4]
print(sliced)
sliced = newList[4:]    # equivalent to newList[4:len(newList)]
print(sliced)
sliced = newList[2:-2]  # negative indexing = counting from end
print(sliced)
print()

# list comprehension
print("list comprehension")
comp = [n for n in newList]     # copy every element
print(comp)
comp = [n for n in newList if n % 2 == 0]       # copy even elements only
print(comp)
# copy even elements from first 3 elements only
comp = [n for n in newList[:3] if n % 2 == 0]
print(comp)
print()

# some methods
print("methods:")
tupleList = [('A', 3), ('B', 5), ('C', 2), ('D', 8), ('E', 1)]
# sort
print("Sort By tuple[1]")
tupleList.sort(key=lambda pair: pair[1])
print(tupleList)
