for (let i = 1; i <= 10; i++) {
 if (i === 4) continue; // skip 4, keep looping
 if (i === 7) break; // stop the loop entirely
 console.log(i);
}
// 1 2 3 5 6
