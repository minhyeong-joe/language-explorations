'''
Uses pass-by-value, 
but when passing an object, the reference to the object is passed as value, 
allowing the object mutation. 
(This is also called as pass-by-object-reference)
'''


class MyObj:

    def __init__(self):
        self.__data = 0

    def getData(self):
        return self.__data

    def incData(self):
        self.__data += 1


def addNum(num):
    num += 1
    print("Inside Function: " + str(num))


def addString(string):
    string += " world"
    print("Inside Function: " + string)


def addArray(arr):
    for i in range(len(arr)):
        arr[i] += 1
    print("Inside Function: " + str(arr))


def addObj(obj):
    obj.incData()
    print("Inside Function: " + str(obj.getData()))


# primitive type
num = 0
string = "hello"

print("Before Function Call: " + str(num))
addNum(num)
print("After Function Call: " + str(num))

print("Before Function Call: " + string)
addString(string)
print("After Function Call: " + string)

# array
arr = [0, 1, 2]
print("Before Function Call: " + str(arr))
addArray(arr)
print("After Function Call: " + str(arr))

# object
obj = MyObj()
print("Before Function Call: " + str(obj.getData()))
addObj(obj)
print("After Function Call: " + str(obj.getData()))
