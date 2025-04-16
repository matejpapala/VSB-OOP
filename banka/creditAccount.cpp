#include "creditAccount.h"
using namespace std;


CreditAccount::CreditAccount(int n, Client* c, double cred) : Account(n, c) {
    this->creditLimit = cred;
}

CreditAccount::CreditAccount(int n, Client* c, double cred, double ir) : Account(n, c, ir) {
    this->creditLimit = cred;
}

bool CreditAccount::canWithdraw(double amount) {
    return(this->GetBalance() + this->creditLimit >= amount);
}

bool CreditAccount::Withdraw(double amount) {
    bool succes = false;
    if(this->canWithdraw(amount)) {
        this->balance -= amount;
        succes = true;
    }
    return succes;
}