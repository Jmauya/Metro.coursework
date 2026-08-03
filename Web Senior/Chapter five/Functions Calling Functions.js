const isPassing = (marks) => marks >= 40;
function reportCard(name, marks) {
 const result = isPassing(marks) ? "Passed" : "Failed";
 return `${name}: ${result} (${marks})`;
}
console.log(reportCard("Nusrat", 78)); // Nusrat: Passed (78)
