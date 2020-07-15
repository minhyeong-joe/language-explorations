# Language Explorations

## What's it for?

This repo is used to explore key differences in behaviors and syntaxes among following languages:

- C++
- Java
- Python
- Javascript

The contents will be added to the collection as they come to mind.

Hopefully, this collection can also be used as cheatsheet or reference for above languages.

General structures of the repo:
```
ROOT
├ README.md  
├ .gitignore
├─── CPP
│    ├ feature1.cpp
│    ├ feature2.cpp 
│    ...
├─── Java
│    ├ feature1.java
│    ├ feature2.java
│    ... 
├─── Python
│    ├ feature1.py
│    ├ feature2.py
│    ... 
└─── Javascript
     ├ feature1.js
     ├ feature2.js
     ... 
```
---

## Navigation

*Needs refactors/re-ordering after more contents are added*

- [Fundamentals](#fundamentals) *(Syntax/Features)*
    - [For Loops](#for-loops)
    - [Higher-Order For Loops](#higher-order-for-loops)
    - [Arrays](#arrays)
    - Strings
    - Generic Types
    - Object Comparison
    - Operator Overloading
    - Exceptions

- [Built-in Data Structures](#built-in-data-structures)
    - Dynamic-sized Array
    - Set
    - Stack
    - Queue
    - Map/Dictionary
    - Hashtable

- [Procedural](#procedural)
    - [Pass By Value vs Reference](#pass-by-value-vs-reference)
    - Lambda Functions
    - Callback Functions
    - Default Parameters
    - Function Overloading

- [Object-Oriented](#object-oriented)
    - Access Modifiers
    - Encapsulation
    - Inheritance
    - Polymorphism

    ... More to Come

---

## Fundamentals

---

## For Loops

- **C++ / Java**

    *for (`type` `name` : `iterable`)*

    Basic Counter Loop (Index-based):
    ```c++
    for (int i = 0; i < sizeOfIterable; i++) {
        // code to play with iterable[i]
    }
    ```
    Range-based Loop (Element-based):
    ```c++
    // In C++, auto can be used to let compiler determine the type based on the iterable
    for (auto value : iterable) {
        // code to play with each value directly
    }
    ```

    [Java Example](Java/ForLoops.java)

- **Python**

    *for `name` in `iterable`*

    **Technically, Python does not have counter-based for-loop**

    *But combined with range(), which returns list of numbers, we can achieve basic counter loop as below*

    Basic Counter Loop (Index-based):
    ```python
    for i in range(len(iterable)):
        print(iterable[i])
    # range(start, end, step)
    # returns list of numbers from <start>(inclusive) to <end>(exclusive) with <step> increment
    ```

    Range-based Loop (Element-based):
    ```python
    for elem in iterable:
        print(elem)
    
    # also able to unpack tuple (multiple returns)
    for key, value in dict.items():
        print("key: {0}, value: {1}".format(key, value))
    # by convention, unpack unnecessary value with "_"
    for a, b, c, _ in tuple:
        print(a + b + c)
    ```

    Enumeration:
    ```python
    # using enumerate() to access both index and value
    for index, value in enumerate(arr):
        print(index, value)
    ```

    [Python Example](Python/for-loop.py)

- **Javascript**

    *for (let `name` in `iterable`)*
    
    *for (let `name` of `iterable`)*

    Basic counter Loop (Index-based):
    ```javascript
    for (let i = 0; i < iterable.length; i++) {
        console.log(iterable[i])
    }
    // Caution: unlike Python, below syntax (for...in...) accesses index, not values.
    for (let i in iterable) {
        console.log(iterable[i])
    }
    ```
    Range-based Loop (Element-based):
    ```javascript
    for (let element of iterable) {
        console.log(element)
    }
    ```

[**Back to Top**](#navigation)

---

## Higher-Order For Loops

**Some Common Higher-Order For Loops:**

**FOR EACH:** generally used to access each element (equivalent to range-based for-loop)

**MAP:** perform an operation on each element (modification)

**FILTER:** returns subset of elements that satisfy condition

**REDUCE:** computes a result by iterating over elements

- **C++**

    C++'s `<algorithm>` library includes following:
    - `transform`: equivalent to map.
    - `copy_if`: filter and create new copied list.
    - `remove_if`: filter and remove elements in place.

    `<numeric>` library:
    - `accumulate`: reduce, sequential only (slower, but in order)
    - `reduce`: reduce, parallelism allowed (faster, but incorrect in non-associate or non-commutative operations like subtract, divide, etc)

        *reduce's advantage execution policy requires tbb dependency*

    [higherOrderForLoop.cpp](CPP/higherOrderForLoop.cpp)

- **Java**

    Java's `Stream` Object has methods:
    - `map`: `Stream.map(element -> do_something)`
    - `filter`: `Stream.filter(element -> some_condition)`
    - `sum`: `Stream.sum()`
    - `average`: `Stream.average()`
    - `count`: `Stream.count()`
    - `reduce`: `Stream.reduce(accumulator, function(current, next))`
    
    `Java.util.Collection` has `stream` method to convert `Collection` to `Stream`,

    and `Arrays` class has `stream` method to convert any array into `Stream`

    [HigherOrderForLoop.java](Java/HigherOrderForLoop.java)

- **Python**

    Python has built-in higher-order functions:
    - `map(function, list)`
    - `filter(function, list)`
    - `reduce(function, list, accumulator)`

    [higherOrderForLoop.py](Python/higherOrderForLoop.py)

- **Javascript**

    Javascript's higher-order functions include:
    - `forEach(function(element[, index[, array]]))`: returns `undefined`. In-place, so **generally** not used for modification.
    - `map(function(element[, index[, array]]))`: returns new list after the transformation
    - `filter(function(element[, index[, array]]))`: returns new list that satisfy conditions
    - `reduce(function(accumulator, element[, index[, array]]), initialAccValue)`: returns the accumulated result
    
    and much more like: `find()`, `every()`, `some()`, `includes()`, `findIndex()`, etc.

    [MDN Array Doc](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array)

    [Javascript Example](Javascript/higherOrderForLoop.js)

[**Back to Top**](#navigation)

---

## Arrays

Array is a collection, or a list, of items.

- **C++**

    - static size: size needed at compile time
    - "items" must be of the same type
    - No warning for out of range (simply access/modify the data in that memory block)
    - Not really an object, merely placed in contiguous memory blocks

    [CPP Example](CPP/Array.cpp)

- **Java**

    - static size: size needed at compile time
    - "items" must be of the same type
    - Throws `ArrayIndexOutOfBoundsException` when trying to access beyond initial size
    - `java.util.Arrays` provides array methods

    [Java Example](Java/Array.java)

- **Python**
    
    Provides [array module](https://docs.python.org/3/library/array.html): single datatype + dynamic size + array methods

    But generally utilizes `list` - a much more flexible option

    - dynamic size
    - allow different datatypes
    - list slicing (ex. `list[2:5]`)
    - list comprehension (ex. `[x for x in list if x > 5]`)
    - list methods (ex. `append()`, `insert()`, `extend()`, `pop()`, `remove()`, `sort()`, `reverse()`, etc)

    [Python Exampe](Python/Array.py)

- **Javascript**

    - dynamic size
    - allow different datatypes
    - array methods (ex. `push()`, `pop()`, `slice()`, `unshift()`, `sort()`, etc)  
    - Similar to Python's list, so no separate example

[**Back to Top**](#navigation)

---

## Built-in Data Structures

---

## Procedural

---

## Pass By Value vs Reference

- **C++**

    C++ passes arguments by both value and reference, and the programmer has the freedom to make a choice based on the requirement.

    [C++ Example](CPP/pass-by.cpp)

- **Java/ Python/ Javascript**

    Uses pass-by-value, but when passing an object, the reference to the object is passed as value, allowing the object mutation. (This is also called as `pass-by-object-reference`)

    [Python Example](Python/pass-by.py)

[**Back to Top**](#navigation)

---

## Object-Oriented

---