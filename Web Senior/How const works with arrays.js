const list = [1, 2, 3];
list.push(4); // fine — we changed the inside of the box
list[0] = 99; // fine — same box, different contents
console.log(list); // [99, 2, 3, 4]
// list = [7, 8]; // TypeError: Assignment to constant variable
