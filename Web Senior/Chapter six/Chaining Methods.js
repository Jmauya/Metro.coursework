onst cart = [
 { item: "Book", price: 450, qty: 2 },
 { item: "Pen", price: 15, qty: 10 },
 { item: "Laptop", price: 55000, qty: 1 },
];
const affordableTotal = cart
 .filter((p) => p.price < 1000)
 .map((p) => p.price * p.qty)
 .reduce((sum, v) => sum + v, 0);
console.log(affordableTotal); // 1050
