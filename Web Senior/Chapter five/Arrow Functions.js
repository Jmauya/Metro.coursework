// Regular function expression
const square1 = function (n) { return n * n; };
// Arrow function
const square2 = (n) => {
 return n * n;
};
// Arrow function, short form: one expression, implicit return
const square3 = (n) => n * n;
console.log(square3(6)); // 36
