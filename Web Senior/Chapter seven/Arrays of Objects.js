const orders = [
 { id: 1, customer: "Asha", amount: 450, status: "paid" },
 { id: 2, customer: "Rafi", amount: 1200, status: "pending" },
 { id: 3, customer: "Mim", amount: 300, status: "paid" },
 { id: 4, customer: "Sadia", amount: 800, status: "paid" },
27
];

// Which order? -> find

const order2 = orders.find((o) => o.id === 2);

// Which orders? -> filter

const paid = orders.filter((o) => o.status === "paid");

// Reshape for display -> map
const lines = paid.map((o) => `${o.customer}: ${o.amount} BDT`);

// Total revenue -> reduce

const revenue = paid.reduce((s, o) => s + o.amount, 0);
console.log(revenue); // 1550

// UPDATE one item immutably -> map + spread

const updated = orders.map((o) =>
 o.id === 2 ? { ...o, status: "paid" } : o
);

// REMOVE one item immutably -> filter
const without3 = orders.filter((o) => o.id !== 3);
