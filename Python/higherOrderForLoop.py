# Higher Order Functions:
# map()
# filter()
# reduce()

# reduce needs to be imported
from functools import reduce

arr = [1, 3, 4, 6, 7, 12]
print("Original List:", arr)

# map
mapped = list(map(lambda n: n**2, arr))
print("After Mapping:", mapped)

# filter
filtered = list(filter(lambda n: n % 2 == 0, arr))
print("Filtered List:", filtered)

# reduce
acc = reduce(lambda a, b: a + b, arr, 0)
print("Sum:", acc)
