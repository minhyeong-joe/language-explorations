# built-in exceptions
try:
    print(2/0)
except ZeroDivisionError as e:
    print(e)

# else: runs only when exception is not raised in try block
# finally: always run
arr = [0, 1, 2]
try:
    print(arr[3])
except IndexError as e:
    print(e)
else:
    print("No Exception")
finally:
    print("Finally")

print()

try:
    print(arr[2])
except IndexError as e:
    print(e)
else:
    print("No Exception")
finally:
    print("Finally")

print()

# user-defined exception (raise keyword)
# inherit Exception base class
class NotEvenException(Exception):
    def __init__(self, msg=None):
        if msg is None:
            msg = "NotEvenException"
        self.msg = msg
    
    def __str__(self):
        return self.msg


def printEven(num):
    if (num % 2 != 0):
        raise NotEvenException("Given number is not even")
    print(num)

try:
    printEven(2)
    printEven(3)    
except NotEvenException as e:
    print(e)

