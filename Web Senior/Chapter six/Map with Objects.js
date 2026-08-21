const apiUsers = [
 { id: 1, first: "Nusrat", last: "Jahan", cgpa: 3.8 },
 { id: 2, first: "Rafi", last: "Ahmed", cgpa: 3.2 },
];
// The UI needs only full names:
const names = apiUsers.map((u) => `${u.first} ${u.last}`);
console.log(names); // ["Nusrat Jahan", "Rafi Ahmed"]
// Or a slimmer object per user:
const cards = apiUsers.map((u) => ({ name: u.first, cgpa: u.cgpa }));
