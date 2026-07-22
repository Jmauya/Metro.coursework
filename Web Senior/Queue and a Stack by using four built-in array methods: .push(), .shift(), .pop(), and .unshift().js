const queue = ["Rahim", "Karim"];
queue.push("Salma"); // ["Rahim", "Karim", "Salma"]
const served = queue.shift();
console.log(served); // Rahim — first in line got served
console.log(queue); // ["Karim", "Salma"]
const gaveUp = queue.pop();
console.log(gaveUp); // Salma — last in line left
queue.unshift("VIP"); // ["VIP", "Karim"]
