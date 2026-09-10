function countBy(arr) {
 return arr.reduce((counts, item) => {
 counts[item] = (counts[item] ?? 0) + 1;
 return counts;
 }, {});
}
console.log(countBy(["a","b","a","c","a"])); // { a: 3, b: 1, c: 1 }
