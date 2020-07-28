# used as anonymous
_sum = (lambda x, y: x + y)(2,3)
print(_sum)
# lambda works just like function except the body is single statement
_sum = (lambda x, y, z=3: x+y+z)(1, y=5)
print(_sum)
_sum = (lambda *args: sum(args))(1, 2, 3, 4)
print(_sum)

# used as callback
myTuples = [("B", 2), ("C", 4), ("A", 3), ("D", 1)]
# sort by first element of tuple by default
print(sorted(myTuples))
# using lambda to set sorting criteria
print(sorted(myTuples, key=lambda tuple: tuple[1]))

myDict = {"B": 2, "C": 4, "A": 3, "D": 1}
sorted_by_val = sorted(myDict.items(), key=lambda pair: pair[1])
print(sorted_by_val)

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
squared_arr = list(map(lambda x: x**2, arr))
filtered_arr = list(filter(lambda x: (x % 2 == 0 and x % 3 != 0) or (x % 3 == 0 and x % 2 != 0), arr))
print("Original Array:", arr)
print("Squared Array:", squared_arr)
print("Divisible by 2 XOR 3:", filtered_arr)
