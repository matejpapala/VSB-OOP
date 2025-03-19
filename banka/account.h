#pragma once
#include <iostream>
#include "client.h"
#include "bank.h"

class Account
{
private:
    int number;
    double balance;
    double interestRate;

    Client *owner;
    Client *partner;
public:
    Account(int n, Client *c);
    Account(int n, Client *c, Client *p);
    Account(int n, Client *c, double ir);
    Account(int n, Client *c, Client *p, double ir);

    int GetNumber(){ return number; }
    double GetBalance(){ return balance; }
    double GetInterestRate(){ return interestRate; }
    Client *GetOwner(){ return owner; }
    Client *GetPartner(){ return partner; }
    bool canWithdraw(double amount);

    void Deposit(double amount);
    void Withdraw(double amount);
    void modifyInterestRate(double newRate);
    void AddInterest();
};