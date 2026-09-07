const days = ["Sun","Mon","Tue","Wed","Thu","Fri","Sat"];
const weekend = [days[5], days[6]]; // or days.slice(5)
const lastThree = days.slice(-3); // ["Thu","Fri","Sat"]
console.log(days.length); // 7 — original intact
