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

- [Pass By Value vs Reference](#pass-by-value-vs-reference)
- [For Loops](#for-loops)
- Higher-Order For Loops
- Access Modifiers
- Generic Types
- Arrays (may need further breakdowns?)
- Strings (may need further breakdowns?)
- Object Comparison

    ... More to Come

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

## For Loops

- **C++ / Java**

    Basic Counter Loop (Index-based):
    ```c++
    for (int i = 0; i < sizeOfIterable; i++) {
        // code to play with iterable[i]
    }
    ```
    Range-based Loop (Element-based):
    ```c++
    // In C++, auto can be used to let compiler determine the type based on the iterable
    for (auto element : iterable) {
        // code to play with each element directly
    }
    ```

- **Python**

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

- **Javascript**

    Basic counter Loop (Index-based):
    ```javascript
    for (let i = 0; i < iterable.length; i++) {
        console.log(iterable[i])
    }
    // Caution: unlike Java or Python, below syntax (for...in...) uses index, not element.
    for (let i in iterable) {
        console.log(iterable[i])
    }
    ```
    Range-based Loop (Element-based):
    ```javascript
    // Unlike Java or Python, uses for...of...
    // for...in... is used to fetch index not element
    for (let element of iterable) {
        console.log(element)
    }
    ```

[**Back to Top**](#navigation)

---