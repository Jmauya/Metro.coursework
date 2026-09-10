const marks = [
 [80, 70, 90], // student 0
[60, 50, 70], // student 1
];
const averages = marks.map(
 (row) => row.reduce((s, m) => s + m, 0) / row.length
);
console.log(averages); // [80, 60]
