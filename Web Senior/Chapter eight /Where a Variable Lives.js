const appName = "CampusHub"; // global scope
function run() {
const local = "inside"; // function scope
if (true) {
const blockOnly = "deepest"; // block scope
console.log(appName, local, blockOnly); // all visible here
}
// console.log(blockOnly); // ReferenceError — out of its block
}
run();
