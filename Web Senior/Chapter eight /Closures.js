function createCounter() {
let count = 0; // private variable
return function () {
count++;
return count;
};
}
const counter = createCounter();
console.log(counter()); // 1
console.log(counter()); // 2
console.log(counter()); // 3 — count survives between calls
