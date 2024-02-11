#include<bits/stdc++.h>
using namespace std;

// Base
class Account{
protected:
    string accountNumber;
    string accountHolderName;
    long long balance;
public:
    Account(string accountNumber, string accountHolderName, long long balance=0){
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }
    Account(){
        cout << "Default constructor is called for Account class\n";
    }
    ~Account(){ // Use virtual destructor for polymorphic behavior
        cout << "Destructor is called for account " << accountNumber << endl;
    }

    void deposit(long long amount){
        balance += amount;
        cout << "Current Balance is " << balance << endl;
        cout << "Deposit amount is " << amount << endl;
    }

    void withdraw(long long amount){
        if(balance < amount){
            cout << "Insufficient Balance for account " << accountNumber << endl;
            return;
        }
        balance -= amount;
        cout << "Current Balance is " << balance << endl;
        cout << "Withdraw amount is " << amount << endl;
    }

    long long getBalance(){
        return balance;
    }
};

class SavingsAccount: public Account{
private:
    double interestRate;
public:
    // Public constructor to create SavingsAccount objects
    SavingsAccount(string accountNumber, string accountHolderName, long long amount, double interestRate){
        // Assign values to base class members in the constructor body
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = amount;
        this->interestRate = interestRate;
    }

    void getAccountType(){ // Public function to get account type
        cout << "Savings Account\n";
    }

    void displayAccount(){ // Public function to display account details
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << this->getBalance() << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};

int main(){
    SavingsAccount acc1("AC001", "Sukriti Guin", 1000, 6.27);
    acc1.displayAccount();
    acc1.deposit(200);
    acc1.withdraw(1000);
    acc1.displayAccount();

    return 0;
}
