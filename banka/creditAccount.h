#pragma once
#include <iostream>
#include "account.h"

class CreditAccount : public Account
{
private:
    double creditLimit;
public:
    CreditAccount(int n, Client* c, double cred);
    CreditAccount(int n, Client* c, double cred, double ir);

    bool canWithdraw(double ammount);
    bool Withdraw(double amount);
};