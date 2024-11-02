#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string number;
    double balance;
    
public:
    BankAccount(const string &name, const string &num, double iniBalance) 
        : depositorName(name), number(num), balance(iniBalance) {}
    void display() const {
        cout << "Depositor's Name: " << depositorName << '\n';
        cout << "Account Number: " << number << '\n';
        cout << "Balance: $" << balance << '\n';
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << '\n';
        } else {
            cout << "Invalid deposit amount!" << '\n';
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << '\n';
        } else {
            cout << "Invalid or insufficient funds!" << '\n';
        }
    }
};

int main() {
    BankAccount account("Gunnar Gunnarsson", "8852357425", 1000.0);
    account.display();
    cout << '\n';
    account.deposit(500.0);
    cout << '\n';
    account.display();
    cout << '\n';
    account.withdraw(200.0);
    cout << '\n';
    account.display();
    

    return 0;
}
