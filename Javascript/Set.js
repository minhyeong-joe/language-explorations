// initialize Set
let setA = new Set([1, 4, 3, 7, 5, 4, 5, 3]);
let setB = new Set([2, 6, 3, 7, 5, 3]);
let setC = new Set([5, 3, 3, 7, 5, 5, 1]);
console.log("Set A:", setA);
console.log("Set B:", setB);
console.log("Set C:", setC);

console.log(isSuperset(setA, setC));          // => true
console.log(isSuperset(setB, setC));          // => false
console.log(union(setA, setB));               // => Set [1, 4, 3, 7, 5, 2, 6]
console.log(intersection(setA, setB));        // => Set [3, 7, 5]
console.log(symmetricDifference(setA, setB)); // => Set [1, 4, 2, 6]
console.log(difference(setA, setB));          // => Set [1, 4]

// Basic Set Operations
// source: MDN doc (https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Set)
function isSuperset(set, subset) {
    for (let elem of subset) {
        if (!set.has(elem)) {
            return false
        }
    }
    return true
}

function union(setA, setB) {
    let _union = new Set(setA)
    for (let elem of setB) {
        _union.add(elem)
    }
    return _union
}

function intersection(setA, setB) {
    let _intersection = new Set()
    for (let elem of setB) {
        if (setA.has(elem)) {
            _intersection.add(elem)
        }
    }
    return _intersection
}

function symmetricDifference(setA, setB) {
    let _difference = new Set(setA)
    for (let elem of setB) {
        if (_difference.has(elem)) {
            _difference.delete(elem)
        } else {
            _difference.add(elem)
        }
    }
    return _difference
}

function difference(setA, setB) {
    let _difference = new Set(setA)
    for (let elem of setB) {
        _difference.delete(elem)
    }
    return _difference
}