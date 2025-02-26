#pragma once
#include <iostream>

class Wallet {
private:
    int capacity;
    double balance;
public:
    Wallet(int capcity);
    double getBalance();
    void deposit(double money);
    void withdraw(double money);
};