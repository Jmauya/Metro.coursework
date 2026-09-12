const teams = [{ name: "Falcons", pts: 10 }];
const shallow = [...teams];
shallow[0].pts = 99;
console.log(teams[0].pts); // 99 — trap demonstrated
const deep = structuredClone(teams);
deep[0].pts = 10;
console.log(teams[0].pts); // 99 — original safe this time
