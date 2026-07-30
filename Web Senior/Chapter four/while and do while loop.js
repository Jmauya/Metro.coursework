let attempts = 0;
while (attempts < 3) {
 console.log(`Attempt ${attempts + 1}`);
 attempts++;
}
// do...while runs the body at least once
let n = 10;
do {
 console.log(n);
 n++;
} while (n < 3); // prints 10 once, condition false afterwards
