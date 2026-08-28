const inventory = [
 { sku: "P-01", name: "Pen", price: 15, qty: 40 },
 { sku: "B-01", name: "Notebook", price: 60, qty: 0 },
 { sku: "G-01", name: "Bag", price: 1200, qty: 7 },
];

// 1. Total stock value (price x qty, summed)

const stockValue = inventory.reduce((s, p) => s + p.price * p.qty, 0);

// 2. Which items need reordering?

const reorder = inventory.filter((p) => p.qty === 0).map((p) => p.name);
// 3. Sell 2 pens — immutable update

const afterSale = inventory.map((p) =>
 p.sku === "P-01" ? { ...p, qty: p.qty - 2 } : p
);
// 4. A report object, packed as JSON

const report = {
 generatedAt: "2026-07-22",
 stockValue,
 reorder,
 itemCount: inventory.length,
};
console.log(JSON.stringify(report, null, 2));
console.log(stockValue); // 9000
console.log(reorder); // ["Notebook"]
