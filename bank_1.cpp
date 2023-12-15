#include <iostream>
using namespace std;

int main() {
  // Initialize balances
  float balances[10] = {0.0}; // Set all balances to 0 initially

  bool done = false;
  int acct;

  do {
    // Account number prompt and validation
    cout << "What is Your account Number? ";
    cin >> acct;
	
	// Check if input is non-numeric
	if (cin.fail()) {
  		cin.clear(); // Clear the input buffer
  		cin.ignore(256, '\n'); // Ignore the remaining input
  		cout << "Invalid input. Please enter a valid account number." << endl;
  		continue; // Restart the loop
	}
	
    while (acct < -1 || acct > 9) {
      cout << "Invalid account number. Please try again." << endl;
      cout << "What is Your Account Number? ";
      cin >> acct;
    }

    if (acct == -1) {
      // Show all balances
      for (int i = 0; i < 10; i++) {
        cout << "Balance for account #" << i << " = $" << balances[i] << endl;
      }
    } else {
      // Main menu and user choice
      cout << endl << "BANK" << endl;
      cout << "1. Deposit" << endl;
      cout << "2. Withdraw" << endl;
      cout << "3. Show Balance" << endl;
      cout << "4. Quit" << endl;
      cout << ">> ";
      int choice;
      cin >> choice;

      switch (choice) {
        case 1:
          // Deposit
          float amount;
          cout << "How Much to Deposit? : ";
          cin >> amount;
          balances[acct] += amount;
          break;
        case 2:
          // Withdraw
          cout << "How Much to Withdraw? : ";
          cin >> amount;
          if (balances[acct] >= amount) {
            balances[acct] -= amount;
            cout << "Transaction Successful! Your new balance is: $" << balances[acct] << endl;
          } else {
            cout << "Transaction Not Allowed. Your balance is $" << balances[acct] << ". You can only withdraw a maximum of $" << balances[acct] << " at this time." << endl;
          }
          break;
        case 3:
          // Show balance
          cout << ">> Balance: " << balances[acct] << endl;
          break;
        case 4:
          // Quit
          cout << "Exiting the program.\n";
          done = true;
          break;
        default:
          // Invalid choice
          cout << "Invalid choice. Please try again.\n";
          break;
      }
    }

    // Continue or quit prompt
    char cnt;
    cout << "Do you want to Continue [Y/N] ";
    cin >> cnt;
    done = (cnt == 'n' || cnt == 'N');
  } while (!done);

  return 0;
}
