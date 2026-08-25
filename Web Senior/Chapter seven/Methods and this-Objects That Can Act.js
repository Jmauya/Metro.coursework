const obj = {
 data: ...,
 methodName(args) { // method shorthand
 this.data // 'this' = the object before the dot
 },
};
obj.methodName(x);
const account = {
 owner: "Sadia",
 balance: 5000,
 deposit(amount) {
 this.balance += amount;
 return this.balance;
 },
