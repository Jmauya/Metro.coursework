const students = [
 { name: "Asha", cgpa: 3.7 },
 { name: "Rafi", cgpa: 3.2 },
 { name: "Mim", cgpa: 3.9 },
];
const topper = students.find((s) => s.cgpa > 3.8);
console.log(topper.name); // Mim
const anyFailing = students.some((s) => s.cgpa < 2.0); // false
const allPassing = students.every((s) => s.cgpa >= 2.0); // true

// sort: for numbers ALWAYS provide a compare function
const nums = [30, 4, 200, 11];
nums.sort((a, b) => a - b);
console.log(nums); // [4, 11, 30, 200]
