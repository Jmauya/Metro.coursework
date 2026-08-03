function repeat(times, action) {
 for (let i = 1; i <= times; i++) {
 action(i);
 }
}
repeat(3, (n) => console.log(`Tick ${n}`));
// Tick 1 Tick 2 Tick 3
