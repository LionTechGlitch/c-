// WEEK 8 ACTIVITY 3: evaluating encapsulation (bad vs good design)
#include <iostream>
using namespace std;

class BadBankAccount {
public:
    double balance;            // everything public -> anyone can corrupt it
    BadBankAccount() { balance = 0.0; }
};

class GoodBankAccount {
private:
    double balance;
public:
    GoodBankAccount() { balance = 0.0; }
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    double getBalance() { return balance; }
};

int main() {
    cout << "--- Testing BAD Design ---" << endl;
    BadBankAccount badAccount;
    badAccount.balance = -5000;   // impossible in real life!
    cout << "Bad Account Balance: " << badAccount.balance << endl;

    cout << "\n--- Testing GOOD Design ---" << endl;
    GoodBankAccount goodAccount;
    // goodAccount.balance = -5000; // ERROR: private
    goodAccount.deposit(1000);
    goodAccount.deposit(-50);      // rejected by validation
    cout << "Good Account Balance: " << goodAccount.getBalance() << endl;
    return 0;
}
