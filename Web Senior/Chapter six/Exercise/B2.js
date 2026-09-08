const words = ["pen", "laptop", "cup", "monitor"];
const longUpper = words
 .filter((w) => w.length > 4)
 .map((w) => w.toUpperCase());
console.log(longUpper); // ["LAPTOP", "MONITOR"]
