function myMap(arr, fn) {
 const out = [];
 for (const [i, value] of arr.entries()) {
 out.push(fn(value, i));
 }
 return out;
}
console.log(myMap([1, 2, 3], (v, i) => v * 10 + i)); // [10, 21, 32]
