let arr = ['a', 'b', 'c', 'd'];
console.log(arr);

// string to hold output in a single line
str = "";
// Basic counter loop
for (let i = 0; i < arr.length; i++) {
    str += arr[i] + " ";
}
console.log(str);

str = "";
// for...in... (index)
for (let i in arr) {
    str += arr[i] + " ";
}
console.log(str);

str = "";
// for...of... (value)
for (let value of arr) {
    str += value + " ";
}
console.log(str);

// output:

// [ 'a', 'b', 'c', 'd' ]
// a b c d
// a b c d
// a b c d