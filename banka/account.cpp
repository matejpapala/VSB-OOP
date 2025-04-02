#include "bank.h"
using namespace std;

int Account::objectCount = 0;

Account::Account(int n, Client *o) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = getDefaultInterestRate();
    owner  = o;
    partner = NULL;
}
Account::Account(int n, Client *c, Client *p) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = getDefaultInterestRate();
    owner = c;
    partner = p;
}

Account::Account(int n, Client *o, double ir) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = ir;
    owner = o;
    partner = NULL;
}

Account::Account(int n, Client *o, Client *p, double ir) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = ir;
    owner = o;
    partner = p;
}

void Account::Deposit(double amount) {
    balance += amount;
}

bool Account::canWithdraw(double amount) {
    return balance >= amount;
}

void Account::Withdraw(double amount) {
    if(canWithdraw(amount)) {
        balance -= amount;
    }
}

void Account::modifyInterestRate(double newRate) {
    interestRate = newRate;
}

void Account::modifyDefaultInterestRate(double newRate) {
    defaultInterestRate = newRate;
}

void Account::AddInterest() {
    balance = balance * interestRate;
}