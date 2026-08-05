const students = [
 { name: "Asha", cgpa: 3.7 },
 { name: "Rafi", cgpa: 3.2 },
 { name: "Mim", cgpa: 3.9 },
];
const topper = students.find((s) => s.cgpa > 3.8);
console.log(topper.name); // Mim
const anyFailing = students.some((s) => s.cgpa < 2.0); // false
const allPassing = students.every((s) => s.cgpa >= 2.0); // true
