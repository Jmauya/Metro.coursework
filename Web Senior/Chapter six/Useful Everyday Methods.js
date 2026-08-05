const nums = [4, 9, 1, 9];
console.log(nums.includes(9)); // true
console.log(nums.indexOf(9)); // 1 (first match)
console.log(nums.slice(1, 3)); // [9, 1] (copy a portion; end not included)
console.log(nums.join(" - ")); // "4 - 9 - 1 - 9" 
const merged = [...nums, 100]; // spread: copy + add
console.log(merged); // [4, 9, 1, 9, 100]
