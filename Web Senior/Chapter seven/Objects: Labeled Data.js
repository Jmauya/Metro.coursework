const student = {
 name: "Tanvir",
 id: "CSE-2101",
 cgpa: 3.6,
 isRegular: true,
};
console.log(student.name); // dot notation: Tanvir
console.log(student["cgpa"]); // bracket notation: 3.6
student.cgpa = 3.65; // update
student.dept = "CSE"; // add a new property
