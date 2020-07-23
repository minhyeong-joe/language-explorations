# empty dict
dictA = dict()
dictB = {}

# dict with some elements
person = dict({"name": {"first_name": "John", "last_name": "Doe"}, "age": 25})
dictC = {1: "Hello", 2: "World", 4: "Python"}

# accessing values
print(person["name"]["last_name"] + ", " + person["name"]["first_name"])
print("Age: " + str(person["age"]))
for key, value in dictC.items():
    print(str(key) + ":" + value)
print()

# insert
dictC[3] = "Python dict keeps insertion order"
for key, value in dictC.items():
    print(str(key) + ":" + value)
print()

# insert into existing key replaces value
dictC[4] = "Replaced value"
for key, value in dictC.items():
    print(str(key) + ":" + value)
print()

# remove
dictC.pop(4)
for key, value in dictC.items():
    print(str(key) + ":" + value)
print()

# exist check using "in"
print("Key 4 exists? " + str(4 in dictC))
print("Key 3 exists? " + str(3 in dictC))
print("Value Hello exists? " + str("Hello" in dictC.values()))