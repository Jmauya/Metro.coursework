arr.splice(startIndex, deleteCount, item1, item2, ...)
// startIndex — where the surgery begins
// deleteCount — how many elements to remove (0 = remove nothing)
// item1, ... — optional new elements to insert at that spot
Because splice can delete, insert, and replace, learn its three faces one at a time:
// FACE 1 — DELETE: remove 1 element at index 2
const a = ["Jan", "Feb", "BAD", "Mar"];
const removed = a.splice(2, 1);
console.log(a); // ["Jan", "Feb", "Mar"]
console.log(removed); // ["BAD"] — splice returns what it cut out
// FACE 2 — INSERT: at index 1, delete 0, insert "NEW"
a.splice(1, 0, "NEW");
console.log(a); // ["Jan", "NEW", "Feb", "Mar"]
// FACE 3 — REPLACE: at index 1, delete 1, insert two items
a.splice(1, 1, "X", "Y");
console.log(a); // ["Jan", "X", "Y", "Feb", "Mar"]
