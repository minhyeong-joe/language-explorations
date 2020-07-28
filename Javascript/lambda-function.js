const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

arr.forEach(function(value, index) {
    console.log(`Array[${index}] = ${value}`);
});

const sumOfEven = arr.reduce((prev, curr) => {
    return curr % 2 == 0? prev + curr: prev;
}, 0);

console.log(sumOfEven);