arr.sort((a, b) => a - b); // numbers, ascending
arr.sort((a, b) => b - a); // numbers, descending
arr.sort((a, b) => a.localeCompare(b)); // strings, alphabetical
const nums = [30, 4, 200, 11];
nums.sort(); // [11, 200, 30, 4] — WRONG (string sort)
nums.sort((a, b) => a - b); // [4, 11, 30, 200] — correct

const products = [
 { name: "Bag", price: 1200 },
 { name: "Pen", price: 15 },
 { name: "Book", price: 450 },
];
products.sort((a, b) => a.price - b.price); // by number
products.sort((a, b) => a.name.localeCompare(b.name)); // by name
