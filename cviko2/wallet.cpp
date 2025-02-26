#include "wallet.h"
using namespace std;

Wallet::Wallet(int capacity) {
    cout << "Wallet created" << endl;
    this->capacity = capacity;
    this->balance = 0;
}

double Wallet::getBalance() {
    cout << "Balance is: " << this->balance << endl;
    return this->balance;
}

void Wallet::deposit(double money) {
    if(this->balance + money > this-> capacity) {
        cout << "Cant deposit, wallet is full " << endl;
        return;
    }else{
        this->balance += money;
        cout << "Deposited: " << money << endl;
    }
}

void Wallet::withdraw(double money) {
    if(this->balance - money < 0) {
        cout << "Not enough money in wallet" << endl;
        return;
    }else {
        cout << "Withdrawn: " << money << endl;
        this->balance -= money;
    }
}