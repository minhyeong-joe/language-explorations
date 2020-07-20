# initialize set
# NOTE: set of integers may appear to be sorted because integers usually hash to itself.
setA = {1, 2, 4, 3, 6, 9, 4, 6, 2}
setB = set((2, 5, 4, 7, 9, 4, 2))
setC = {"hello", "animal", "dog", "coffee", "donut", "hi"}
print(setA)
print(setB)
# for string, unordered trait is visible because hashing is not itself
print(setC)

# Set Operations
# intersection can be done using "&" operator as well.
intersection = setA.intersection(setB)
print("Intersection: " + str(intersection))
intersection = setA & setB
print("Intersection: " + str(intersection))

# union can be done using "|" operator as well.
union = setA.union(setB)
print("Union: " + str(union))
union = setA | setB
print("Union: " + str(union))

# difference can be done using "-" operator as well.
difference = setA.difference(setB)
print("Difference: " + str(difference))
difference = setA - setB
print("Difference: " + str(difference))

# symmetric difference = union - intersection (in either, but not in both)
# symmetric difference can be done using "^" operator as well.
symDifference = setA.symmetric_difference(setB)
print("Symmetric Difference: " + str(symDifference))
symDifference = setA ^ setB
print("Symmetric Difference: " + str(symDifference))
