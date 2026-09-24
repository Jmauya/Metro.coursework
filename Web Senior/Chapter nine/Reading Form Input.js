// HTML: <input id="nameInput" /> <button id="save">Save</button>
const input = document.querySelector("#nameInput");
const save = document.querySelector("#save");
save.addEventListener("click", () => {

24

const value = input.value.trim();
if (value === "") {
alert("Name cannot be empty");
return;
}
console.log(`Saved: ${value}`);
input.value = "";
});
