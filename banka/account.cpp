#include "bank.h"
using namespace std;

int Account::objectCount = 0;

Account::Account(int n, Client *o) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = getDefaultInterestRate();
    owner  = o;
    cout << "Account constructor called" << endl;
}

Account::Account(int n, Client *o, double ir) {
    Account::objectCount++;
    number = n;
    balance = 0;
    interestRate = ir;
    owner = o;
    cout << "Account constructor called" << endl;
}

Account::~Account() {
    Account::objectCount--;
    cout << "Account destructor called" << endl;
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