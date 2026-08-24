arr.some(test) // true if AT LEAST ONE element passes
arr.every(test) // true only if ALL elements pass
const users = [
 { name: "Sadia", role: "admin" },
 { name: "Tanvir", role: "user" },
];
console.log(users.some((u) => u.role === "admin")); // true
console.log(users.every((u) => u.role === "admin")); // false
