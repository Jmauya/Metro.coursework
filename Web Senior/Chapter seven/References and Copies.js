const a = { count: 1 };
const b = a; // second key, same room
b.count = 99;
console.log(a.count); // 99
console.log({ x: 1 } === { x: 1 });           // false — two different rooms
console.log(a === b);                        // true — one room, two keys
