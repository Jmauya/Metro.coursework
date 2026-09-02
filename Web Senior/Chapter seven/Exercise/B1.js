const timer = {
 seconds: 0,
 tick() { this.seconds++; return this.seconds; },
};
timer.tick(); timer.tick();
console.log(timer.tick()); // 3
