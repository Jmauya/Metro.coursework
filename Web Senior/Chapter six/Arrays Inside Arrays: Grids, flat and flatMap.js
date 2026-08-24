const grid = [ [/* row 0 */], [/* row 1 */] ];
grid[row][column] // one cell
nested.flat() // un-nest ONE level
nested.flat(Infinity)// un-nest completely
arr.flatMap(fn) // map, then flat(1) — for one-to-many transforms

const grid = [
 [1, 2, 3],
 [4, 5, 6],
 [7, 8, 9],
];
console.log(grid[1][2]); // 6 — row 1, column 2
let total = 0;
for (const row of grid) {
 for (const cell of row) total += cell;
}
console.log(total); // 45
const nested = [1, [2, 3], [4, [5]]];
console.log(nested.flat()); // [1, 2, 3, 4, [5]]
console.log(nested.flat(Infinity)); // [1, 2, 3, 4, 5]
const sentences = ["I love JS", "Arrays rock"];
const words = sentences.flatMap((s) => s.split(" "));
console.log(words); // ["I", "love", "JS", "Arrays", "rock"]
