const tasks = ["Buy notebook", "Finish lab"];
localStorage.setItem("tasks", JSON.stringify(tasks));
const saved = JSON.parse(localStorage.getItem("tasks")) || [];
console.log(saved); // ['Buy notebook', 'Finish lab']
