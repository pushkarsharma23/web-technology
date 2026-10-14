#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw "Insufficient Balance";
        }

        balance = balance - amount;
        cout << "Withdrawal Successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    string name;
    double balance, amount;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Balance: ";
    cin >> balance;

    BankAccount account(name, balance);

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    try {
        account.withdraw(amount);
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}