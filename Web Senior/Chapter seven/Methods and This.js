const account = {
 owner: "Sadia",
 balance: 5000,
 
 deposit(amount) {
 this.balance += amount;
  
 return `New balance: ${this.balance}`;
 },
};
console.log(account.deposit(1500)); // New balance: 6500
