const team = {
name: "Falcons",
show() {
console.log(this.name); // 'Falcons' — this = the object before the dot
},
};
team.show();
const detached = team.show;
// detached(); // undefined — lost its object
// Arrow functions do NOT have their own this; they borrow it
// from the surrounding code. Use regular methods on objects,
// arrows for callbacks.
