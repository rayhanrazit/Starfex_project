#include <iostream>

using namespace std;

int main() {
  double balance = 1000.0; // Initial balance
  int choice;
  double amount;

  while(true){
    cout << "---------- Bank Menu ----------\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Funds\n";
    cout << "3. Withdraw Funds\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
      cout << "Your current balance is: " << balance << " taka\n";
    } else if (choice == 2) {
      cout << "Enter amount to deposit: ";
      cin >> amount;

      if (amount > 0) {
        balance += amount;
        cout << "Deposit successful! New balance: " << balance << " taka\n";
      } else {
        cout << "Invalid amount. Please enter a positive value.\n";
      }
    } else if (choice == 3) {
      cout << "Enter amount to withdraw: ";
      cin >> amount;

      if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful! New balance: " << balance << " taka\n";
      } else if (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value.\n";
      } else {
        cout << "Insufficient balance. Withdrawal not possible.\n";
      }
    } else if (choice == 4) {
      cout << "Thank you for banking with us!\n";
      break;
    } else {
      cout << "Invalid choice. Please select a number from 1 to 4.\n";
    }
  }

  return 0;
}
