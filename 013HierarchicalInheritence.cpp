#include <iostream>
#include <string>
using namespace std;

// Base class
class Account {
protected:
    string accountNumber;
    string accountHolderName;
    long long balance;

public:
    // Parameterized constructor
    Account(string accountNumber, string accountHolderName, long long balance = 0)
        : accountNumber(accountNumber), accountHolderName(accountHolderName), balance(balance) {}

    // Deposit method
    void deposit(long long amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << endl;
    }

    // Withdraw method
    void withdraw(long long amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Insufficient funds in account " << accountNumber << endl;
        }
    }

    // Getter method for balance
    long long getBalance() const {
        return balance;
    }
};

// Derived class
class SavingsAccount : public Account {
protected:
    double interestRate;

public:
    // Parameterized constructor
    SavingsAccount(string accountNumber, string accountHolderName, long long balance, double interestRate)
        : Account(accountNumber, accountHolderName, balance), interestRate(interestRate) {}

    // Function to apply interest
    void applyInterest() {
        double interest = balance * interestRate;
        deposit(interest);
        cout << "Interest of " << interest << " applied to account " << accountNumber << endl;
    }

    // Function to display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};

// Derived class
class CurrentAccount : public Account {
public:
    // Parameterized constructor
    CurrentAccount(string accountNumber, string accountHolderName, long long balance)
        : Account(accountNumber, accountHolderName, balance) {}

    // Function to display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};

int main() {
    // Create an object of SavingsAccount
    SavingsAccount savingsAcc("SA001", "John Doe", 5000, 0.05);

    // Create an object of CurrentAccount
    CurrentAccount currentAcc("CA001", "Jane Smith", 10000);

    // Display account details
    cout << "Savings Account Details:" << endl;
    savingsAcc.displayAccount();

    cout << "\nCurrent Account Details:" << endl;
    currentAcc.displayAccount();

    // Deposit into the accounts
    savingsAcc.deposit(1000);
    currentAcc.deposit(2000);

    // Withdraw from the accounts
    savingsAcc.withdraw(200);
    currentAcc.withdraw(500);

    return 0;
}
