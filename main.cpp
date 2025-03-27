#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 1000.0; // Initial balance
    }

    void checkBalance() {
        cout << "Current Balance: $" << balance << "\n";
    }

    void depositMoney() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully!\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }

    void withdrawMoney() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully!\n";
        } else {
            cout << "Invalid transaction!\n";
        }
    }
};

int main() {
    BankAccount account;
    int choice;
    while (true) {
        cout << "\nBanking System\n";
        cout << "1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.checkBalance();
                break;
            case 2:
                account.depositMoney();
                break;
            case 3:
                account.withdrawMoney();
                break;
            case 4:
                cout << "Exiting... Thank you!\n";
                return 0;
            default:
                cout << "Invalid choice, try again!\n";
        }
    }
    return 0;
}

