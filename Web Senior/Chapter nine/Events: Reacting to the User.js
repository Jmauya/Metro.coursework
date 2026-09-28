const btn = document.querySelector("#btn");
btn.addEventListener("click", () => {
const li = document.createElement("li");
li.textContent = `Notice added at ${new Date().toLocaleTimeString()}`;
list.appendChild(li);
});
