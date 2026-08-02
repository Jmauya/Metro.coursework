function orderTea(cups = 1, type = "milk tea") {
 return `${cups} cup(s) of ${type}`;
}
console.log(orderTea()); // 1 cup(s) of milk tea
console.log(orderTea(3, "green tea")); // 3 cup(s) of green tea
