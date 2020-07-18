class Point:

    def __init__(self, x=None, y=None):
        self._x = x
        self._y = y

    # print overload
    def __str__(self):
        return "(" + str(self._x) + ", " + str(self._y) + ")"

    # unary bitwise not
    def __invert__(self):
        self._x = -self._x
        self._y = -self._y

    # binary addition
    def __add__(self, rhs):
        return Point(self._x + rhs._x, self._y + rhs._y)


a = Point(-2, -7)
b = Point(5, 4)

print("Point A: ", end="")
print(a)
print("Point B: ", end="")
print(b)

~a
print("~Point A: ", end="")
print(a)

c = a + b
print(str(a) + " + " + str(b) + " = " + str(c))
