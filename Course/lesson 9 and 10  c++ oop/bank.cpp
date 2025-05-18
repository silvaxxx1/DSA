#include <iostream>
using namespace std;

// 🔹 Abstract base class
class BankAccount {
protected:
    string owner;
    double balance;

public:
    BankAccount(string name, double initialBalance)
        : owner(name), balance(initialBalance) {}

    virtual void Deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    virtual void Withdraw(double amount) = 0; // Pure virtual - must be implemented by derived classes
    virtual void Display() const = 0;         // Pure virtual - must be implemented by derived classes

    virtual ~BankAccount() {} // Virtual destructor for proper cleanup
};

// 🔹 Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string name, double initialBalance, double rate)
        : BankAccount(name, initialBalance), interestRate(rate) {}

    void Withdraw(double amount) override {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "❌ Insufficient funds in savings account!\n";
    }

    void AddInterest() {
        balance += balance * interestRate;
    }

    void Display() const override {
        cout << "👤 " << owner << " | 💰 Savings Balance: $" << balance << endl;
    }
};

// 🔹 Derived class: CheckingAccount
class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(string name, double initialBalance, double overdraft)
        : BankAccount(name, initialBalance), overdraftLimit(overdraft) {}

    void Withdraw(double amount) override {
        if (amount <= balance + overdraftLimit)
            balance -= amount;
        else
            cout << "❌ Overdraft limit exceeded!\n";
    }

    void Display() const override {
        cout << "👤 " << owner << " | 💳 Checking Balance: $" << balance << endl;
    }
};

// 🔹 Main function (App entry)
int main() {
    BankAccount* accounts[2];

    // Create accounts
    accounts[0] = new SavingsAccount("Alice", 1000, 0.05);     // 5% interest
    accounts[1] = new CheckingAccount("Bob", 500, 200);        // $200 overdraft

    // Display initial states
    for (int i = 0; i < 2; ++i) {
        accounts[i]->Display();
    }

    cout << "\n➡ Performing Transactions...\n";
    
    // Savings Account Transactions
    accounts[0]->Deposit(200);
    accounts[0]->Withdraw(150);
    dynamic_cast<SavingsAccount*>(accounts[0])->AddInterest();

    // Checking Account Transactions
    accounts[1]->Withdraw(650);  // Uses overdraft

    // Display final states
    cout << "\n📊 Final Account States:\n";
    for (int i = 0; i < 2; ++i) {
        accounts[i]->Display();
        delete accounts[i]; // Clean up dynamic memory
    }

    return 0;
}
