function invert(obj) {
 return Object.fromEntries(
 Object.entries(obj).map(([k, v]) => [v, k])
 );
}
console.log(invert({ a: "x", b: "y" })); // { x: "a", y: "b" }
