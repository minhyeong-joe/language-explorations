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
    - Higher-Order For Loops
    - Arrays
    - Strings
    - Generic Types
    - Object Comparison
    - Operator Overloading

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