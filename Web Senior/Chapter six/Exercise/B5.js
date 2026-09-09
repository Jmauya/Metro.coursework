const fruits = ["banana", "Apple", "cherry"];
fruits.sort((a, b) =>
 a.toLowerCase().localeCompare(b.toLowerCase()));
console.log(fruits); // ["Apple", "banana", "cherry"]
