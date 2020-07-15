arr = ['a', 'b', 'c', 'd']
# basic counter loop
for i in range(len(arr)):
    print(arr[i], end=" ")
print()

# range-based for loop
for c in arr:
    print(c, end=" ")
print()

# dictionary
dictionary = dict({'key1': 'value1', 'key2': 'value2', 'key3': 'value3'})
for k, v in dictionary.items():
    print(k, v)

# tuples
tuples = [('a', 'b', 'c', 'x'), ('d', 'e', 'f', 'y'), ('g', 'h', 'i', 'z')]
for a, b, c, _ in tuples:
    print(a, b, c)

# using enumerate()
for index, value in enumerate(arr):
    print(index, value)

# output:
#
# a b c d
# a b c d
# key1 value1
# key2 value2
# key3 value3
# a b c
# d e f
# g h i
# 0 a
# 1 b
# 2 c
# 3 d
