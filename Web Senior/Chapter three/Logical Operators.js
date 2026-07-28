const age = 20;
const hasId = true;
console.log(age >= 18 && hasId); // AND: both must be true -> true
console.log(age < 18 || hasId); // OR: at least one true -> true
console.log(!hasId); // NOT: flips the value -> false
