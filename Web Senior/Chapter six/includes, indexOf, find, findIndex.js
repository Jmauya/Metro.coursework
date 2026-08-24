arr.includes(value) // true / false
arr.indexOf(value) // index, or -1 if absent
arr.find(test) // FIRST element passing test, or undefined
arr.findIndex(test) // its index, or -1

// 'test' is a function: (element) => true or false

const ids = [101, 205, 33];
console.log(ids.includes(205)); // true
console.log(ids.indexOf(205)); // 1
console.log(ids.indexOf(999)); // -1 — the standard 'not found' signal
const users = [
 { id: 7, name: "Sadia" },
 { id: 9, name: "Tanvir" },
];
console.log(users.indexOf({ id: 9 })); // -1 — exact match fails!
const found = users.find((u) => u.id === 9);
console.log(found.name); // Tanvir
console.log(users.findIndex((u) => u.id === 9)); // 1
