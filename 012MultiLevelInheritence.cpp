#include<bits/stdc++.h>
using namespace std;

// Base class
class Account{
protected:
    string accountNumber;
    string accountHolderName;
    long long balance;
public:
    // Parameterized constructor
    Account(string accountNumber, string accountHolderName, long long balance=0)
        : accountNumber(accountNumber), accountHolderName(accountHolderName), balance(balance) {
    }

    // Destructor
    ~Account() {
        cout << "Destructor is called for account " << accountNumber << endl;
    }

    // Deposit method
    void deposit(long long amount){
        balance += amount;
        cout << "Current Balance is " << balance << endl;
        cout << "Deposit amount is " << amount << endl;
    }

    // Withdraw method
    void withdraw(long long amount){
        if(balance < amount){
            cout << "Insufficient Balance for account " << accountNumber << endl;
            return;
        }
        balance -= amount;
        cout << "Current Balance is " << balance << endl;
        cout << "Withdraw amount is " << amount << endl;
    }

    // Getter method for balance
    long long getBalance(){
        return balance;
    }
};

// Derived class
class SavingsAccount: public Account{
protected:
    double interestRate;
public:
    // Parameterized constructor
    SavingsAccount(string accountNumber, string accountHolderName, long long amount, double interestRate=6.25)
        : Account(accountNumber, accountHolderName, amount), interestRate(interestRate) {
    }

    // Setter method for interest rate
    void setInterestRate(double interestRate){
        this->interestRate = interestRate;
    }

    // Function to get account type
    void getAccountType(){
        cout << "Savings Account\n";
    }

    // Function to display account details
    void displayAccount(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << this->getBalance() << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};


class SavingsAccountLoans: public SavingsAccount{
private:
    bool isLoanTaken;
    string loanType;
    double loanInterestRate;
    long long loanAmount;
    long long monthlyInstallments;
public:
    // Parameterized constructor
    SavingsAccountLoans(string accountNumber, string accountHolderName)
        : SavingsAccount(accountNumber, accountHolderName, 0), isLoanTaken(false), loanInterestRate(0), loanAmount(0), monthlyInstallments(0) {
    }

    // Function to take a loan
    void takeLoan(string loanType_, long long loanAmount){
        if(loanType_ == "Home"){
            this->loanInterestRate = 5.20;
        }else if(loanType_ == "Car"){
            this->loanInterestRate = 7.50;
        }else{
            this->loanInterestRate = 10.0;
        }
        this->isLoanTaken = true;
        this->loanAmount = loanAmount;
        this->monthlyInstallments = static_cast<long long>((this->loanInterestRate / 100.0) * this->loanAmount);
    }

    // Function to get monthly installment
    void getMonthlyInstallment(){
        if(this->isLoanTaken == false){
            cout << "No loan is taken.\n";
            return;
        }
        cout << "Monthly Installment: " << this->monthlyInstallments << endl;
    }
};

int main(){
    SavingsAccountLoans acc1("ACC001S", "Sukriti Guin");
    acc1.deposit(60000);
    acc1.deposit(70000);
    acc1.getMonthlyInstallment();
    acc1.takeLoan("Home", 1000000);
    acc1.getMonthlyInstallment();

    return 0;
}
