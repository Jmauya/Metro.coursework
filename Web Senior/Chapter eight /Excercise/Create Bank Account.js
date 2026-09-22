//Write createBankAccount(initial) that returns an object with deposit and getBalance functions sharing a private balance via closure.

function createBankAccount(initial = 0) {
  let balance = initial;

  return {
    deposit(amount) {
      if (typeof amount === 'number' && amount > 0) {
        balance += amount;
      }
      return balance;
    },
    getBalance() {
      return balance;
    }
  };
}
