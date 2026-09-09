const product = [2, 3, 4].reduce((acc, n) => acc * n, 1);
// start: acc = 1
// round1: acc = 1, n = 2 -> 2
// round2: acc = 2, n = 3 -> 6
// round3: acc = 6, n = 4 -> 24
console.log(product); // 24
