//A financial engine derives specialized product behavior (SavingsAccount and CheckingAccount) from a single base ledger class.
#include <iostream>
using namespace std;

class Ledger {
protected:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    void calculateInterest() {
        double interest = balance * 0.05;
        cout << "Savings Interest: " << interest << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    void transactionFee() {
        cout << "Checking Account Transaction Fee: 50" << endl;
    }
};

int main() {
    SavingsAccount savings;
    CheckingAccount checking;

    cout << "Savings Account:" << endl;
    savings.setBalance(10000);
    savings.displayBalance();
    savings.calculateInterest();

    cout << "\nChecking Account:" << endl;
    checking.setBalance(10000);
    checking.displayBalance();
    checking.transactionFee();

    return 0;
}