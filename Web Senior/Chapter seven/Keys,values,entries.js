Object.keys(obj)                            // ["key1", "key2", ...]
Object.values(obj)                         // [value1, value2, ...]
Object.entries(obj)                       // [["key1", value1], ["key2", value2], ...]
Object.fromEntries(pairs)                // pairs -> object (the way back)
const stock = { pen: 40, book: 12, bag: 7 };
for (const [item, qty] of Object.entries(stock)) {
 console.log(`${item}: ${qty} pcs`);
}
const total = Object.values(stock).reduce((s, n) => s + n, 0);
console.log(total);  // 59

// 'filter for objects': keep items with qty above 10

const plenty = Object.fromEntries(
 Object.entries(stock).filter(([, qty]) => qty > 10)
);
console.log(plenty);                           // { pen: 40, book: 12 }
