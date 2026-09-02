const name = "Mim";
const cgpa = 3.9;
const n = 6;
const record = { name, cgpa, ["semester_" + n]: true };
console.log(record); // { name: 'Mim', cgpa: 3.9, semester_6: true }
