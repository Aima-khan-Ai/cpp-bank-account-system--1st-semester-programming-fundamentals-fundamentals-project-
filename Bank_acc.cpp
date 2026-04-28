#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    double amount;
    int choice;

    cout << "Enter opening balance: ";
    cin >> balance;

    do {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your balance is: " << balance << endl;

        } else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount > 0) {
                balance = balance + amount;
                cout << "Deposit successful! New balance: " << balance << endl;
            } else {
                cout << "Invalid amount!" << endl;
            }

        } else if (choice == 3) {
            cout << "Enter withdraw amount: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance = balance - amount;
                cout << "Withdrawal successful! New balance: " << balance << endl;
            }

        } else if (choice == 4) {
            cout << "Thank you! Goodbye!" << endl;

        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

