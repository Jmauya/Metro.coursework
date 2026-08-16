arr.push(item) // ADD to the END — returns new length
arr.pop() // REMOVE from the END — returns the removed item
arr.unshift(item) // ADD to the FRONT — returns new length
arr.shift() // REMOVE from the FRONT — returns the removed item
const queue = ["Rahim", "Karim"];
queue.push("Salma"); // ["Rahim", "Karim", "Salma"]
const served = queue.shift();
console.log(served); // Rahim — first in line got served
console.log(queue); // ["Karim", "Salma"]
const gaveUp = queue.pop();
console.log(gaveUp); // Salma — last in line left
queue.unshift("VIP"); // ["VIP", "Karim"]
