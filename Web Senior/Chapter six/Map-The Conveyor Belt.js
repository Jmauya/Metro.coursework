const newArr = arr.map((element) => transformedValue);
// full form — the callback receives up to three things:
const newArr = arr.map((element, index, wholeArray) => ...);
const prices = [100, 250, 40];
const withVat = prices.map((price) => price * 1.15);
console.log(withVat); // [115, 287.5, 46]
console.log(prices); // [100, 250, 40] — untouched
