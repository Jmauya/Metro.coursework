const pendingTotal = orders
 .filter((o) => o.status === "pending")
 .reduce((s, o) => s + o.amount, 0);
const paidLines = orders
 .filter((o) => o.status === "paid")
 .map((o) => `${o.customer} — ${o.amount}`);
const updated = orders.map((o) =>
 o.id === 2 ? { ...o, status: "paid" } : o);
