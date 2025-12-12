#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

    void saveTransaction(const string& text) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << text << endl;
            file.close();
        }
    }

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << endl;
        saveTransaction("Deposit: +" + to_string(amount));
    }

    void makePurchase(const string& item, double cost) {
        if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
            saveTransaction("Failed Purchase (" + item + "): -" + to_string(cost));
        } else {
            balance -= cost;
            cout << "Purchased " << item << " for $" << cost << endl;
            saveTransaction("Purchase (" + item + "): -" + to_string(cost));
        }
    }

    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(250.00);
    myAccount.makePurchase("Coffee", 4.50);
    myAccount.makePurchase("Book", 25.00);
    myAccount.makePurchase("Groceries", 45.30);
    myAccount.makePurchase("Gas", 35.00);
    myAccount.deposit(50.00);
    myAccount.makePurchase("Shoes", 80.00);
    myAccount.makePurchase("Headphones", 200.00);

    myAccount.displayBalance();

    return 0;
}
