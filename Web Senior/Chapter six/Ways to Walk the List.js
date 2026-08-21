for (const item of arr) { ... } // values only
for (let i = 0; i < arr.length; i++) { ... } // index in hand
for (const [i, item] of arr.entries()) { } // value AND index
arr.forEach((item, i) => { ... }); // callback style
const items = ["pen", "book", "bag"];
9
for (const item of items) {
 if (item === "book") break; // for...of CAN stop early
 console.log(item); // pen
}
for (const [i, item] of items.entries()) {
 console.log(`${i}: ${item}`); // 0: pen 1: book 2: bag
}
items.forEach((item, i) => console.log(i, item));
