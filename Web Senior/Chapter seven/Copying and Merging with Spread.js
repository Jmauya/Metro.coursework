const copy = { ...obj };
const merged = { ...defaults, ...overrides }; // later keys win
const defaults = { theme: "light", fontSize: 14 };
const custom = { ...defaults, theme: "dark" };
console.log(custom); // { theme: 'dark', fontSize: 14 }
console.log(defaults); // untouched
// Deep structures need structuredClone — same lesson as arrays:
const orig = { profile: { city: "Dhaka" } };
const deep = structuredClone(orig);
deep.profile.city = "Sylhet";
console.log(orig.profile.city); // Dhaka — fully independent
