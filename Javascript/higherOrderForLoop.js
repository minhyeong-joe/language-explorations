// Javascript provides very easy way to write fat arrow functions
// and chain multiple higher order functions.
let arr = [3, 7, 4, 11, 8, 9];
console.log("Original List:", arr);

// for each
let str = "";
arr.forEach((val, i, arr) => {
    str += `${i + 1} out of ${arr.length}: ${val}\n`;
});
console.log(str);
str = "";

// map
// as side note: (param)=>{return x;} is same as (param)=>(x)
mapped = arr.map((val, index) => (val * index));
console.log("After Map():", mapped);

// filter
filtered = arr.filter(val => val % 2 == 0);
console.log("Filtered List:", filtered);

// reduce
acc = arr.reduce((acc, value) => acc + value, 0);
console.log("Sum:", acc);

// find
// find the FIRST item that meets condition
found = arr.find(value => value > 5);
console.log("Found:", found);

// every
// return true if ALL meet condition (For All)
isAll = arr.every((value, index) => value > index);
console.log("Every Value > its index:", isAll);

// some
// return true if at least one meets condition (There Exists)
isSome = arr.some(value => value > 10);
console.log("There exists a value > 10:", isSome);