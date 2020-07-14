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
- For Loops
- Higher-Order For Loops
- Access Modifiers
- Generic Types
- Arrays (may need further breakdowns?)
- Strings (may need further breakdowns?)

    ... More to Come

---

## Pass By Value vs Reference

- **C++**

    C++ passes arguments by both value and reference, and the programmer has the freedom to make a choice based on the requirement.

    [Example C++](CPP/pass-by.cpp)

- **Java/ Python/ Javascript**

    Uses pass-by-value, but when passing an object, the reference to the object is passed as value, allowing the object mutation. (This is also called as `pass-by-object-reference`)

    [Example Python](Python/pass-by.py)

[**Back to Top**](#navigation)

---