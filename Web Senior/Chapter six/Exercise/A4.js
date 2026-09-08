const nums = [1, 2, 6, 7];
nums.splice(2, 0, 3, 4, 5); // at index 2, delete 0, insert 3,4,5
console.log(nums); // [1, 2, 3, 4, 5, 6, 7]
